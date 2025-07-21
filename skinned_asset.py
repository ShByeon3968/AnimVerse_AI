import bpy
import os
import addon_utils

def enable_import_export_addons():
    addon_utils.enable("io_scene_obj", default_set=True)
    addon_utils.enable("io_scene_fbx", default_set=True)

def clear_scene():
    bpy.ops.object.select_all(action='SELECT')
    bpy.ops.object.delete(use_global=False)


def import_fbx(fbx_path):
    bpy.ops.import_scene.fbx(filepath=fbx_path)
    armature = [obj for obj in bpy.context.selected_objects if obj.type == 'ARMATURE'][0]
    return armature


def import_obj(obj_path):
    bpy.ops.import_scene.obj(filepath=obj_path)
    mesh = [obj for obj in bpy.context.selected_objects if obj.type == 'MESH'][0]
    return mesh


def bind_mesh_to_armature(mesh_obj, armature_obj):
    bpy.ops.object.select_all(action='DESELECT')
    mesh_obj.select_set(True)
    armature_obj.select_set(True)
    bpy.context.view_layer.objects.active = armature_obj

    bpy.ops.object.parent_set(type='ARMATURE_AUTO')


def export_fbx(output_path):
    bpy.ops.export_scene.fbx(
        filepath=output_path,
        use_selection=False,
        apply_unit_scale=True,
        global_scale=1.0,
        apply_scale_options='FBX_SCALE_ALL',
        object_types={'ARMATURE', 'MESH'},
        bake_anim=False,
        add_leaf_bones=False,
        mesh_smooth_type='FACE',
        use_armature_deform_only=True,
        axis_forward='-Z',
        axis_up='Y'
    )
def cleanup_blender_memory():
    for block in bpy.data.objects:
        bpy.data.objects.remove(block, do_unlink=True)

    for block in bpy.data.meshes:
        bpy.data.meshes.remove(block, do_unlink=True)

    for block in bpy.data.armatures:
        bpy.data.armatures.remove(block, do_unlink=True)

    for block in bpy.data.materials:
        bpy.data.materials.remove(block, do_unlink=True)



def run_pipeline(fbx_path, obj_path, output_path):
    enable_import_export_addons()
    clear_scene()

    armature = import_fbx(fbx_path)
    mesh = import_obj(obj_path)

    bind_mesh_to_armature(mesh, armature)
    export_fbx(output_path)
    cleanup_blender_memory()


# ▶ 실행 예시 (경로 수정 필요)
if __name__ == "__main__":
    FBX_SKELETON_PATH = "outputs/infer_results_demo_hier/test_rigged.fbx"
    OBJ_MESH_PATH = "outputs/infer_results_demo_hier/test_mesh.obj"
    OUTPUT_FBX_PATH = "./rigged_output.fbx"

    run_pipeline(FBX_SKELETON_PATH, OBJ_MESH_PATH, OUTPUT_FBX_PATH)