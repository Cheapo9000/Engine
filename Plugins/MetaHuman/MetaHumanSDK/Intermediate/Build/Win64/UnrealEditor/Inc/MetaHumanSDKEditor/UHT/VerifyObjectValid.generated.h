// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Verification/VerifyObjectValid.h"

#ifdef METAHUMANSDKEDITOR_VerifyObjectValid_generated_h
#error "VerifyObjectValid.generated.h already included, missing '#pragma once' in VerifyObjectValid.h"
#endif
#define METAHUMANSDKEDITOR_VerifyObjectValid_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVerifyObjectValid *******************************************************
struct Z_Construct_UClass_UVerifyObjectValid_Statics;
METAHUMANSDKEDITOR_API UClass* Z_Construct_UClass_UVerifyObjectValid_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_VerifyObjectValid_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVerifyObjectValid(); \
	friend struct ::Z_Construct_UClass_UVerifyObjectValid_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANSDKEDITOR_API UClass* ::Z_Construct_UClass_UVerifyObjectValid_NoRegister(); \
public: \
	DECLARE_CLASS2(UVerifyObjectValid, UMetaHumanVerificationRuleBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanSDKEditor"), Z_Construct_UClass_UVerifyObjectValid_NoRegister) \
	DECLARE_SERIALIZER(UVerifyObjectValid)


#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_VerifyObjectValid_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METAHUMANSDKEDITOR_API UVerifyObjectValid(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVerifyObjectValid(UVerifyObjectValid&&) = delete; \
	UVerifyObjectValid(const UVerifyObjectValid&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANSDKEDITOR_API, UVerifyObjectValid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVerifyObjectValid); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVerifyObjectValid) \
	METAHUMANSDKEDITOR_API virtual ~UVerifyObjectValid();


#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_VerifyObjectValid_h_13_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_VerifyObjectValid_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_VerifyObjectValid_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_VerifyObjectValid_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVerifyObjectValid;

// ********** End Class UVerifyObjectValid *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Verification_VerifyObjectValid_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
