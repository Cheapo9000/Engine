// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigEditor/IKRigDefinitionFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IKRIGEDITOR_IKRigDefinitionFactory_generated_h
#error "IKRigDefinitionFactory.generated.h already included, missing '#pragma once' in IKRigDefinitionFactory.h"
#endif
#define IKRIGEDITOR_IKRigDefinitionFactory_generated_h

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigDefinitionFactory_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRigDefinitionFactory(); \
	friend struct Z_Construct_UClass_UIKRigDefinitionFactory_Statics; \
public: \
	DECLARE_CLASS(UIKRigDefinitionFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRigEditor"), NO_API) \
	DECLARE_SERIALIZER(UIKRigDefinitionFactory)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigDefinitionFactory_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIKRigDefinitionFactory(UIKRigDefinitionFactory&&); \
	UIKRigDefinitionFactory(const UIKRigDefinitionFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRigDefinitionFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRigDefinitionFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIKRigDefinitionFactory) \
	NO_API virtual ~UIKRigDefinitionFactory();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigDefinitionFactory_h_12_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigDefinitionFactory_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigDefinitionFactory_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigDefinitionFactory_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IKRIGEDITOR_API UClass* StaticClass<class UIKRigDefinitionFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigDefinitionFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
