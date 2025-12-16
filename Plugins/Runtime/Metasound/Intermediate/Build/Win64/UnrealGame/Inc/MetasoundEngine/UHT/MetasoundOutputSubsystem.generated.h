// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundOutputSubsystem.h"

#ifdef METASOUNDENGINE_MetasoundOutputSubsystem_generated_h
#error "MetasoundOutputSubsystem.generated.h already included, missing '#pragma once' in MetasoundOutputSubsystem.h"
#endif
#define METASOUNDENGINE_MetasoundOutputSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioComponent;

// ********** Begin Class UMetaSoundOutputSubsystem ************************************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutputSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnwatchOutput); \
	DECLARE_FUNCTION(execWatchOutput);


struct Z_Construct_UClass_UMetaSoundOutputSubsystem_Statics;
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundOutputSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutputSubsystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundOutputSubsystem(); \
	friend struct ::Z_Construct_UClass_UMetaSoundOutputSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDENGINE_API UClass* ::Z_Construct_UClass_UMetaSoundOutputSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaSoundOutputSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), Z_Construct_UClass_UMetaSoundOutputSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMetaSoundOutputSubsystem)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutputSubsystem_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDENGINE_API UMetaSoundOutputSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaSoundOutputSubsystem(UMetaSoundOutputSubsystem&&) = delete; \
	UMetaSoundOutputSubsystem(const UMetaSoundOutputSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDENGINE_API, UMetaSoundOutputSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundOutputSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaSoundOutputSubsystem)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutputSubsystem_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutputSubsystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutputSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutputSubsystem_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutputSubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaSoundOutputSubsystem;

// ********** End Class UMetaSoundOutputSubsystem **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutputSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
