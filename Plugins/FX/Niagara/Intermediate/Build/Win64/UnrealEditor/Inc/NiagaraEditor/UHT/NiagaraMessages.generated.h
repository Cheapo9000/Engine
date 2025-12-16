// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraMessages.h"

#ifdef NIAGARAEDITOR_NiagaraMessages_generated_h
#error "NiagaraMessages.generated.h already included, missing '#pragma once' in NiagaraMessages.h"
#endif
#define NIAGARAEDITOR_NiagaraMessages_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraStackMessage **********************************************
struct Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_242_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


struct FNiagaraStackMessage;
// ********** End ScriptStruct FNiagaraStackMessage ************************************************

// ********** Begin ScriptStruct FNiagaraStackNoteData *********************************************
struct Z_Construct_UScriptStruct_FNiagaraStackNoteData_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_267_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraStackNoteData_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


struct FNiagaraStackNoteData;
// ********** End ScriptStruct FNiagaraStackNoteData ***********************************************

// ********** Begin Class UNiagaraMessageData ******************************************************
struct Z_Construct_UClass_UNiagaraMessageData_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraMessageData_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_314_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraMessageData(); \
	friend struct ::Z_Construct_UClass_UNiagaraMessageData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraMessageData_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraMessageData, UNiagaraMessageDataBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraMessageData_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraMessageData)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_314_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraMessageData(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraMessageData(UNiagaraMessageData&&) = delete; \
	UNiagaraMessageData(const UNiagaraMessageData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraMessageData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraMessageData); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNiagaraMessageData) \
	NIAGARAEDITOR_API virtual ~UNiagaraMessageData();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_311_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_314_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_314_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_314_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraMessageData;

// ********** End Class UNiagaraMessageData ********************************************************

// ********** Begin Class UNiagaraMessageDataText **************************************************
struct Z_Construct_UClass_UNiagaraMessageDataText_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraMessageDataText_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_323_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraMessageDataText(); \
	friend struct ::Z_Construct_UClass_UNiagaraMessageDataText_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraMessageDataText_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraMessageDataText, UNiagaraMessageData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraMessageDataText_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraMessageDataText)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_323_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraMessageDataText(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraMessageDataText(UNiagaraMessageDataText&&) = delete; \
	UNiagaraMessageDataText(const UNiagaraMessageDataText&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraMessageDataText); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraMessageDataText); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraMessageDataText) \
	NIAGARAEDITOR_API virtual ~UNiagaraMessageDataText();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_320_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_323_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_323_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_323_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraMessageDataText;

// ********** End Class UNiagaraMessageDataText ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h

// ********** Begin Enum ENiagaraMessageSeverity ***************************************************
#define FOREACH_ENUM_ENIAGARAMESSAGESEVERITY(op) \
	op(ENiagaraMessageSeverity::CriticalError) \
	op(ENiagaraMessageSeverity::Error) \
	op(ENiagaraMessageSeverity::PerformanceWarning) \
	op(ENiagaraMessageSeverity::Warning) \
	op(ENiagaraMessageSeverity::Info) 

enum class ENiagaraMessageSeverity : uint8;
template<> struct TIsUEnumClass<ENiagaraMessageSeverity> { enum { Value = true }; };
template<> NIAGARAEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraMessageSeverity>();
// ********** End Enum ENiagaraMessageSeverity *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
