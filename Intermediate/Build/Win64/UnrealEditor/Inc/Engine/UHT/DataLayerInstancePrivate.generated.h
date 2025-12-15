// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/DataLayer/DataLayerInstancePrivate.h"

#ifdef ENGINE_DataLayerInstancePrivate_generated_h
#error "DataLayerInstancePrivate.generated.h already included, missing '#pragma once' in DataLayerInstancePrivate.h"
#endif
#define ENGINE_DataLayerInstancePrivate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataLayerInstancePrivate ************************************************
struct Z_Construct_UClass_UDataLayerInstancePrivate_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstancePrivate_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstancePrivate_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUDataLayerInstancePrivate(); \
	friend struct ::Z_Construct_UClass_UDataLayerInstancePrivate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDataLayerInstancePrivate_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLayerInstancePrivate, UDataLayerInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDataLayerInstancePrivate_NoRegister) \
	DECLARE_SERIALIZER(UDataLayerInstancePrivate) \
	DECLARE_WITHIN(AWorldDataLayers)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstancePrivate_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDataLayerInstancePrivate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLayerInstancePrivate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDataLayerInstancePrivate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLayerInstancePrivate); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLayerInstancePrivate(UDataLayerInstancePrivate&&) = delete; \
	UDataLayerInstancePrivate(const UDataLayerInstancePrivate&) = delete; \
	ENGINE_API virtual ~UDataLayerInstancePrivate();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstancePrivate_h_9_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstancePrivate_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstancePrivate_h_12_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstancePrivate_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLayerInstancePrivate;

// ********** End Class UDataLayerInstancePrivate **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstancePrivate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
