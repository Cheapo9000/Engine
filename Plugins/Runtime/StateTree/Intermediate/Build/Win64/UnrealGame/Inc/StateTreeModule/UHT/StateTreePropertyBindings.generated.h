// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreePropertyBindings.h"

#ifdef STATETREEMODULE_StateTreePropertyBindings_generated_h
#error "StateTreePropertyBindings.generated.h already included, missing '#pragma once' in StateTreePropertyBindings.h"
#endif
#define STATETREEMODULE_StateTreePropertyBindings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FStateTreeBindableStructDesc **************************************
struct Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics;
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_133_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics; \
	STATETREEMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FPropertyBindingBindableStructDescriptor Super;


struct FStateTreeBindableStructDesc;
// ********** End ScriptStruct FStateTreeBindableStructDesc ****************************************

// ********** Begin ScriptStruct FStateTreeEditorPropertyPath **************************************
struct Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics;
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_191_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics; \
	STATETREEMODULE_API static class UScriptStruct* StaticStruct();


struct FStateTreeEditorPropertyPath;
// ********** End ScriptStruct FStateTreeEditorPropertyPath ****************************************

// ********** Begin ScriptStruct FStateTreePropertyPathBinding *************************************
struct Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics;
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_215_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics; \
	STATETREEMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FPropertyBindingBinding Super;


struct FStateTreePropertyPathBinding;
// ********** End ScriptStruct FStateTreePropertyPathBinding ***************************************

// ********** Begin ScriptStruct FStateTreePropertyRefPath *****************************************
struct Z_Construct_UScriptStruct_FStateTreePropertyRefPath_Statics;
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_321_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStateTreePropertyRefPath_Statics; \
	STATETREEMODULE_API static class UScriptStruct* StaticStruct();


struct FStateTreePropertyRefPath;
// ********** End ScriptStruct FStateTreePropertyRefPath *******************************************

// ********** Begin ScriptStruct FStateTreePropertyAccess ******************************************
struct Z_Construct_UScriptStruct_FStateTreePropertyAccess_Statics;
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_437_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStateTreePropertyAccess_Statics; \
	STATETREEMODULE_API static class UScriptStruct* StaticStruct();


struct FStateTreePropertyAccess;
// ********** End ScriptStruct FStateTreePropertyAccess ********************************************

// ********** Begin ScriptStruct FStateTreePropertyBindings ****************************************
struct Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics;
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_461_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics; \
	STATETREEMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FPropertyBindingBindingCollection Super;


struct FStateTreePropertyBindings;
// ********** End ScriptStruct FStateTreePropertyBindings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h

// ********** Begin Enum EStateTreeBindableStructSource ********************************************
#define FOREACH_ENUM_ESTATETREEBINDABLESTRUCTSOURCE(op) \
	op(EStateTreeBindableStructSource::Context) \
	op(EStateTreeBindableStructSource::Parameter) \
	op(EStateTreeBindableStructSource::Evaluator) \
	op(EStateTreeBindableStructSource::GlobalTask) \
	op(EStateTreeBindableStructSource::StateParameter) \
	op(EStateTreeBindableStructSource::Task) \
	op(EStateTreeBindableStructSource::Condition) \
	op(EStateTreeBindableStructSource::Consideration) \
	op(EStateTreeBindableStructSource::TransitionEvent) \
	op(EStateTreeBindableStructSource::StateEvent) \
	op(EStateTreeBindableStructSource::PropertyFunction) \
	op(EStateTreeBindableStructSource::Transition) 

enum class EStateTreeBindableStructSource : uint8;
template<> struct TIsUEnumClass<EStateTreeBindableStructSource> { enum { Value = true }; };
template<> STATETREEMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStateTreeBindableStructSource>();
// ********** End Enum EStateTreeBindableStructSource **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
