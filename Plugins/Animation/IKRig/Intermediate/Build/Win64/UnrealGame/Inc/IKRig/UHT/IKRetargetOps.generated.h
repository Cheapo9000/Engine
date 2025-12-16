// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/IKRetargetOps.h"

#ifdef IKRIG_IKRetargetOps_generated_h
#error "IKRetargetOps.generated.h already included, missing '#pragma once' in IKRetargetOps.h"
#endif
#define IKRIG_IKRetargetOps_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FIKRetargetOpSettingsBase *****************************************
struct Z_Construct_UScriptStruct_FIKRetargetOpSettingsBase_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetOpSettingsBase_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FIKRetargetOpSettingsBase;
// ********** End ScriptStruct FIKRetargetOpSettingsBase *******************************************

// ********** Begin ScriptStruct FIKRetargetOpBase *************************************************
struct Z_Construct_UScriptStruct_FIKRetargetOpBase_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h_139_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetOpBase_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FIKRetargetOpBase;
// ********** End ScriptStruct FIKRetargetOpBase ***************************************************

// ********** Begin Class UIKRetargetOpControllerBase **********************************************
struct Z_Construct_UClass_UIKRetargetOpControllerBase_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRetargetOpControllerBase_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h_423_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetOpControllerBase(); \
	friend struct ::Z_Construct_UClass_UIKRetargetOpControllerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRetargetOpControllerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargetOpControllerBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRetargetOpControllerBase_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargetOpControllerBase)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h_423_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRetargetOpControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargetOpControllerBase(UIKRetargetOpControllerBase&&) = delete; \
	UIKRetargetOpControllerBase(const UIKRetargetOpControllerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRetargetOpControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetOpControllerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetOpControllerBase) \
	IKRIG_API virtual ~UIKRetargetOpControllerBase();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h_420_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h_423_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h_423_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h_423_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargetOpControllerBase;

// ********** End Class UIKRetargetOpControllerBase ************************************************

// ********** Begin Class URetargetOpBase **********************************************************
struct Z_Construct_UClass_URetargetOpBase_Statics;
IKRIG_API UClass* Z_Construct_UClass_URetargetOpBase_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h_440_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURetargetOpBase(); \
	friend struct ::Z_Construct_UClass_URetargetOpBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_URetargetOpBase_NoRegister(); \
public: \
	DECLARE_CLASS2(URetargetOpBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_URetargetOpBase_NoRegister) \
	DECLARE_SERIALIZER(URetargetOpBase)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h_440_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API URetargetOpBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URetargetOpBase(URetargetOpBase&&) = delete; \
	URetargetOpBase(const URetargetOpBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, URetargetOpBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URetargetOpBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URetargetOpBase) \
	IKRIG_API virtual ~URetargetOpBase();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h_437_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h_440_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h_440_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h_440_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URetargetOpBase;

// ********** End Class URetargetOpBase ************************************************************

// ********** Begin Class URetargetOpStack *********************************************************
struct Z_Construct_UClass_URetargetOpStack_Statics;
IKRIG_API UClass* Z_Construct_UClass_URetargetOpStack_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h_474_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURetargetOpStack(); \
	friend struct ::Z_Construct_UClass_URetargetOpStack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_URetargetOpStack_NoRegister(); \
public: \
	DECLARE_CLASS2(URetargetOpStack, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_URetargetOpStack_NoRegister) \
	DECLARE_SERIALIZER(URetargetOpStack)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h_474_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API URetargetOpStack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URetargetOpStack(URetargetOpStack&&) = delete; \
	URetargetOpStack(const URetargetOpStack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, URetargetOpStack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URetargetOpStack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URetargetOpStack) \
	IKRIG_API virtual ~URetargetOpStack();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h_471_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h_474_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h_474_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h_474_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URetargetOpStack;

// ********** End Class URetargetOpStack ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetOps_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
