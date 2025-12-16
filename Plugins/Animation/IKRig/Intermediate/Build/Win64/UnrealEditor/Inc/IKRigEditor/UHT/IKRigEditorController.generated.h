// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigEditor/IKRigEditorController.h"

#ifdef IKRIGEDITOR_IKRigEditorController_generated_h
#error "IKRigEditorController.generated.h already included, missing '#pragma once' in IKRigEditorController.h"
#endif
#define IKRIGEDITOR_IKRigEditorController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UIKRigBoneDetails ********************************************************
struct Z_Construct_UClass_UIKRigBoneDetails_Statics;
IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRigBoneDetails_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigEditorController_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRigBoneDetails(); \
	friend struct ::Z_Construct_UClass_UIKRigBoneDetails_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIGEDITOR_API UClass* ::Z_Construct_UClass_UIKRigBoneDetails_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRigBoneDetails, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRigEditor"), Z_Construct_UClass_UIKRigBoneDetails_NoRegister) \
	DECLARE_SERIALIZER(UIKRigBoneDetails)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigEditorController_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIGEDITOR_API UIKRigBoneDetails(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRigBoneDetails(UIKRigBoneDetails&&) = delete; \
	UIKRigBoneDetails(const UIKRigBoneDetails&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIGEDITOR_API, UIKRigBoneDetails); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRigBoneDetails); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRigBoneDetails) \
	IKRIGEDITOR_API virtual ~UIKRigBoneDetails();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigEditorController_h_37_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigEditorController_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigEditorController_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigEditorController_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRigBoneDetails;

// ********** End Class UIKRigBoneDetails **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigEditorController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
