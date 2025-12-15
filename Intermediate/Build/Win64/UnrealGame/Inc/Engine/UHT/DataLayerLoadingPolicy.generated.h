// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/DataLayer/DataLayerLoadingPolicy.h"

#ifdef ENGINE_DataLayerLoadingPolicy_generated_h
#error "DataLayerLoadingPolicy.generated.h already included, missing '#pragma once' in DataLayerLoadingPolicy.h"
#endif
#define ENGINE_DataLayerLoadingPolicy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataLayerLoadingPolicy **************************************************
struct Z_Construct_UClass_UDataLayerLoadingPolicy_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDataLayerLoadingPolicy_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerLoadingPolicy_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLayerLoadingPolicy(); \
	friend struct ::Z_Construct_UClass_UDataLayerLoadingPolicy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDataLayerLoadingPolicy_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLayerLoadingPolicy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDataLayerLoadingPolicy_NoRegister) \
	DECLARE_SERIALIZER(UDataLayerLoadingPolicy) \
	DECLARE_WITHIN(UDataLayerManager)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerLoadingPolicy_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDataLayerLoadingPolicy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLayerLoadingPolicy(UDataLayerLoadingPolicy&&) = delete; \
	UDataLayerLoadingPolicy(const UDataLayerLoadingPolicy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDataLayerLoadingPolicy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLayerLoadingPolicy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLayerLoadingPolicy) \
	ENGINE_API virtual ~UDataLayerLoadingPolicy();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerLoadingPolicy_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerLoadingPolicy_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerLoadingPolicy_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerLoadingPolicy_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLayerLoadingPolicy;

// ********** End Class UDataLayerLoadingPolicy ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerLoadingPolicy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
