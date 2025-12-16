// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraNodeInput.h"

#ifdef NIAGARAEDITOR_NiagaraNodeInput_generated_h
#error "NiagaraNodeInput.generated.h already included, missing '#pragma once' in NiagaraNodeInput.h"
#endif
#define NIAGARAEDITOR_NiagaraNodeInput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraInputExposureOptions **************************************
struct Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeInput_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


struct FNiagaraInputExposureOptions;
// ********** End ScriptStruct FNiagaraInputExposureOptions ****************************************

// ********** Begin Class UNiagaraNodeInput ********************************************************
struct Z_Construct_UClass_UNiagaraNodeInput_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeInput_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeInput_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraNodeInput(); \
	friend struct ::Z_Construct_UClass_UNiagaraNodeInput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraNodeInput_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraNodeInput, UNiagaraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraNodeInput_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraNodeInput)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeInput_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraNodeInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraNodeInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraNodeInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraNodeInput); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraNodeInput(UNiagaraNodeInput&&) = delete; \
	UNiagaraNodeInput(const UNiagaraNodeInput&) = delete; \
	NIAGARAEDITOR_API virtual ~UNiagaraNodeInput();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeInput_h_46_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeInput_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeInput_h_49_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeInput_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraNodeInput;

// ********** End Class UNiagaraNodeInput **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeInput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
