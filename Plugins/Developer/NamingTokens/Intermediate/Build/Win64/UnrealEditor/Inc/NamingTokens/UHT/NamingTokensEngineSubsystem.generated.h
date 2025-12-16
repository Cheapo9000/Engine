// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NamingTokensEngineSubsystem.h"

#ifdef NAMINGTOKENS_NamingTokensEngineSubsystem_generated_h
#error "NamingTokensEngineSubsystem.generated.h already included, missing '#pragma once' in NamingTokensEngineSubsystem.h"
#endif
#define NAMINGTOKENS_NamingTokensEngineSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNamingTokens;
class UObject;
struct FNamingTokenFilterArgs;
struct FNamingTokenResultData;
struct FNamingTokenValueData;

// ********** Begin ScriptStruct FNamingTokenFilterArgs ********************************************
struct Z_Construct_UScriptStruct_FNamingTokenFilterArgs_Statics;
#define FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokensEngineSubsystem_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNamingTokenFilterArgs_Statics; \
	NAMINGTOKENS_API static class UScriptStruct* StaticStruct();


struct FNamingTokenFilterArgs;
// ********** End ScriptStruct FNamingTokenFilterArgs **********************************************

// ********** Begin Class UNamingTokensEngineSubsystem *********************************************
#define FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokensEngineSubsystem_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearCachedNamingTokens); \
	DECLARE_FUNCTION(execGetAllNamespaces); \
	DECLARE_FUNCTION(execGetGlobalNamespaces); \
	DECLARE_FUNCTION(execIsGlobalNamespaceRegistered); \
	DECLARE_FUNCTION(execUnregisterGlobalNamespace); \
	DECLARE_FUNCTION(execRegisterGlobalNamespace); \
	DECLARE_FUNCTION(execEvaluateTokenList); \
	DECLARE_FUNCTION(execEvaluateTokenString); \
	DECLARE_FUNCTION(execEvaluateTokenText); \
	DECLARE_FUNCTION(execGetMultipleNamingTokens); \
	DECLARE_FUNCTION(execGetNamingTokensNative); \
	DECLARE_FUNCTION(execGetNamingTokens);


struct Z_Construct_UClass_UNamingTokensEngineSubsystem_Statics;
NAMINGTOKENS_API UClass* Z_Construct_UClass_UNamingTokensEngineSubsystem_NoRegister();

#define FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokensEngineSubsystem_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNamingTokensEngineSubsystem(); \
	friend struct ::Z_Construct_UClass_UNamingTokensEngineSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NAMINGTOKENS_API UClass* ::Z_Construct_UClass_UNamingTokensEngineSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UNamingTokensEngineSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NamingTokens"), Z_Construct_UClass_UNamingTokensEngineSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UNamingTokensEngineSubsystem)


#define FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokensEngineSubsystem_h_48_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNamingTokensEngineSubsystem(UNamingTokensEngineSubsystem&&) = delete; \
	UNamingTokensEngineSubsystem(const UNamingTokensEngineSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAMINGTOKENS_API, UNamingTokensEngineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNamingTokensEngineSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNamingTokensEngineSubsystem) \
	NAMINGTOKENS_API virtual ~UNamingTokensEngineSubsystem();


#define FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokensEngineSubsystem_h_45_PROLOG
#define FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokensEngineSubsystem_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokensEngineSubsystem_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokensEngineSubsystem_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokensEngineSubsystem_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNamingTokensEngineSubsystem;

// ********** End Class UNamingTokensEngineSubsystem ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokensEngineSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
