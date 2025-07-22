// Copyright Epic Games, Inc. All Rights Reserved.

#include "AutoMesh2RigModule.h"
#include "AutoMesh2RigEditorModeCommands.h"

#define LOCTEXT_NAMESPACE "AutoMesh2RigModule"

void FAutoMesh2RigModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	FAutoMesh2RigEditorModeCommands::Register();
}

void FAutoMesh2RigModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	FAutoMesh2RigEditorModeCommands::Unregister();
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FAutoMesh2RigModule, AutoMesh2RigEditorMode)