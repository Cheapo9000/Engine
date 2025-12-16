// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraScriptVariable.h"

#ifdef NIAGARAEDITOR_NiagaraScriptVariable_generated_h
#error "NiagaraScriptVariable.generated.h already included, missing '#pragma once' in NiagaraScriptVariable.h"
#endif
#define NIAGARAEDITOR_NiagaraScriptVariable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraScriptVariableData ****************************************
struct Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptVariable_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


struct FNiagaraScriptVariableData;
// ********** End ScriptStruct FNiagaraScriptVariableData ******************************************

// ********** Begin Class UNiagaraScriptVariable ***************************************************
struct Z_Construct_UClass_UNiagaraScriptVariable_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraScriptVariable_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptVariable_h_141_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraScriptVariable(); \
	friend struct ::Z_Construct_UClass_UNiagaraScriptVariable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraScriptVariable_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraScriptVariable, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraScriptVariable_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraScriptVariable)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptVariable_h_141_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraScriptVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraScriptVariable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraScriptVariable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraScriptVariable); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraScriptVariable(UNiagaraScriptVariable&&) = delete; \
	UNiagaraScriptVariable(const UNiagaraScriptVariable&) = delete; \
	NIAGARAEDITOR_API virtual ~UNiagaraScriptVariable();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptVariable_h_137_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptVariable_h_141_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptVariable_h_141_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptVariable_h_141_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraScriptVariable;

// ********** End Class UNiagaraScriptVariable *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptVariable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
