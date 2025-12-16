// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundAssetSubsystem.h"

#ifdef METASOUNDENGINE_MetasoundAssetSubsystem_generated_h
#error "MetasoundAssetSubsystem.generated.h already included, missing '#pragma once' in MetasoundAssetSubsystem.h"
#endif
#define METASOUNDENGINE_MetasoundAssetSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMetaSoundDocumentInterface;
struct FMetaSoundAssetDirectory;
struct FMetaSoundClassInterfaceInfo;
struct FMetaSoundDocumentInfo;
struct FMetasoundFrontendClassName;
struct FMetasoundFrontendVersionNumber;
struct FTopLevelAssetPath;

// ********** Begin ScriptStruct FMetaSoundAssetDirectory ******************************************
struct Z_Construct_UScriptStruct_FMetaSoundAssetDirectory_Statics;
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_214_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaSoundAssetDirectory_Statics; \
	METASOUNDENGINE_API static class UScriptStruct* StaticStruct();


struct FMetaSoundAssetDirectory;
// ********** End ScriptStruct FMetaSoundAssetDirectory ********************************************

// ********** Begin ScriptStruct FMetaSoundAsyncAssetDependencies **********************************
struct Z_Construct_UScriptStruct_FMetaSoundAsyncAssetDependencies_Statics;
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_224_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaSoundAsyncAssetDependencies_Statics; \
	METASOUNDENGINE_API static class UScriptStruct* StaticStruct();


struct FMetaSoundAsyncAssetDependencies;
// ********** End ScriptStruct FMetaSoundAsyncAssetDependencies ************************************

// ********** Begin Class UMetaSoundAssetSubsystem *************************************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_244_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnregisterAssetClassesInDirectories); \
	DECLARE_FUNCTION(execRegisterAssetClassesInDirectories);


#if WITH_EDITOR
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_244_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execReplaceReferencesInDirectory); \
	DECLARE_FUNCTION(execReassignClassName); \
	DECLARE_FUNCTION(execFindReferencingAssetClassInfo); \
	DECLARE_FUNCTION(execFindAssetClassInfo);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_244_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UMetaSoundAssetSubsystem_Statics;
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundAssetSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_244_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundAssetSubsystem(); \
	friend struct ::Z_Construct_UClass_UMetaSoundAssetSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDENGINE_API UClass* ::Z_Construct_UClass_UMetaSoundAssetSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaSoundAssetSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), Z_Construct_UClass_UMetaSoundAssetSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMetaSoundAssetSubsystem)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_244_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDENGINE_API UMetaSoundAssetSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaSoundAssetSubsystem(UMetaSoundAssetSubsystem&&) = delete; \
	UMetaSoundAssetSubsystem(const UMetaSoundAssetSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDENGINE_API, UMetaSoundAssetSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundAssetSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaSoundAssetSubsystem) \
	METASOUNDENGINE_API virtual ~UMetaSoundAssetSubsystem();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_241_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_244_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_244_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_244_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_244_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_244_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaSoundAssetSubsystem;

// ********** End Class UMetaSoundAssetSubsystem ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
