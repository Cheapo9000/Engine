// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rig/IKRigDefinition.h"

#ifdef IKRIG_IKRigDefinition_generated_h
#error "IKRigDefinition.generated.h already included, missing '#pragma once' in IKRigDefinition.h"
#endif
#define IKRIG_IKRigDefinition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UIKRigEffectorGoal *******************************************************
struct Z_Construct_UClass_UIKRigEffectorGoal_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRigEffectorGoal_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRigEffectorGoal(); \
	friend struct ::Z_Construct_UClass_UIKRigEffectorGoal_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRigEffectorGoal_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRigEffectorGoal, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRigEffectorGoal_NoRegister) \
	DECLARE_SERIALIZER(UIKRigEffectorGoal)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRigEffectorGoal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRigEffectorGoal(UIKRigEffectorGoal&&) = delete; \
	UIKRigEffectorGoal(const UIKRigEffectorGoal&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRigEffectorGoal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRigEffectorGoal); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRigEffectorGoal) \
	IKRIG_API virtual ~UIKRigEffectorGoal();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_38_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRigEffectorGoal;

// ********** End Class UIKRigEffectorGoal *********************************************************

// ********** Begin ScriptStruct FBoneChain ********************************************************
struct Z_Construct_UScriptStruct_FBoneChain_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_136_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBoneChain_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FBoneChain;
// ********** End ScriptStruct FBoneChain **********************************************************

// ********** Begin ScriptStruct FRetargetDefinition ***********************************************
struct Z_Construct_UScriptStruct_FRetargetDefinition_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_167_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRetargetDefinition_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FRetargetDefinition;
// ********** End ScriptStruct FRetargetDefinition *************************************************

// ********** Begin Class UIKRigDefinition *********************************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_188_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UIKRigDefinition, IKRIG_API)


struct Z_Construct_UClass_UIKRigDefinition_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRigDefinition_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_188_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRigDefinition(); \
	friend struct ::Z_Construct_UClass_UIKRigDefinition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRigDefinition_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRigDefinition, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRigDefinition_NoRegister) \
	DECLARE_SERIALIZER(UIKRigDefinition) \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_188_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UIKRigDefinition*>(this); }


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_188_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRigDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRigDefinition(UIKRigDefinition&&) = delete; \
	UIKRigDefinition(const UIKRigDefinition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRigDefinition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRigDefinition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRigDefinition) \
	IKRIG_API virtual ~UIKRigDefinition();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_185_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_188_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_188_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h_188_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRigDefinition;

// ********** End Class UIKRigDefinition ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigDefinition_h

// ********** Begin Enum EIKRigGoalPreviewMode *****************************************************
#if WITH_EDITORONLY_DATA
#define FOREACH_ENUM_EIKRIGGOALPREVIEWMODE(op) \
	op(EIKRigGoalPreviewMode::Additive) \
	op(EIKRigGoalPreviewMode::Absolute) 

enum class EIKRigGoalPreviewMode : uint8;
template<> struct TIsUEnumClass<EIKRigGoalPreviewMode> { enum { Value = true }; };
template<> IKRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EIKRigGoalPreviewMode>();
#endif // WITH_EDITORONLY_DATA
// ********** End Enum EIKRigGoalPreviewMode *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
