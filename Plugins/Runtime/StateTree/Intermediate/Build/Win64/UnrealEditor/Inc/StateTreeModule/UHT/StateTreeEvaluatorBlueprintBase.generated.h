// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/StateTreeEvaluatorBlueprintBase.h"

#ifdef STATETREEMODULE_StateTreeEvaluatorBlueprintBase_generated_h
#error "StateTreeEvaluatorBlueprintBase.generated.h already included, missing '#pragma once' in StateTreeEvaluatorBlueprintBase.h"
#endif
#define STATETREEMODULE_StateTreeEvaluatorBlueprintBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStateTreeEvaluatorBlueprintBase *****************************************
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeEvaluatorBlueprintBase_h_20_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase_Statics;
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase_NoRegister();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeEvaluatorBlueprintBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeEvaluatorBlueprintBase(); \
	friend struct ::Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATETREEMODULE_API UClass* ::Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTreeEvaluatorBlueprintBase, UStateTreeNodeBlueprintBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/StateTreeModule"), Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase_NoRegister) \
	DECLARE_SERIALIZER(UStateTreeEvaluatorBlueprintBase)


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeEvaluatorBlueprintBase_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTreeEvaluatorBlueprintBase(UStateTreeEvaluatorBlueprintBase&&) = delete; \
	UStateTreeEvaluatorBlueprintBase(const UStateTreeEvaluatorBlueprintBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATETREEMODULE_API, UStateTreeEvaluatorBlueprintBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeEvaluatorBlueprintBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeEvaluatorBlueprintBase) \
	STATETREEMODULE_API virtual ~UStateTreeEvaluatorBlueprintBase();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeEvaluatorBlueprintBase_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeEvaluatorBlueprintBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeEvaluatorBlueprintBase_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeEvaluatorBlueprintBase_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeEvaluatorBlueprintBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTreeEvaluatorBlueprintBase;

// ********** End Class UStateTreeEvaluatorBlueprintBase *******************************************

// ********** Begin ScriptStruct FStateTreeBlueprintEvaluatorWrapper *******************************
struct Z_Construct_UScriptStruct_FStateTreeBlueprintEvaluatorWrapper_Statics;
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeEvaluatorBlueprintBase_h_51_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStateTreeBlueprintEvaluatorWrapper_Statics; \
	STATETREEMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FStateTreeEvaluatorBase Super;


struct FStateTreeBlueprintEvaluatorWrapper;
// ********** End ScriptStruct FStateTreeBlueprintEvaluatorWrapper *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeEvaluatorBlueprintBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
