// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimDetails/Proxies/AnimDetailsProxyBase.h"

#ifdef CONTROLRIGEDITOR_AnimDetailsProxyBase_generated_h
#error "AnimDetailsProxyBase.generated.h already included, missing '#pragma once' in AnimDetailsProxyBase.h"
#endif
#define CONTROLRIGEDITOR_AnimDetailsProxyBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimDetailsProxyBase ****************************************************
struct Z_Construct_UClass_UAnimDetailsProxyBase_Statics;
CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UAnimDetailsProxyBase_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyBase_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimDetailsProxyBase(); \
	friend struct ::Z_Construct_UClass_UAnimDetailsProxyBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGEDITOR_API UClass* ::Z_Construct_UClass_UAnimDetailsProxyBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimDetailsProxyBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), Z_Construct_UClass_UAnimDetailsProxyBase_NoRegister) \
	DECLARE_SERIALIZER(UAnimDetailsProxyBase)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyBase_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimDetailsProxyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimDetailsProxyBase(UAnimDetailsProxyBase&&) = delete; \
	UAnimDetailsProxyBase(const UAnimDetailsProxyBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimDetailsProxyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimDetailsProxyBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimDetailsProxyBase) \
	NO_API virtual ~UAnimDetailsProxyBase();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyBase_h_26_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyBase_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyBase_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyBase_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimDetailsProxyBase;

// ********** End Class UAnimDetailsProxyBase ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
