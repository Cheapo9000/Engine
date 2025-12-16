// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimDetails/Proxies/AnimDetailsProxyEnum.h"

#ifdef CONTROLRIGEDITOR_AnimDetailsProxyEnum_generated_h
#error "AnimDetailsProxyEnum.generated.h already included, missing '#pragma once' in AnimDetailsProxyEnum.h"
#endif
#define CONTROLRIGEDITOR_AnimDetailsProxyEnum_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimDetailsEnum **************************************************
struct Z_Construct_UScriptStruct_FAnimDetailsEnum_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyEnum_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimDetailsEnum_Statics; \
	CONTROLRIGEDITOR_API static class UScriptStruct* StaticStruct();


struct FAnimDetailsEnum;
// ********** End ScriptStruct FAnimDetailsEnum ****************************************************

// ********** Begin Class UAnimDetailsProxyEnum ****************************************************
struct Z_Construct_UClass_UAnimDetailsProxyEnum_Statics;
CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UAnimDetailsProxyEnum_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyEnum_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimDetailsProxyEnum(); \
	friend struct ::Z_Construct_UClass_UAnimDetailsProxyEnum_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGEDITOR_API UClass* ::Z_Construct_UClass_UAnimDetailsProxyEnum_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimDetailsProxyEnum, UAnimDetailsProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), Z_Construct_UClass_UAnimDetailsProxyEnum_NoRegister) \
	DECLARE_SERIALIZER(UAnimDetailsProxyEnum)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyEnum_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimDetailsProxyEnum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimDetailsProxyEnum(UAnimDetailsProxyEnum&&) = delete; \
	UAnimDetailsProxyEnum(const UAnimDetailsProxyEnum&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimDetailsProxyEnum); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimDetailsProxyEnum); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimDetailsProxyEnum) \
	NO_API virtual ~UAnimDetailsProxyEnum();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyEnum_h_29_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyEnum_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyEnum_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyEnum_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimDetailsProxyEnum;

// ********** End Class UAnimDetailsProxyEnum ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyEnum_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
