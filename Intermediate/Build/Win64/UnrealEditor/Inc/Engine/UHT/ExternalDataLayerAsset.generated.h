// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/DataLayer/ExternalDataLayerAsset.h"

#ifdef ENGINE_ExternalDataLayerAsset_generated_h
#error "ExternalDataLayerAsset.generated.h already included, missing '#pragma once' in ExternalDataLayerAsset.h"
#endif
#define ENGINE_ExternalDataLayerAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UExternalDataLayerAsset **************************************************
struct Z_Construct_UClass_UExternalDataLayerAsset_Statics;
ENGINE_API UClass* Z_Construct_UClass_UExternalDataLayerAsset_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerAsset_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUExternalDataLayerAsset(); \
	friend struct ::Z_Construct_UClass_UExternalDataLayerAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UExternalDataLayerAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UExternalDataLayerAsset, UDataLayerAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UExternalDataLayerAsset_NoRegister) \
	DECLARE_SERIALIZER(UExternalDataLayerAsset)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerAsset_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UExternalDataLayerAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExternalDataLayerAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UExternalDataLayerAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExternalDataLayerAsset); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UExternalDataLayerAsset(UExternalDataLayerAsset&&) = delete; \
	UExternalDataLayerAsset(const UExternalDataLayerAsset&) = delete; \
	ENGINE_API virtual ~UExternalDataLayerAsset();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerAsset_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerAsset_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerAsset_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerAsset_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UExternalDataLayerAsset;

// ********** End Class UExternalDataLayerAsset ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
