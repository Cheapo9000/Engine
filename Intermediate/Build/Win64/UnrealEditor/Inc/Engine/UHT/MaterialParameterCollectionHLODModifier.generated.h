// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/MaterialParameterCollectionHLODModifier.h"

#ifdef ENGINE_MaterialParameterCollectionHLODModifier_generated_h
#error "MaterialParameterCollectionHLODModifier.generated.h already included, missing '#pragma once' in MaterialParameterCollectionHLODModifier.h"
#endif
#define ENGINE_MaterialParameterCollectionHLODModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FHLODModifierScalarParameter **************************************
struct Z_Construct_UScriptStruct_FHLODModifierScalarParameter_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_MaterialParameterCollectionHLODModifier_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHLODModifierScalarParameter_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FHLODModifierScalarParameter;
// ********** End ScriptStruct FHLODModifierScalarParameter ****************************************

// ********** Begin Class UMaterialParameterCollectionHLODModifier *********************************
struct Z_Construct_UClass_UMaterialParameterCollectionHLODModifier_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollectionHLODModifier_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_MaterialParameterCollectionHLODModifier_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialParameterCollectionHLODModifier(); \
	friend struct ::Z_Construct_UClass_UMaterialParameterCollectionHLODModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialParameterCollectionHLODModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialParameterCollectionHLODModifier, UWorldPartitionHLODModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialParameterCollectionHLODModifier_NoRegister) \
	DECLARE_SERIALIZER(UMaterialParameterCollectionHLODModifier)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_MaterialParameterCollectionHLODModifier_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialParameterCollectionHLODModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialParameterCollectionHLODModifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialParameterCollectionHLODModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialParameterCollectionHLODModifier); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialParameterCollectionHLODModifier(UMaterialParameterCollectionHLODModifier&&) = delete; \
	UMaterialParameterCollectionHLODModifier(const UMaterialParameterCollectionHLODModifier&) = delete; \
	NO_API virtual ~UMaterialParameterCollectionHLODModifier();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_MaterialParameterCollectionHLODModifier_h_32_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_MaterialParameterCollectionHLODModifier_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_MaterialParameterCollectionHLODModifier_h_35_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_MaterialParameterCollectionHLODModifier_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialParameterCollectionHLODModifier;

// ********** End Class UMaterialParameterCollectionHLODModifier ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_MaterialParameterCollectionHLODModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
