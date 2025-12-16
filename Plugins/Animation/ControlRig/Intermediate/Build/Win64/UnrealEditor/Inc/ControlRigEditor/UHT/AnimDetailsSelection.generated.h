// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimDetails/AnimDetailsSelection.h"

#ifdef CONTROLRIGEDITOR_AnimDetailsSelection_generated_h
#error "AnimDetailsSelection.generated.h already included, missing '#pragma once' in AnimDetailsSelection.h"
#endif
#define CONTROLRIGEDITOR_AnimDetailsSelection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimDetailsSelectionPropertyData *********************************
struct Z_Construct_UScriptStruct_FAnimDetailsSelectionPropertyData_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_AnimDetailsSelection_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimDetailsSelectionPropertyData_Statics; \
	CONTROLRIGEDITOR_API static class UScriptStruct* StaticStruct();


struct FAnimDetailsSelectionPropertyData;
// ********** End ScriptStruct FAnimDetailsSelectionPropertyData ***********************************

// ********** Begin Class UAnimDetailsSelection ****************************************************
struct Z_Construct_UClass_UAnimDetailsSelection_Statics;
CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UAnimDetailsSelection_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_AnimDetailsSelection_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimDetailsSelection(); \
	friend struct ::Z_Construct_UClass_UAnimDetailsSelection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGEDITOR_API UClass* ::Z_Construct_UClass_UAnimDetailsSelection_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimDetailsSelection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), Z_Construct_UClass_UAnimDetailsSelection_NoRegister) \
	DECLARE_SERIALIZER(UAnimDetailsSelection)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_AnimDetailsSelection_h_88_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimDetailsSelection(UAnimDetailsSelection&&) = delete; \
	UAnimDetailsSelection(const UAnimDetailsSelection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimDetailsSelection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimDetailsSelection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimDetailsSelection) \
	NO_API virtual ~UAnimDetailsSelection();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_AnimDetailsSelection_h_84_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_AnimDetailsSelection_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_AnimDetailsSelection_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_AnimDetailsSelection_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimDetailsSelection;

// ********** End Class UAnimDetailsSelection ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimDetails_AnimDetailsSelection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
