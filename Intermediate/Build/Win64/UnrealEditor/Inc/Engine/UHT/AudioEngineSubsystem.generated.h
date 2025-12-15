// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/AudioEngineSubsystem.h"

#ifdef ENGINE_AudioEngineSubsystem_generated_h
#error "AudioEngineSubsystem.generated.h already included, missing '#pragma once' in AudioEngineSubsystem.h"
#endif
#define ENGINE_AudioEngineSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAudioSubsystemCollectionRoot ********************************************
struct Z_Construct_UClass_UAudioSubsystemCollectionRoot_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAudioSubsystemCollectionRoot_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioSubsystemCollectionRoot(); \
	friend struct ::Z_Construct_UClass_UAudioSubsystemCollectionRoot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAudioSubsystemCollectionRoot_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioSubsystemCollectionRoot, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAudioSubsystemCollectionRoot_NoRegister) \
	DECLARE_SERIALIZER(UAudioSubsystemCollectionRoot)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAudioSubsystemCollectionRoot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioSubsystemCollectionRoot(UAudioSubsystemCollectionRoot&&) = delete; \
	UAudioSubsystemCollectionRoot(const UAudioSubsystemCollectionRoot&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAudioSubsystemCollectionRoot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioSubsystemCollectionRoot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioSubsystemCollectionRoot) \
	ENGINE_API virtual ~UAudioSubsystemCollectionRoot();


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_22_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioSubsystemCollectionRoot;

// ********** End Class UAudioSubsystemCollectionRoot **********************************************

// ********** Begin Class UAudioEngineSubsystem ****************************************************
struct Z_Construct_UClass_UAudioEngineSubsystem_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAudioEngineSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioEngineSubsystem(); \
	friend struct ::Z_Construct_UClass_UAudioEngineSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAudioEngineSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioEngineSubsystem, UDynamicSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAudioEngineSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAudioEngineSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_47_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioEngineSubsystem(UAudioEngineSubsystem&&) = delete; \
	UAudioEngineSubsystem(const UAudioEngineSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAudioEngineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioEngineSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAudioEngineSubsystem) \
	ENGINE_API virtual ~UAudioEngineSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_44_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioEngineSubsystem;

// ********** End Class UAudioEngineSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
