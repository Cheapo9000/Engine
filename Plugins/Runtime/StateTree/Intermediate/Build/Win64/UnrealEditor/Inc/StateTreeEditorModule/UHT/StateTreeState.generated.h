// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreeState.h"

#ifdef STATETREEEDITORMODULE_StateTreeState_generated_h
#error "StateTreeState.generated.h already included, missing '#pragma once' in StateTreeState.h"
#endif
#define STATETREEEDITORMODULE_StateTreeState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FStateTreeEventDesc ***********************************************
struct Z_Construct_UScriptStruct_FStateTreeEventDesc_Statics;
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeState_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStateTreeEventDesc_Statics; \
	STATETREEEDITORMODULE_API static class UScriptStruct* StaticStruct();


struct FStateTreeEventDesc;
// ********** End ScriptStruct FStateTreeEventDesc *************************************************

// ********** Begin ScriptStruct FStateTreeTransitionDelegateListener ******************************
struct Z_Construct_UScriptStruct_FStateTreeTransitionDelegateListener_Statics;
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeState_h_73_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStateTreeTransitionDelegateListener_Statics; \
	STATETREEEDITORMODULE_API static class UScriptStruct* StaticStruct();


struct FStateTreeTransitionDelegateListener;
// ********** End ScriptStruct FStateTreeTransitionDelegateListener ********************************

// ********** Begin ScriptStruct FStateTreeTransition **********************************************
struct Z_Construct_UScriptStruct_FStateTreeTransition_Statics;
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeState_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStateTreeTransition_Statics; \
	STATETREEEDITORMODULE_API static class UScriptStruct* StaticStruct();


struct FStateTreeTransition;
// ********** End ScriptStruct FStateTreeTransition ************************************************

// ********** Begin ScriptStruct FStateTreeStateParameters *****************************************
struct Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics;
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeState_h_187_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics; \
	STATETREEEDITORMODULE_API static class UScriptStruct* StaticStruct();


struct FStateTreeStateParameters;
// ********** End ScriptStruct FStateTreeStateParameters *******************************************

// ********** Begin Class UStateTreeState **********************************************************
struct Z_Construct_UClass_UStateTreeState_Statics;
STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeState_NoRegister();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeState_h_219_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeState(); \
	friend struct ::Z_Construct_UClass_UStateTreeState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATETREEEDITORMODULE_API UClass* ::Z_Construct_UClass_UStateTreeState_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTreeState, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StateTreeEditorModule"), Z_Construct_UClass_UStateTreeState_NoRegister) \
	DECLARE_SERIALIZER(UStateTreeState) \
	virtual UObject* _getUObject() const override { return const_cast<UStateTreeState*>(this); }


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeState_h_219_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTreeState(UStateTreeState&&) = delete; \
	UStateTreeState(const UStateTreeState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATETREEEDITORMODULE_API, UStateTreeState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeState)


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeState_h_216_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeState_h_219_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeState_h_219_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeState_h_219_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTreeState;

// ********** End Class UStateTreeState ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
