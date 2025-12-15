// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/HLODOnlyLevelInstanceActor.h"

#ifdef ENGINE_HLODOnlyLevelInstanceActor_generated_h
#error "HLODOnlyLevelInstanceActor.generated.h already included, missing '#pragma once' in HLODOnlyLevelInstanceActor.h"
#endif
#define ENGINE_HLODOnlyLevelInstanceActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AWorldPartitionHLODOnlyLevelInstance *************************************
struct Z_Construct_UClass_AWorldPartitionHLODOnlyLevelInstance_Statics;
ENGINE_API UClass* Z_Construct_UClass_AWorldPartitionHLODOnlyLevelInstance_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODOnlyLevelInstanceActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldPartitionHLODOnlyLevelInstance(); \
	friend struct ::Z_Construct_UClass_AWorldPartitionHLODOnlyLevelInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_AWorldPartitionHLODOnlyLevelInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(AWorldPartitionHLODOnlyLevelInstance, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_AWorldPartitionHLODOnlyLevelInstance_NoRegister) \
	DECLARE_SERIALIZER(AWorldPartitionHLODOnlyLevelInstance) \
	virtual UObject* _getUObject() const override { return const_cast<AWorldPartitionHLODOnlyLevelInstance*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODOnlyLevelInstanceActor_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWorldPartitionHLODOnlyLevelInstance(AWorldPartitionHLODOnlyLevelInstance&&) = delete; \
	AWorldPartitionHLODOnlyLevelInstance(const AWorldPartitionHLODOnlyLevelInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AWorldPartitionHLODOnlyLevelInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldPartitionHLODOnlyLevelInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldPartitionHLODOnlyLevelInstance) \
	ENGINE_API virtual ~AWorldPartitionHLODOnlyLevelInstance();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODOnlyLevelInstanceActor_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODOnlyLevelInstanceActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODOnlyLevelInstanceActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODOnlyLevelInstanceActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWorldPartitionHLODOnlyLevelInstance;

// ********** End Class AWorldPartitionHLODOnlyLevelInstance ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODOnlyLevelInstanceActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
