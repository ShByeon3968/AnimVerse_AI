// Copyright Epic Games, Inc. All Rights Reserved.

#include "AutoMesh2RigEditorModeCommands.h"
#include "AutoMesh2RigEditorMode.h"
#include "EditorStyleSet.h"

#define LOCTEXT_NAMESPACE "AutoMesh2RigEditorModeCommands"

FAutoMesh2RigEditorModeCommands::FAutoMesh2RigEditorModeCommands()
	: TCommands<FAutoMesh2RigEditorModeCommands>("AutoMesh2RigEditorMode",
		NSLOCTEXT("AutoMesh2RigEditorMode", "AutoMesh2RigEditorModeCommands", "AutoMesh2Rig Editor Mode"),
		NAME_None,
		FEditorStyle::GetStyleSetName())
{
}

void FAutoMesh2RigEditorModeCommands::RegisterCommands()
{
	TArray <TSharedPtr<FUICommandInfo>>& ToolCommands = Commands.FindOrAdd(NAME_Default);

	UI_COMMAND(SimpleTool, "Show Actor Info", "Opens message box with info about a clicked actor", EUserInterfaceActionType::Button, FInputChord());
	ToolCommands.Add(SimpleTool);

	UI_COMMAND(InteractiveTool, "Measure Distance", "Measures distance between 2 points (click to set origin, shift-click to set end point)", EUserInterfaceActionType::ToggleButton, FInputChord());
	ToolCommands.Add(InteractiveTool);
}

TMap<FName, TArray<TSharedPtr<FUICommandInfo>>> FAutoMesh2RigEditorModeCommands::GetCommands()
{
	return FAutoMesh2RigEditorModeCommands::Get().Commands;
}

#undef LOCTEXT_NAMESPACE
