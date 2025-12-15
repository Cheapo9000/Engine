// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/IWorldPartitionObjectResolver.h"

#ifdef ENGINE_IWorldPartitionObjectResolver_generated_h
#error "IWorldPartitionObjectResolver.generated.h already included, missing '#pragma once' in IWorldPartitionObjectResolver.h"
#endif
#define ENGINE_IWorldPartitionObjectResolver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWorldPartitionResolveData ****************************************
struct Z_Construct_UScriptStruct_FWorldPartitionResolveData_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_IWorldPartitionObjectResolver_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWorldPartitionResolveData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FWorldPartitionResolveData;
// ********** End ScriptStruct FWorldPartitionResolveData ******************************************

// ********** Begin Interface UWorldPartitionObjectResolver ****************************************
struct Z_Construct_UClass_UWorldPartitionObjectResolver_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionObjectResolver_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_IWorldPartitionObjectResolver_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionObjectResolver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionObjectResolver(UWorldPartitionObjectResolver&&) = delete; \
	UWorldPartitionObjectResolver(const UWorldPartitionObjectResolver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionObjectResolver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionObjectResolver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionObjectResolver) \
	virtual ~UWorldPartitionObjectResolver() = default;


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_IWorldPartitionObjectResolver_h_41_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWorldPartitionObjectResolver(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionObjectResolver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionObjectResolver_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionObjectResolver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionObjectResolver_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionObjectResolver)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_IWorldPartitionObjectResolver_h_41_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_IWorldPartitionObjectResolver_h_41_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_IWorldPartitionObjectResolver_h_41_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_IWorldPartitionObjectResolver_h_41_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IWorldPartitionObjectResolver() {} \
public: \
	typedef UWorldPartitionObjectResolver UClassType; \
	typedef IWorldPartitionObjectResolver ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_IWorldPartitionObjectResolver_h_36_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_IWorldPartitionObjectResolver_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_IWorldPartitionObjectResolver_h_41_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionObjectResolver;

// ********** End Interface UWorldPartitionObjectResolver ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_IWorldPartitionObjectResolver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
