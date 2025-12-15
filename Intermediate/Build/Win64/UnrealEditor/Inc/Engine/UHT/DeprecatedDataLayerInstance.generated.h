// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/DataLayer/DeprecatedDataLayerInstance.h"

#ifdef ENGINE_DeprecatedDataLayerInstance_generated_h
#error "DeprecatedDataLayerInstance.generated.h already included, missing '#pragma once' in DeprecatedDataLayerInstance.h"
#endif
#define ENGINE_DeprecatedDataLayerInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDeprecatedDataLayerInstance *********************************************
struct Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDeprecatedDataLayerInstance_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DeprecatedDataLayerInstance_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUDeprecatedDataLayerInstance(); \
	friend struct ::Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDeprecatedDataLayerInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UDeprecatedDataLayerInstance, UDataLayerInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDeprecatedDataLayerInstance_NoRegister) \
	DECLARE_SERIALIZER(UDeprecatedDataLayerInstance) \
	DECLARE_WITHIN(AWorldDataLayers)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DeprecatedDataLayerInstance_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDeprecatedDataLayerInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeprecatedDataLayerInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDeprecatedDataLayerInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeprecatedDataLayerInstance); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDeprecatedDataLayerInstance(UDeprecatedDataLayerInstance&&) = delete; \
	UDeprecatedDataLayerInstance(const UDeprecatedDataLayerInstance&) = delete; \
	ENGINE_API virtual ~UDeprecatedDataLayerInstance();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DeprecatedDataLayerInstance_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DeprecatedDataLayerInstance_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DeprecatedDataLayerInstance_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DeprecatedDataLayerInstance_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDeprecatedDataLayerInstance;

// ********** End Class UDeprecatedDataLayerInstance ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DeprecatedDataLayerInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
