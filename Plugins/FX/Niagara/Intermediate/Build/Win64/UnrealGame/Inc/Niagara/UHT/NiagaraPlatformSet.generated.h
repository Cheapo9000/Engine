// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraPlatformSet.h"

#ifdef NIAGARA_NiagaraPlatformSet_generated_h
#error "NiagaraPlatformSet.generated.h already included, missing '#pragma once' in NiagaraPlatformSet.h"
#endif
#define NIAGARA_NiagaraPlatformSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraDeviceProfileStateEntry ***********************************
struct Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraDeviceProfileStateEntry;
// ********** End ScriptStruct FNiagaraDeviceProfileStateEntry *************************************

// ********** Begin ScriptStruct FNiagaraPlatformSetConflictEntry **********************************
struct Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraPlatformSetConflictEntry;
// ********** End ScriptStruct FNiagaraPlatformSetConflictEntry ************************************

// ********** Begin ScriptStruct FNiagaraPlatformSetConflictInfo ***********************************
struct Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h_84_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraPlatformSetConflictInfo;
// ********** End ScriptStruct FNiagaraPlatformSetConflictInfo *************************************

// ********** Begin ScriptStruct FNiagaraPlatformSetCVarCondition **********************************
struct Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h_190_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraPlatformSetCVarCondition;
// ********** End ScriptStruct FNiagaraPlatformSetCVarCondition ************************************

// ********** Begin ScriptStruct FNiagaraPlatformSetRedirect ***************************************
struct Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h_283_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraPlatformSetRedirect;
// ********** End ScriptStruct FNiagaraPlatformSetRedirect *****************************************

// ********** Begin ScriptStruct FNiagaraPlatformSet ***********************************************
struct Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h_310_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraPlatformSet;
// ********** End ScriptStruct FNiagaraPlatformSet *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h

// ********** Begin Enum ENiagaraPlatformSelectionState ********************************************
#define FOREACH_ENUM_ENIAGARAPLATFORMSELECTIONSTATE(op) \
	op(ENiagaraPlatformSelectionState::Default) \
	op(ENiagaraPlatformSelectionState::Enabled) \
	op(ENiagaraPlatformSelectionState::Disabled) 

enum class ENiagaraPlatformSelectionState : uint8;
template<> struct TIsUEnumClass<ENiagaraPlatformSelectionState> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraPlatformSelectionState>();
// ********** End Enum ENiagaraPlatformSelectionState **********************************************

// ********** Begin Enum ENiagaraPlatformSetState **************************************************
#define FOREACH_ENUM_ENIAGARAPLATFORMSETSTATE(op) \
	op(ENiagaraPlatformSetState::Disabled) \
	op(ENiagaraPlatformSetState::Enabled) \
	op(ENiagaraPlatformSetState::Active) \
	op(ENiagaraPlatformSetState::Unknown) 

enum class ENiagaraPlatformSetState : uint8;
template<> struct TIsUEnumClass<ENiagaraPlatformSetState> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraPlatformSetState>();
// ********** End Enum ENiagaraPlatformSetState ****************************************************

// ********** Begin Enum ENiagaraCVarConditionResponse *********************************************
#define FOREACH_ENUM_ENIAGARACVARCONDITIONRESPONSE(op) \
	op(ENiagaraCVarConditionResponse::None) \
	op(ENiagaraCVarConditionResponse::Enable) \
	op(ENiagaraCVarConditionResponse::Disable) 

enum class ENiagaraCVarConditionResponse : uint8;
template<> struct TIsUEnumClass<ENiagaraCVarConditionResponse> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraCVarConditionResponse>();
// ********** End Enum ENiagaraCVarConditionResponse ***********************************************

// ********** Begin Enum ENiagaraDeviceProfileRedirectMode *****************************************
#define FOREACH_ENUM_ENIAGARADEVICEPROFILEREDIRECTMODE(op) \
	op(ENiagaraDeviceProfileRedirectMode::CVar) \
	op(ENiagaraDeviceProfileRedirectMode::DeviceProfile) 

enum class ENiagaraDeviceProfileRedirectMode : uint8;
template<> struct TIsUEnumClass<ENiagaraDeviceProfileRedirectMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraDeviceProfileRedirectMode>();
// ********** End Enum ENiagaraDeviceProfileRedirectMode *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
