// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Verification/MetaHumanVerificationRuleCollection.h"

#ifdef METAHUMANSDKEDITOR_MetaHumanVerificationRuleCollection_generated_h
#error "MetaHumanVerificationRuleCollection.generated.h already included, missing '#pragma once' in MetaHumanVerificationRuleCollection.h"
#endif
#define METAHUMANSDKEDITOR_MetaHumanVerificationRuleCollection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMetaHumanAssetReport;
class UMetaHumanVerificationRuleBase;
class UObject;
struct FMetaHumanVerificationOptions;

// ********** Begin ScriptStruct FMetaHumanVerificationOptions *************************************
struct Z_Construct_UScriptStruct_FMetaHumanVerificationOptions_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_MetaHumanVerificationRuleCollection_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanVerificationOptions_Statics; \
	METAHUMANSDKEDITOR_API static class UScriptStruct* StaticStruct();


struct FMetaHumanVerificationOptions;
// ********** End ScriptStruct FMetaHumanVerificationOptions ***************************************

// ********** Begin Class UMetaHumanVerificationRuleBase *******************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_MetaHumanVerificationRuleCollection_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execVerify);


#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_MetaHumanVerificationRuleCollection_h_38_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UMetaHumanVerificationRuleBase_Statics;
METAHUMANSDKEDITOR_API UClass* Z_Construct_UClass_UMetaHumanVerificationRuleBase_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_MetaHumanVerificationRuleCollection_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanVerificationRuleBase(); \
	friend struct ::Z_Construct_UClass_UMetaHumanVerificationRuleBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANSDKEDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanVerificationRuleBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanVerificationRuleBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MetaHumanSDKEditor"), Z_Construct_UClass_UMetaHumanVerificationRuleBase_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanVerificationRuleBase)


#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_MetaHumanVerificationRuleCollection_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METAHUMANSDKEDITOR_API UMetaHumanVerificationRuleBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanVerificationRuleBase(UMetaHumanVerificationRuleBase&&) = delete; \
	UMetaHumanVerificationRuleBase(const UMetaHumanVerificationRuleBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANSDKEDITOR_API, UMetaHumanVerificationRuleBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanVerificationRuleBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanVerificationRuleBase) \
	METAHUMANSDKEDITOR_API virtual ~UMetaHumanVerificationRuleBase();


#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_MetaHumanVerificationRuleCollection_h_35_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_MetaHumanVerificationRuleCollection_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_MetaHumanVerificationRuleCollection_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_MetaHumanVerificationRuleCollection_h_38_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_MetaHumanVerificationRuleCollection_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_MetaHumanVerificationRuleCollection_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanVerificationRuleBase;

// ********** End Class UMetaHumanVerificationRuleBase *********************************************

// ********** Begin Class UMetaHumanVerificationRuleCollection *************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_MetaHumanVerificationRuleCollection_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyAllRules); \
	DECLARE_FUNCTION(execAddVerificationRule);


struct Z_Construct_UClass_UMetaHumanVerificationRuleCollection_Statics;
METAHUMANSDKEDITOR_API UClass* Z_Construct_UClass_UMetaHumanVerificationRuleCollection_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_MetaHumanVerificationRuleCollection_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanVerificationRuleCollection(); \
	friend struct ::Z_Construct_UClass_UMetaHumanVerificationRuleCollection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANSDKEDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanVerificationRuleCollection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanVerificationRuleCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanSDKEditor"), Z_Construct_UClass_UMetaHumanVerificationRuleCollection_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanVerificationRuleCollection)


#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_MetaHumanVerificationRuleCollection_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METAHUMANSDKEDITOR_API UMetaHumanVerificationRuleCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanVerificationRuleCollection(UMetaHumanVerificationRuleCollection&&) = delete; \
	UMetaHumanVerificationRuleCollection(const UMetaHumanVerificationRuleCollection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANSDKEDITOR_API, UMetaHumanVerificationRuleCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanVerificationRuleCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanVerificationRuleCollection) \
	METAHUMANSDKEDITOR_API virtual ~UMetaHumanVerificationRuleCollection();


#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_MetaHumanVerificationRuleCollection_h_58_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_MetaHumanVerificationRuleCollection_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_MetaHumanVerificationRuleCollection_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_MetaHumanVerificationRuleCollection_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_MetaHumanVerificationRuleCollection_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanVerificationRuleCollection;

// ********** End Class UMetaHumanVerificationRuleCollection ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_MetaHumanVerificationRuleCollection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
