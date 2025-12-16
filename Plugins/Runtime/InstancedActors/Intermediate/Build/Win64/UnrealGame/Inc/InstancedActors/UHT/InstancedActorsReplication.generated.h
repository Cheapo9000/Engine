// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InstancedActorsReplication.h"

#ifdef INSTANCEDACTORS_InstancedActorsReplication_generated_h
#error "InstancedActorsReplication.generated.h already included, missing '#pragma once' in InstancedActorsReplication.h"
#endif
#define INSTANCEDACTORS_InstancedActorsReplication_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FInstancedActorsDelta *********************************************
struct Z_Construct_UScriptStruct_FInstancedActorsDelta_Statics;
#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsReplication_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInstancedActorsDelta_Statics; \
	INSTANCEDACTORS_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


struct FInstancedActorsDelta;
// ********** End ScriptStruct FInstancedActorsDelta ***********************************************

// ********** Begin ScriptStruct FInstancedActorsDeltaList *****************************************
struct Z_Construct_UScriptStruct_FInstancedActorsDeltaList_Statics;
#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsReplication_h_86_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInstancedActorsDeltaList_Statics; \
	INSTANCEDACTORS_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FInstancedActorsDeltaList, InstanceDeltas, INSTANCEDACTORS_API );


struct FInstancedActorsDeltaList;
// ********** End ScriptStruct FInstancedActorsDeltaList *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsReplication_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
