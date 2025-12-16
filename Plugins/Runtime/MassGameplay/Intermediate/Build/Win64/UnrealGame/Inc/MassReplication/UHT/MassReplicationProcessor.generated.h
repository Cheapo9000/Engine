// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassReplicationProcessor.h"

#ifdef MASSREPLICATION_MassReplicationProcessor_generated_h
#error "MassReplicationProcessor.generated.h already included, missing '#pragma once' in MassReplicationProcessor.h"
#endif
#define MASSREPLICATION_MassReplicationProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassReplicationProcessor ************************************************
struct Z_Construct_UClass_UMassReplicationProcessor_Statics;
MASSREPLICATION_API UClass* Z_Construct_UClass_UMassReplicationProcessor_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationProcessor_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassReplicationProcessor(); \
	friend struct ::Z_Construct_UClass_UMassReplicationProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSREPLICATION_API UClass* ::Z_Construct_UClass_UMassReplicationProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassReplicationProcessor, UMassProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassReplication"), Z_Construct_UClass_UMassReplicationProcessor_NoRegister) \
	DECLARE_SERIALIZER(UMassReplicationProcessor)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationProcessor_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassReplicationProcessor(UMassReplicationProcessor&&) = delete; \
	UMassReplicationProcessor(const UMassReplicationProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSREPLICATION_API, UMassReplicationProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassReplicationProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassReplicationProcessor) \
	MASSREPLICATION_API virtual ~UMassReplicationProcessor();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationProcessor_h_26_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationProcessor_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationProcessor_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationProcessor_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassReplicationProcessor;

// ********** End Class UMassReplicationProcessor **************************************************

// ********** Begin Class UMassReplicatorBase ******************************************************
struct Z_Construct_UClass_UMassReplicatorBase_Statics;
MASSREPLICATION_API UClass* Z_Construct_UClass_UMassReplicatorBase_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationProcessor_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassReplicatorBase(); \
	friend struct ::Z_Construct_UClass_UMassReplicatorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSREPLICATION_API UClass* ::Z_Construct_UClass_UMassReplicatorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassReplicatorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MassReplication"), Z_Construct_UClass_UMassReplicatorBase_NoRegister) \
	DECLARE_SERIALIZER(UMassReplicatorBase)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationProcessor_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSREPLICATION_API UMassReplicatorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassReplicatorBase(UMassReplicatorBase&&) = delete; \
	UMassReplicatorBase(const UMassReplicatorBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSREPLICATION_API, UMassReplicatorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassReplicatorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassReplicatorBase) \
	MASSREPLICATION_API virtual ~UMassReplicatorBase();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationProcessor_h_67_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationProcessor_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationProcessor_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationProcessor_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassReplicatorBase;

// ********** End Class UMassReplicatorBase ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
