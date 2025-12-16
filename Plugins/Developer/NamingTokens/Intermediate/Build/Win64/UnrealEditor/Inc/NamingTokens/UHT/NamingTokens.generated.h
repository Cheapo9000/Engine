// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NamingTokens.h"

#ifdef NAMINGTOKENS_NamingTokens_generated_h
#error "NamingTokens.generated.h already included, missing '#pragma once' in NamingTokens.h"
#endif
#define NAMINGTOKENS_NamingTokens_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;
struct FNamingTokensEvaluationData;

// ********** Begin Class UNamingTokens ************************************************************
#define FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokens_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPostEvaluate); \
	DECLARE_FUNCTION(execOnPreEvaluate); \
	DECLARE_FUNCTION(execProcessTokenTemplateFunction); \
	DECLARE_FUNCTION(execGetCurrentDateTime);


#define FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokens_h_19_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UNamingTokens_Statics;
NAMINGTOKENS_API UClass* Z_Construct_UClass_UNamingTokens_NoRegister();

#define FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokens_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNamingTokens(); \
	friend struct ::Z_Construct_UClass_UNamingTokens_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NAMINGTOKENS_API UClass* ::Z_Construct_UClass_UNamingTokens_NoRegister(); \
public: \
	DECLARE_CLASS2(UNamingTokens, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NamingTokens"), Z_Construct_UClass_UNamingTokens_NoRegister) \
	DECLARE_SERIALIZER(UNamingTokens)


#define FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokens_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNamingTokens(UNamingTokens&&) = delete; \
	UNamingTokens(const UNamingTokens&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAMINGTOKENS_API, UNamingTokens); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNamingTokens); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNamingTokens) \
	NAMINGTOKENS_API virtual ~UNamingTokens();


#define FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokens_h_16_PROLOG
#define FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokens_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokens_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokens_h_19_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokens_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokens_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNamingTokens;

// ********** End Class UNamingTokens **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_NamingTokens_Source_NamingTokens_Public_NamingTokens_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
