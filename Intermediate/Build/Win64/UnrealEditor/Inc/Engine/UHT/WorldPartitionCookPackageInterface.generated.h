// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/Cook/WorldPartitionCookPackageInterface.h"

#ifdef ENGINE_WorldPartitionCookPackageInterface_generated_h
#error "WorldPartitionCookPackageInterface.generated.h already included, missing '#pragma once' in WorldPartitionCookPackageInterface.h"
#endif
#define ENGINE_WorldPartitionCookPackageInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UWorldPartitionCookPackageObject *************************************
struct Z_Construct_UClass_UWorldPartitionCookPackageObject_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionCookPackageObject_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionCookPackageObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionCookPackageObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionCookPackageObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionCookPackageObject); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionCookPackageObject(UWorldPartitionCookPackageObject&&) = delete; \
	UWorldPartitionCookPackageObject(const UWorldPartitionCookPackageObject&) = delete; \
	virtual ~UWorldPartitionCookPackageObject() = default;


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWorldPartitionCookPackageObject(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionCookPackageObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionCookPackageObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionCookPackageObject, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionCookPackageObject_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionCookPackageObject)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IWorldPartitionCookPackageObject() {} \
public: \
	typedef UWorldPartitionCookPackageObject UClassType; \
	typedef IWorldPartitionCookPackageObject ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionCookPackageObject;

// ********** End Interface UWorldPartitionCookPackageObject ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
