// Copyright Epic Games, Inc. All Rights Reserved.

#include "WorldPartition/HLOD/HLODSourceActorsFromLevel.h"

#if WITH_EDITOR
#include "WorldPartition/HLOD/HLODActor.h"
#include "Engine/LevelStreamingDynamic.h"
#include "Engine/World.h"
#endif

UWorldPartitionHLODSourceActorsFromLevel::UWorldPartitionHLODSourceActorsFromLevel(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

#if WITH_EDITOR

ULevelStreaming* UWorldPartitionHLODSourceActorsFromLevel::LoadSourceActors(bool& bOutDirty) const
{
	AWorldPartitionHLOD* HLODActor = CastChecked<AWorldPartitionHLOD>(GetOuter());
	UWorld* World = HLODActor->GetWorld();

	bool bSuccess = false;
	FName LevelStreamingName = SourceLevel.GetUniqueID().GetLongPackageFName();
	ULevelStreamingDynamic* LevelStreaming = ULevelStreamingDynamic::LoadLevelInstanceBySoftObjectPtr(World, SourceLevel, FTransform::Identity, bSuccess, TEXT(""), nullptr, true);

	if (bSuccess && LevelStreaming)
	{
		World->FlushLevelStreaming();
		return LevelStreaming;
	}

	return nullptr;
}

uint32 UWorldPartitionHLODSourceActorsFromLevel::GetHLODHash() const
{
	// SourceLevel
	return FCrc::StrCrc32(*SourceLevel.GetUniqueID().GetLongPackageName(), Super::GetHLODHash());
}


void UWorldPartitionHLODSourceActorsFromLevel::SetSourceLevel(const UWorld* InSourceLevel)
{
	SourceLevel = const_cast<UWorld*>(InSourceLevel);
}

const TSoftObjectPtr<UWorld>& UWorldPartitionHLODSourceActorsFromLevel::GetSourceLevel() const
{
	return SourceLevel;
}

#endif // #if WITH_EDITOR