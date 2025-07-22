// Copyright Epic Games, Inc. All Rights Reserved.

#include "AutoMesh2RigSimpleTool.h"
#include "InteractiveToolManager.h"
#include "ToolBuilderUtil.h"
#include "CollisionQueryParams.h"
#include "Engine/World.h"

// localization namespace
#define LOCTEXT_NAMESPACE "AutoMesh2RigSimpleTool"

/*
 * ToolBuilder implementation
 */

UInteractiveTool* UAutoMesh2RigSimpleToolBuilder::BuildTool(const FToolBuilderState& SceneState) const
{
	UAutoMesh2RigSimpleTool* NewTool = NewObject<UAutoMesh2RigSimpleTool>(SceneState.ToolManager);
	NewTool->SetWorld(SceneState.World);
	return NewTool;
}



/*
 * ToolProperties implementation
 */

UAutoMesh2RigSimpleToolProperties::UAutoMesh2RigSimpleToolProperties()
{
	ShowExtendedInfo = true;
}


/*
 * Tool implementation
 */

UAutoMesh2RigSimpleTool::UAutoMesh2RigSimpleTool()
{
}


void UAutoMesh2RigSimpleTool::SetWorld(UWorld* World)
{
	this->TargetWorld = World;
}


void UAutoMesh2RigSimpleTool::Setup()
{
	USingleClickTool::Setup();

	Properties = NewObject<UAutoMesh2RigSimpleToolProperties>(this);
	AddToolPropertySource(Properties);
}


void UAutoMesh2RigSimpleTool::OnClicked(const FInputDeviceRay& ClickPos)
{
	// we will create actor at this position
	FVector NewActorPos = FVector::ZeroVector;

	// cast ray into world to find hit position
	FVector RayStart = ClickPos.WorldRay.Origin;
	FVector RayEnd = ClickPos.WorldRay.PointAt(99999999.f);
	FCollisionObjectQueryParams QueryParams(FCollisionObjectQueryParams::AllObjects);
	FHitResult Result;
	if (TargetWorld->LineTraceSingleByObjectType(Result, RayStart, RayEnd, QueryParams))
	{
		if (AActor* ClickedActor = Result.GetActor())
		{
			FText ActorInfoMsg;

			if (Properties->ShowExtendedInfo)
			{
				ActorInfoMsg = FText::Format(LOCTEXT("ExtendedActorInfo", "Name: {0}\nClass: {1}"), 
					FText::FromString(ClickedActor->GetName()), 
					FText::FromString(ClickedActor->GetClass()->GetName())
				);
			}
			else
			{
				ActorInfoMsg = FText::Format(LOCTEXT("BasicActorInfo", "Name: {0}"), FText::FromString(Result.GetActor()->GetName()));
			}

			FText Title = LOCTEXT("ActorInfoDialogTitle", "Actor Info");
			// JAH TODO: consider if we can highlight the actor prior to opening the dialog box or make it non-modal
			FMessageDialog::Open(EAppMsgType::Ok, ActorInfoMsg, Title);
		}
	}
}


#undef LOCTEXT_NAMESPACE