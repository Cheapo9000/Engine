// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionActorLoaderInterface.h"

#ifdef ENGINE_WorldPartitionActorLoaderInterface_generated_h
#error "WorldPartitionActorLoaderInterface.generated.h already included, missing '#pragma once' in WorldPartitionActorLoaderInterface.h"
#endif
#define ENGINE_WorldPartitionActorLoaderInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UWorldPartitionActorLoaderInterface **********************************
struct Z_Construct_UClass_UWorldPartitionActorLoaderInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionActorLoaderInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorLoaderInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionActorLoaderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionActorLoaderInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionActorLoaderInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionActorLoaderInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionActorLoaderInterface(UWorldPartitionActorLoaderInterface&&) = delete; \
	UWorldPartitionActorLoaderInterface(const UWorldPartitionActorLoaderInterface&) = delete; \
	virtual ~UWorldPartitionActorLoaderInterface() = default;


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorLoaderInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWorldPartitionActorLoaderInterface(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionActorLoaderInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionActorLoaderInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionActorLoaderInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionActorLoaderInterface_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionActorLoaderInterface)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorLoaderInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorLoaderInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorLoaderInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorLoaderInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IWorldPartitionActorLoaderInterface() {} \
public: \
	typedef UWorldPartitionActorLoaderInterface UClassType; \
	typedef IWorldPartitionActorLoaderInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorLoaderInterface_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorLoaderInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorLoaderInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionActorLoaderInterface;

// ********** End Interface UWorldPartitionActorLoaderInterface ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorLoaderInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
