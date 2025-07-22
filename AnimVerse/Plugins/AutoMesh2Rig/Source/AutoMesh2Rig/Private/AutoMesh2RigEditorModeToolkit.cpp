// Copyright Epic Games, Inc. All Rights Reserved.

#include "AutoMesh2RigEditorModeToolkit.h"
#include "AutoMesh2RigEditorMode.h"
#include "Engine/Selection.h"

#include "Modules/ModuleManager.h"
#include "PropertyEditorModule.h"
#include "IDetailsView.h"
#include "EditorModeManager.h"

#define LOCTEXT_NAMESPACE "AutoMesh2RigEditorModeToolkit"

FAutoMesh2RigEditorModeToolkit::FAutoMesh2RigEditorModeToolkit()
{
}

void FAutoMesh2RigEditorModeToolkit::Init(const TSharedPtr<IToolkitHost>& InitToolkitHost, TWeakObjectPtr<UEdMode> InOwningMode)
{
	FModeToolkit::Init(InitToolkitHost, InOwningMode);
}

void FAutoMesh2RigEditorModeToolkit::GetToolPaletteNames(TArray<FName>& PaletteNames) const
{
	PaletteNames.Add(NAME_Default);
}


FName FAutoMesh2RigEditorModeToolkit::GetToolkitFName() const
{
	return FName("AutoMesh2RigEditorMode");
}

FText FAutoMesh2RigEditorModeToolkit::GetBaseToolkitName() const
{
	return LOCTEXT("DisplayName", "AutoMesh2RigEditorMode Toolkit");
}

#undef LOCTEXT_NAMESPACE
