// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/HLODModifier.h"

#ifdef ENGINE_HLODModifier_generated_h
#error "HLODModifier.generated.h already included, missing '#pragma once' in HLODModifier.h"
#endif
#define ENGINE_HLODModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldPartitionHLODModifier **********************************************
struct Z_Construct_UClass_UWorldPartitionHLODModifier_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionHLODModifier_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODModifier_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionHLODModifier(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionHLODModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionHLODModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionHLODModifier, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionHLODModifier_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionHLODModifier)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODModifier_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionHLODModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionHLODModifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionHLODModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionHLODModifier); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionHLODModifier(UWorldPartitionHLODModifier&&) = delete; \
	UWorldPartitionHLODModifier(const UWorldPartitionHLODModifier&) = delete; \
	ENGINE_API virtual ~UWorldPartitionHLODModifier();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODModifier_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODModifier_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODModifier_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODModifier_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionHLODModifier;

// ********** End Class UWorldPartitionHLODModifier ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
