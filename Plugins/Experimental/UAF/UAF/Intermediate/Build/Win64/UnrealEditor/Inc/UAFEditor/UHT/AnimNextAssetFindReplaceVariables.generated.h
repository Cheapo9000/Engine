// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Common/AnimNextAssetFindReplaceVariables.h"

#ifdef UAFEDITOR_AnimNextAssetFindReplaceVariables_generated_h
#error "AnimNextAssetFindReplaceVariables.generated.h already included, missing '#pragma once' in AnimNextAssetFindReplaceVariables.h"
#endif
#define UAFEDITOR_AnimNextAssetFindReplaceVariables_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimNextAssetFindReplaceVariables ***************************************
struct Z_Construct_UClass_UAnimNextAssetFindReplaceVariables_Statics;
UAFEDITOR_API UClass* Z_Construct_UClass_UAnimNextAssetFindReplaceVariables_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Common_AnimNextAssetFindReplaceVariables_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextAssetFindReplaceVariables(); \
	friend struct ::Z_Construct_UClass_UAnimNextAssetFindReplaceVariables_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAFEDITOR_API UClass* ::Z_Construct_UClass_UAnimNextAssetFindReplaceVariables_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimNextAssetFindReplaceVariables, UAnimAssetFindReplaceProcessor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UAFEditor"), Z_Construct_UClass_UAnimNextAssetFindReplaceVariables_NoRegister) \
	DECLARE_SERIALIZER(UAnimNextAssetFindReplaceVariables)


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Common_AnimNextAssetFindReplaceVariables_h_37_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimNextAssetFindReplaceVariables(UAnimNextAssetFindReplaceVariables&&) = delete; \
	UAnimNextAssetFindReplaceVariables(const UAnimNextAssetFindReplaceVariables&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UAFEDITOR_API, UAnimNextAssetFindReplaceVariables); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextAssetFindReplaceVariables); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimNextAssetFindReplaceVariables) \
	UAFEDITOR_API virtual ~UAnimNextAssetFindReplaceVariables();


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Common_AnimNextAssetFindReplaceVariables_h_34_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Common_AnimNextAssetFindReplaceVariables_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Common_AnimNextAssetFindReplaceVariables_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Common_AnimNextAssetFindReplaceVariables_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimNextAssetFindReplaceVariables;

// ********** End Class UAnimNextAssetFindReplaceVariables *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Common_AnimNextAssetFindReplaceVariables_h

// ********** Begin Enum ESearchScope **************************************************************
#define FOREACH_ENUM_ESEARCHSCOPE(op) \
	op(ESearchScope::Global) \
	op(ESearchScope::Workspace) \
	op(ESearchScope::Asset) 

enum class ESearchScope : uint8;
template<> struct TIsUEnumClass<ESearchScope> { enum { Value = true }; };
template<> UAFEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ESearchScope>();
// ********** End Enum ESearchScope ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
