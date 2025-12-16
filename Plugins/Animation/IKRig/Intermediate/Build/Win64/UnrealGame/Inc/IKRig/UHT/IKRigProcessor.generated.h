// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rig/IKRigProcessor.h"

#ifdef IKRIG_IKRigProcessor_generated_h
#error "IKRigProcessor.generated.h already included, missing '#pragma once' in IKRigProcessor.h"
#endif
#define IKRIG_IKRigProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGoalBone *********************************************************
struct Z_Construct_UScriptStruct_FGoalBone_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigProcessor_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGoalBone_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FGoalBone;
// ********** End ScriptStruct FGoalBone ***********************************************************

// ********** Begin Class UIKRigProcessor **********************************************************
struct Z_Construct_UClass_UIKRigProcessor_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRigProcessor_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigProcessor_h_159_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRigProcessor(); \
	friend struct ::Z_Construct_UClass_UIKRigProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRigProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRigProcessor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRigProcessor_NoRegister) \
	DECLARE_SERIALIZER(UIKRigProcessor)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigProcessor_h_159_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIKRigProcessor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRigProcessor(UIKRigProcessor&&) = delete; \
	UIKRigProcessor(const UIKRigProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRigProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRigProcessor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRigProcessor) \
	NO_API virtual ~UIKRigProcessor();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigProcessor_h_155_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigProcessor_h_159_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigProcessor_h_159_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigProcessor_h_159_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRigProcessor;

// ********** End Class UIKRigProcessor ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
