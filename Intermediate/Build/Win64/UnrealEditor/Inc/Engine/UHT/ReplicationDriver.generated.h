// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/ReplicationDriver.h"

#ifdef ENGINE_ReplicationDriver_generated_h
#error "ReplicationDriver.generated.h already included, missing '#pragma once' in ReplicationDriver.h"
#endif
#define ENGINE_ReplicationDriver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UReplicationDriver *******************************************************
struct Z_Construct_UClass_UReplicationDriver_Statics;
ENGINE_API UClass* Z_Construct_UClass_UReplicationDriver_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicationDriver(); \
	friend struct ::Z_Construct_UClass_UReplicationDriver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UReplicationDriver_NoRegister(); \
public: \
	DECLARE_CLASS2(UReplicationDriver, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UReplicationDriver_NoRegister) \
	DECLARE_SERIALIZER(UReplicationDriver)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReplicationDriver(UReplicationDriver&&) = delete; \
	UReplicationDriver(const UReplicationDriver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UReplicationDriver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationDriver); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UReplicationDriver) \
	ENGINE_API virtual ~UReplicationDriver();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_47_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReplicationDriver;

// ********** End Class UReplicationDriver *********************************************************

// ********** Begin Class UReplicationConnectionDriver *********************************************
struct Z_Construct_UClass_UReplicationConnectionDriver_Statics;
ENGINE_API UClass* Z_Construct_UClass_UReplicationConnectionDriver_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicationConnectionDriver(); \
	friend struct ::Z_Construct_UClass_UReplicationConnectionDriver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UReplicationConnectionDriver_NoRegister(); \
public: \
	DECLARE_CLASS2(UReplicationConnectionDriver, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UReplicationConnectionDriver_NoRegister) \
	DECLARE_SERIALIZER(UReplicationConnectionDriver)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_117_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UReplicationConnectionDriver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReplicationConnectionDriver(UReplicationConnectionDriver&&) = delete; \
	UReplicationConnectionDriver(const UReplicationConnectionDriver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UReplicationConnectionDriver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationConnectionDriver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplicationConnectionDriver) \
	ENGINE_API virtual ~UReplicationConnectionDriver();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_114_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_117_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReplicationConnectionDriver;

// ********** End Class UReplicationConnectionDriver ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
