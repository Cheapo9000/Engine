// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/StateTreeConditionBlueprintBase.h"

#ifdef STATETREEMODULE_StateTreeConditionBlueprintBase_generated_h
#error "StateTreeConditionBlueprintBase.generated.h already included, missing '#pragma once' in StateTreeConditionBlueprintBase.h"
#endif
#define STATETREEMODULE_StateTreeConditionBlueprintBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStateTreeConditionBlueprintBase *****************************************
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConditionBlueprintBase_h_20_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UStateTreeConditionBlueprintBase_Statics;
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeConditionBlueprintBase_NoRegister();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConditionBlueprintBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeConditionBlueprintBase(); \
	friend struct ::Z_Construct_UClass_UStateTreeConditionBlueprintBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATETREEMODULE_API UClass* ::Z_Construct_UClass_UStateTreeConditionBlueprintBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTreeConditionBlueprintBase, UStateTreeNodeBlueprintBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/StateTreeModule"), Z_Construct_UClass_UStateTreeConditionBlueprintBase_NoRegister) \
	DECLARE_SERIALIZER(UStateTreeConditionBlueprintBase)


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConditionBlueprintBase_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTreeConditionBlueprintBase(UStateTreeConditionBlueprintBase&&) = delete; \
	UStateTreeConditionBlueprintBase(const UStateTreeConditionBlueprintBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATETREEMODULE_API, UStateTreeConditionBlueprintBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeConditionBlueprintBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeConditionBlueprintBase) \
	STATETREEMODULE_API virtual ~UStateTreeConditionBlueprintBase();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConditionBlueprintBase_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConditionBlueprintBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConditionBlueprintBase_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConditionBlueprintBase_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConditionBlueprintBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTreeConditionBlueprintBase;

// ********** End Class UStateTreeConditionBlueprintBase *******************************************

// ********** Begin ScriptStruct FStateTreeBlueprintConditionWrapper *******************************
struct Z_Construct_UScriptStruct_FStateTreeBlueprintConditionWrapper_Statics;
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConditionBlueprintBase_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStateTreeBlueprintConditionWrapper_Statics; \
	STATETREEMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FStateTreeConditionBase Super;


struct FStateTreeBlueprintConditionWrapper;
// ********** End ScriptStruct FStateTreeBlueprintConditionWrapper *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConditionBlueprintBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
