// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RetargetEditor/IKRetargetDetails.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IKRIGEDITOR_IKRetargetDetails_generated_h
#error "IKRetargetDetails.generated.h already included, missing '#pragma once' in IKRetargetDetails.h"
#endif
#define IKRIGEDITOR_IKRetargetDetails_generated_h

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetDetails_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetBoneDetails(); \
	friend struct Z_Construct_UClass_UIKRetargetBoneDetails_Statics; \
public: \
	DECLARE_CLASS(UIKRetargetBoneDetails, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRigEditor"), NO_API) \
	DECLARE_SERIALIZER(UIKRetargetBoneDetails) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetDetails_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIKRetargetBoneDetails(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIKRetargetBoneDetails(UIKRetargetBoneDetails&&); \
	UIKRetargetBoneDetails(const UIKRetargetBoneDetails&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRetargetBoneDetails); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetBoneDetails); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetBoneDetails) \
	NO_API virtual ~UIKRetargetBoneDetails();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetDetails_h_22_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetDetails_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetDetails_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetDetails_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IKRIGEDITOR_API UClass* StaticClass<class UIKRetargetBoneDetails>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetDetails_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
