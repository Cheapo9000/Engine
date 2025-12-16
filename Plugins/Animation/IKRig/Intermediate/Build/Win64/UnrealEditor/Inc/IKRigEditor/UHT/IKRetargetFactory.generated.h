// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RetargetEditor/IKRetargetFactory.h"

#ifdef IKRIGEDITOR_IKRetargetFactory_generated_h
#error "IKRetargetFactory.generated.h already included, missing '#pragma once' in IKRetargetFactory.h"
#endif
#define IKRIGEDITOR_IKRetargetFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UIKRetargetFactory *******************************************************
struct Z_Construct_UClass_UIKRetargetFactory_Statics;
IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRetargetFactory_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetFactory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetFactory(); \
	friend struct ::Z_Construct_UClass_UIKRetargetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIGEDITOR_API UClass* ::Z_Construct_UClass_UIKRetargetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRigEditor"), Z_Construct_UClass_UIKRetargetFactory_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargetFactory)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetFactory_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargetFactory(UIKRetargetFactory&&) = delete; \
	UIKRetargetFactory(const UIKRetargetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIGEDITOR_API, UIKRetargetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIKRetargetFactory) \
	IKRIGEDITOR_API virtual ~UIKRetargetFactory();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetFactory_h_14_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetFactory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetFactory_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetFactory_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargetFactory;

// ********** End Class UIKRetargetFactory *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
