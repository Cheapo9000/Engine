// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/DataLayer/DataLayerInstanceWithAsset.h"

#ifdef ENGINE_DataLayerInstanceWithAsset_generated_h
#error "DataLayerInstanceWithAsset.generated.h already included, missing '#pragma once' in DataLayerInstanceWithAsset.h"
#endif
#define ENGINE_DataLayerInstanceWithAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataLayerInstanceWithAsset **********************************************
struct Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstanceWithAsset_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceWithAsset_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUDataLayerInstanceWithAsset(); \
	friend struct ::Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDataLayerInstanceWithAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLayerInstanceWithAsset, UDataLayerInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDataLayerInstanceWithAsset_NoRegister) \
	DECLARE_SERIALIZER(UDataLayerInstanceWithAsset)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceWithAsset_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDataLayerInstanceWithAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLayerInstanceWithAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDataLayerInstanceWithAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLayerInstanceWithAsset); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLayerInstanceWithAsset(UDataLayerInstanceWithAsset&&) = delete; \
	UDataLayerInstanceWithAsset(const UDataLayerInstanceWithAsset&) = delete; \
	ENGINE_API virtual ~UDataLayerInstanceWithAsset();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceWithAsset_h_9_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceWithAsset_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceWithAsset_h_12_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceWithAsset_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLayerInstanceWithAsset;

// ********** End Class UDataLayerInstanceWithAsset ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceWithAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
