// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimDetails/Proxies/AnimDetailsProxyTransform.h"

#ifdef CONTROLRIGEDITOR_AnimDetailsProxyTransform_generated_h
#error "AnimDetailsProxyTransform.generated.h already included, missing '#pragma once' in AnimDetailsProxyTransform.h"
#endif
#define CONTROLRIGEDITOR_AnimDetailsProxyTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimDetailsProxyTransform ***********************************************
struct Z_Construct_UClass_UAnimDetailsProxyTransform_Statics;
CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UAnimDetailsProxyTransform_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyTransform_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimDetailsProxyTransform(); \
	friend struct ::Z_Construct_UClass_UAnimDetailsProxyTransform_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGEDITOR_API UClass* ::Z_Construct_UClass_UAnimDetailsProxyTransform_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimDetailsProxyTransform, UAnimDetailsProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), Z_Construct_UClass_UAnimDetailsProxyTransform_NoRegister) \
	DECLARE_SERIALIZER(UAnimDetailsProxyTransform)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyTransform_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimDetailsProxyTransform(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimDetailsProxyTransform(UAnimDetailsProxyTransform&&) = delete; \
	UAnimDetailsProxyTransform(const UAnimDetailsProxyTransform&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimDetailsProxyTransform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimDetailsProxyTransform); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimDetailsProxyTransform) \
	NO_API virtual ~UAnimDetailsProxyTransform();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyTransform_h_13_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyTransform_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyTransform_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyTransform_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimDetailsProxyTransform;

// ********** End Class UAnimDetailsProxyTransform *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyTransform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
