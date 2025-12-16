// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraVariableMetaData.h"

#ifdef NIAGARA_NiagaraVariableMetaData_generated_h
#error "NiagaraVariableMetaData.generated.h already included, missing '#pragma once' in NiagaraVariableMetaData.h"
#endif
#define NIAGARA_NiagaraVariableMetaData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraInputConditionMetadata ************************************
struct Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraInputConditionMetadata;
// ********** End ScriptStruct FNiagaraInputConditionMetadata **************************************

// ********** Begin ScriptStruct FNiagaraEnumParameterMetaData *************************************
struct Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraEnumParameterMetaData;
// ********** End ScriptStruct FNiagaraEnumParameterMetaData ***************************************

// ********** Begin ScriptStruct FWidgetNamedInputValue ********************************************
struct Z_Construct_UScriptStruct_FWidgetNamedInputValue_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h_75_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWidgetNamedInputValue_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FWidgetNamedInputValue;
// ********** End ScriptStruct FWidgetNamedInputValue **********************************************

// ********** Begin ScriptStruct FWidgetSegmentValueOverride ***************************************
struct Z_Construct_UScriptStruct_FWidgetSegmentValueOverride_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h_90_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWidgetSegmentValueOverride_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FWidgetSegmentValueOverride;
// ********** End ScriptStruct FWidgetSegmentValueOverride *****************************************

// ********** Begin ScriptStruct FNiagaraWidgetNamedIntegerInputValue ******************************
struct Z_Construct_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h_111_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraWidgetNamedIntegerInputValue;
// ********** End ScriptStruct FNiagaraWidgetNamedIntegerInputValue ********************************

// ********** Begin ScriptStruct FNiagaraInputParameterCustomization *******************************
struct Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h_123_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraInputParameterCustomization;
// ********** End ScriptStruct FNiagaraInputParameterCustomization *********************************

// ********** Begin ScriptStruct FNiagaraBoolParameterMetaData *************************************
struct Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h_187_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraBoolParameterMetaData;
// ********** End ScriptStruct FNiagaraBoolParameterMetaData ***************************************

// ********** Begin ScriptStruct FNiagaraVariableMetaData ******************************************
struct Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h_216_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraVariableMetaData;
// ********** End ScriptStruct FNiagaraVariableMetaData ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h

// ********** Begin Enum ENiagaraInputWidgetType ***************************************************
#define FOREACH_ENUM_ENIAGARAINPUTWIDGETTYPE(op) \
	op(ENiagaraInputWidgetType::Default) \
	op(ENiagaraInputWidgetType::Slider) \
	op(ENiagaraInputWidgetType::Volume) \
	op(ENiagaraInputWidgetType::NumericDropdown) \
	op(ENiagaraInputWidgetType::EnumStyle) \
	op(ENiagaraInputWidgetType::SegmentedButtons) 

enum class ENiagaraInputWidgetType : uint8;
template<> struct TIsUEnumClass<ENiagaraInputWidgetType> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraInputWidgetType>();
// ********** End Enum ENiagaraInputWidgetType *****************************************************

// ********** Begin Enum ENiagaraBoolDisplayMode ***************************************************
#define FOREACH_ENUM_ENIAGARABOOLDISPLAYMODE(op) \
	op(ENiagaraBoolDisplayMode::DisplayAlways) \
	op(ENiagaraBoolDisplayMode::DisplayIfTrue) \
	op(ENiagaraBoolDisplayMode::DisplayIfFalse) 

enum class ENiagaraBoolDisplayMode : uint8;
template<> struct TIsUEnumClass<ENiagaraBoolDisplayMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraBoolDisplayMode>();
// ********** End Enum ENiagaraBoolDisplayMode *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
