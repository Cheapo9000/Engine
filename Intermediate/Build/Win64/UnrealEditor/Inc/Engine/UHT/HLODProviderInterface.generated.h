// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/HLODProviderInterface.h"

#ifdef ENGINE_HLODProviderInterface_generated_h
#error "HLODProviderInterface.generated.h already included, missing '#pragma once' in HLODProviderInterface.h"
#endif
#define ENGINE_HLODProviderInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UWorldPartitionHLODProvider ******************************************
struct Z_Construct_UClass_UWorldPartitionHLODProvider_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionHLODProvider_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionHLODProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionHLODProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionHLODProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionHLODProvider); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionHLODProvider(UWorldPartitionHLODProvider&&) = delete; \
	UWorldPartitionHLODProvider(const UWorldPartitionHLODProvider&) = delete; \
	virtual ~UWorldPartitionHLODProvider() = default;


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWorldPartitionHLODProvider(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionHLODProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionHLODProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionHLODProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionHLODProvider_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionHLODProvider)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h_17_INCLASS_IINTERFACE \
protected: \
	virtual ~IWorldPartitionHLODProvider() {} \
public: \
	typedef UWorldPartitionHLODProvider UClassType; \
	typedef IWorldPartitionHLODProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionHLODProvider;

// ********** End Interface UWorldPartitionHLODProvider ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
