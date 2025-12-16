// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimDetails/Proxies/AnimDetailsProxyLocation.h"

#ifdef CONTROLRIGEDITOR_AnimDetailsProxyLocation_generated_h
#error "AnimDetailsProxyLocation.generated.h already included, missing '#pragma once' in AnimDetailsProxyLocation.h"
#endif
#define CONTROLRIGEDITOR_AnimDetailsProxyLocation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimDetailsLocation **********************************************
struct Z_Construct_UScriptStruct_FAnimDetailsLocation_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyLocation_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimDetailsLocation_Statics; \
	CONTROLRIGEDITOR_API static class UScriptStruct* StaticStruct();


struct FAnimDetailsLocation;
// ********** End ScriptStruct FAnimDetailsLocation ************************************************

// ********** Begin Class UAnimDetailsProxyLocation ************************************************
struct Z_Construct_UClass_UAnimDetailsProxyLocation_Statics;
CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UAnimDetailsProxyLocation_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyLocation_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimDetailsProxyLocation(); \
	friend struct ::Z_Construct_UClass_UAnimDetailsProxyLocation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGEDITOR_API UClass* ::Z_Construct_UClass_UAnimDetailsProxyLocation_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimDetailsProxyLocation, UAnimDetailsProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), Z_Construct_UClass_UAnimDetailsProxyLocation_NoRegister) \
	DECLARE_SERIALIZER(UAnimDetailsProxyLocation)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyLocation_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimDetailsProxyLocation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimDetailsProxyLocation(UAnimDetailsProxyLocation&&) = delete; \
	UAnimDetailsProxyLocation(const UAnimDetailsProxyLocation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimDetailsProxyLocation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimDetailsProxyLocation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimDetailsProxyLocation) \
	NO_API virtual ~UAnimDetailsProxyLocation();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyLocation_h_33_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyLocation_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyLocation_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyLocation_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimDetailsProxyLocation;

// ********** End Class UAnimDetailsProxyLocation **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_Proxies_AnimDetailsProxyLocation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
