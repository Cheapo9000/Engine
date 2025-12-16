// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RetargetEditor/IKRetargetDetails.h"

#ifdef IKRIGEDITOR_IKRetargetDetails_generated_h
#error "IKRetargetDetails.generated.h already included, missing '#pragma once' in IKRetargetDetails.h"
#endif
#define IKRIGEDITOR_IKRetargetDetails_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UIKRetargetBoneDetails ***************************************************
struct Z_Construct_UClass_UIKRetargetBoneDetails_Statics;
IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRetargetBoneDetails_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetDetails_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetBoneDetails(); \
	friend struct ::Z_Construct_UClass_UIKRetargetBoneDetails_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIGEDITOR_API UClass* ::Z_Construct_UClass_UIKRetargetBoneDetails_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargetBoneDetails, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRigEditor"), Z_Construct_UClass_UIKRetargetBoneDetails_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargetBoneDetails)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetDetails_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIGEDITOR_API UIKRetargetBoneDetails(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargetBoneDetails(UIKRetargetBoneDetails&&) = delete; \
	UIKRetargetBoneDetails(const UIKRetargetBoneDetails&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIGEDITOR_API, UIKRetargetBoneDetails); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetBoneDetails); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetBoneDetails) \
	IKRIGEDITOR_API virtual ~UIKRetargetBoneDetails();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetDetails_h_24_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetDetails_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetDetails_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetDetails_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargetBoneDetails;

// ********** End Class UIKRetargetBoneDetails *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetDetails_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
