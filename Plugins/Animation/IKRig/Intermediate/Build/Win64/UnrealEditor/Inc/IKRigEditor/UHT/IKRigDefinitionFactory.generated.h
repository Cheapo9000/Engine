// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigEditor/IKRigDefinitionFactory.h"

#ifdef IKRIGEDITOR_IKRigDefinitionFactory_generated_h
#error "IKRigDefinitionFactory.generated.h already included, missing '#pragma once' in IKRigDefinitionFactory.h"
#endif
#define IKRIGEDITOR_IKRigDefinitionFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIKRigDefinition;

// ********** Begin Class UIKRigDefinitionFactory **************************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigDefinitionFactory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateNewIKRigAsset);


struct Z_Construct_UClass_UIKRigDefinitionFactory_Statics;
IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRigDefinitionFactory_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigDefinitionFactory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRigDefinitionFactory(); \
	friend struct ::Z_Construct_UClass_UIKRigDefinitionFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIGEDITOR_API UClass* ::Z_Construct_UClass_UIKRigDefinitionFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRigDefinitionFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRigEditor"), Z_Construct_UClass_UIKRigDefinitionFactory_NoRegister) \
	DECLARE_SERIALIZER(UIKRigDefinitionFactory)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigDefinitionFactory_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRigDefinitionFactory(UIKRigDefinitionFactory&&) = delete; \
	UIKRigDefinitionFactory(const UIKRigDefinitionFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIGEDITOR_API, UIKRigDefinitionFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRigDefinitionFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIKRigDefinitionFactory) \
	IKRIGEDITOR_API virtual ~UIKRigDefinitionFactory();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigDefinitionFactory_h_14_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigDefinitionFactory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigDefinitionFactory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigDefinitionFactory_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigDefinitionFactory_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRigDefinitionFactory;

// ********** End Class UIKRigDefinitionFactory ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigDefinitionFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
