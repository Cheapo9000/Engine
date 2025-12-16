// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimDetails/Proxies/AnimDetailsProxyFloat.h"

#ifdef CONTROLRIGEDITOR_AnimDetailsProxyFloat_generated_h
#error "AnimDetailsProxyFloat.generated.h already included, missing '#pragma once' in AnimDetailsProxyFloat.h"
#endif
#define CONTROLRIGEDITOR_AnimDetailsProxyFloat_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimDetailsFloat *************************************************
struct Z_Construct_UScriptStruct_FAnimDetailsFloat_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyFloat_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimDetailsFloat_Statics; \
	CONTROLRIGEDITOR_API static class UScriptStruct* StaticStruct();


struct FAnimDetailsFloat;
// ********** End ScriptStruct FAnimDetailsFloat ***************************************************

// ********** Begin Class UAnimDetailsProxyFloat ***************************************************
struct Z_Construct_UClass_UAnimDetailsProxyFloat_Statics;
CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UAnimDetailsProxyFloat_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyFloat_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimDetailsProxyFloat(); \
	friend struct ::Z_Construct_UClass_UAnimDetailsProxyFloat_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGEDITOR_API UClass* ::Z_Construct_UClass_UAnimDetailsProxyFloat_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimDetailsProxyFloat, UAnimDetailsProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), Z_Construct_UClass_UAnimDetailsProxyFloat_NoRegister) \
	DECLARE_SERIALIZER(UAnimDetailsProxyFloat)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyFloat_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimDetailsProxyFloat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimDetailsProxyFloat(UAnimDetailsProxyFloat&&) = delete; \
	UAnimDetailsProxyFloat(const UAnimDetailsProxyFloat&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimDetailsProxyFloat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimDetailsProxyFloat); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimDetailsProxyFloat) \
	NO_API virtual ~UAnimDetailsProxyFloat();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyFloat_h_25_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyFloat_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyFloat_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyFloat_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimDetailsProxyFloat;

// ********** End Class UAnimDetailsProxyFloat *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyFloat_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
