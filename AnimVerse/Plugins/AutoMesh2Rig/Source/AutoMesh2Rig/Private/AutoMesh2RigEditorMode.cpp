// Copyright Epic Games, Inc. All Rights Reserved.

#include "AutoMesh2RigEditorMode.h"
#include "AutoMesh2RigEditorModeToolkit.h"
#include "EdModeInteractiveToolsContext.h"
#include "InteractiveToolManager.h"
#include "AutoMesh2RigEditorModeCommands.h"


//////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////// 
// AddYourTool Step 1 - include the header file for your Tools here
//////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////// 
#include "Tools/AutoMesh2RigSimpleTool.h"
#include "Tools/AutoMesh2RigInteractiveTool.h"

// step 2: register a ToolBuilder in FAutoMesh2RigEditorMode::Enter() below


#define LOCTEXT_NAMESPACE "AutoMesh2RigEditorMode"

const FEditorModeID UAutoMesh2RigEditorMode::EM_AutoMesh2RigEditorModeId = TEXT("EM_AutoMesh2RigEditorMode");

FString UAutoMesh2RigEditorMode::SimpleToolName = TEXT("AutoMesh2Rig_ActorInfoTool");
FString UAutoMesh2RigEditorMode::InteractiveToolName = TEXT("AutoMesh2Rig_MeasureDistanceTool");


UAutoMesh2RigEditorMode::UAutoMesh2RigEditorMode()
{
	FModuleManager::Get().LoadModule("EditorStyle");

	// appearance and icon in the editing mode ribbon can be customized here
	Info = FEditorModeInfo(UAutoMesh2RigEditorMode::EM_AutoMesh2RigEditorModeId,
		LOCTEXT("ModeName", "AutoMesh2Rig"),
		FSlateIcon(),
		true);
}


UAutoMesh2RigEditorMode::~UAutoMesh2RigEditorMode()
{
}


void UAutoMesh2RigEditorMode::ActorSelectionChangeNotify()
{
}

void UAutoMesh2RigEditorMode::Enter()
{
	UEdMode::Enter();

	//////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////
	// AddYourTool Step 2 - register the ToolBuilders for your Tools here.
	// The string name you pass to the ToolManager is used to select/activate your ToolBuilder later.
	//////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////// 
	const FAutoMesh2RigEditorModeCommands& SampleToolCommands = FAutoMesh2RigEditorModeCommands::Get();

	RegisterTool(SampleToolCommands.SimpleTool, SimpleToolName, NewObject<UAutoMesh2RigSimpleToolBuilder>(this));
	RegisterTool(SampleToolCommands.InteractiveTool, InteractiveToolName, NewObject<UAutoMesh2RigInteractiveToolBuilder>(this));

	// active tool type is not relevant here, we just set to default
	GetToolManager()->SelectActiveToolType(EToolSide::Left, SimpleToolName);
}

void UAutoMesh2RigEditorMode::CreateToolkit()
{
	Toolkit = MakeShareable(new FAutoMesh2RigEditorModeToolkit);
}

TMap<FName, TArray<TSharedPtr<FUICommandInfo>>> UAutoMesh2RigEditorMode::GetModeCommands() const
{
	return FAutoMesh2RigEditorModeCommands::Get().GetCommands();
}

#undef LOCTEXT_NAMESPACE
