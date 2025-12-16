// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/IKRetargetProcessor.h"

#ifdef IKRIG_IKRetargetProcessor_generated_h
#error "IKRetargetProcessor.generated.h already included, missing '#pragma once' in IKRetargetProcessor.h"
#endif
#define IKRIG_IKRetargetProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UIKRetargetProcessor *****************************************************
struct Z_Construct_UClass_UIKRetargetProcessor_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRetargetProcessor_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProcessor_h_596_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetProcessor(); \
	friend struct ::Z_Construct_UClass_UIKRetargetProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRetargetProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargetProcessor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRetargetProcessor_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargetProcessor)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProcessor_h_596_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIKRetargetProcessor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargetProcessor(UIKRetargetProcessor&&) = delete; \
	UIKRetargetProcessor(const UIKRetargetProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRetargetProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetProcessor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetProcessor) \
	NO_API virtual ~UIKRetargetProcessor();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProcessor_h_592_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProcessor_h_596_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProcessor_h_596_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProcessor_h_596_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargetProcessor;

// ********** End Class UIKRetargetProcessor *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
