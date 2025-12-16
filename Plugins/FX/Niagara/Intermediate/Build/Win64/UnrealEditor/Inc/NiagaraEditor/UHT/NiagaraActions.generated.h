// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraActions.h"

#ifdef NIAGARAEDITOR_NiagaraActions_generated_h
#error "NiagaraActions.generated.h already included, missing '#pragma once' in NiagaraActions.h"
#endif
#define NIAGARAEDITOR_NiagaraActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraActionSourceData ******************************************
struct Z_Construct_UScriptStruct_FNiagaraActionSourceData_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraActions_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraActionSourceData_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


struct FNiagaraActionSourceData;
// ********** End ScriptStruct FNiagaraActionSourceData ********************************************

// ********** Begin ScriptStruct FNiagaraMenuAction ************************************************
struct Z_Construct_UScriptStruct_FNiagaraMenuAction_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraActions_h_58_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraMenuAction_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FNiagaraMenuAction;
// ********** End ScriptStruct FNiagaraMenuAction **************************************************

// ********** Begin ScriptStruct FNiagaraMenuAction_Base *******************************************
struct Z_Construct_UScriptStruct_FNiagaraMenuAction_Base_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraActions_h_114_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraMenuAction_Base_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


struct FNiagaraMenuAction_Base;
// ********** End ScriptStruct FNiagaraMenuAction_Base *********************************************

// ********** Begin ScriptStruct FNiagaraMenuAction_Generic ****************************************
struct Z_Construct_UScriptStruct_FNiagaraMenuAction_Generic_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraActions_h_162_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraMenuAction_Generic_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FNiagaraMenuAction_Base Super;


struct FNiagaraMenuAction_Generic;
// ********** End ScriptStruct FNiagaraMenuAction_Generic ******************************************

// ********** Begin ScriptStruct FNiagaraAction_NewNode ********************************************
struct Z_Construct_UScriptStruct_FNiagaraAction_NewNode_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraActions_h_208_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraAction_NewNode_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FNiagaraMenuAction_Generic Super;


struct FNiagaraAction_NewNode;
// ********** End ScriptStruct FNiagaraAction_NewNode **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraActions_h

// ********** Begin Enum ENiagaraMenuSections ******************************************************
#define FOREACH_ENUM_ENIAGARAMENUSECTIONS(op) \
	op(ENiagaraMenuSections::Suggested) \
	op(ENiagaraMenuSections::General) 

enum class ENiagaraMenuSections : uint8;
template<> struct TIsUEnumClass<ENiagaraMenuSections> { enum { Value = true }; };
template<> NIAGARAEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraMenuSections>();
// ********** End Enum ENiagaraMenuSections ********************************************************

// ********** Begin Enum EScriptSource *************************************************************
#define FOREACH_ENUM_ESCRIPTSOURCE(op) \
	op(EScriptSource::Niagara) \
	op(EScriptSource::Game) \
	op(EScriptSource::Plugins) \
	op(EScriptSource::Developer) \
	op(EScriptSource::Unknown) 

enum class EScriptSource : uint8;
template<> struct TIsUEnumClass<EScriptSource> { enum { Value = true }; };
template<> NIAGARAEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EScriptSource>();
// ********** End Enum EScriptSource ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
