// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraNodeOutput.h"

#ifdef NIAGARAEDITOR_NiagaraNodeOutput_generated_h
#error "NiagaraNodeOutput.generated.h already included, missing '#pragma once' in NiagaraNodeOutput.h"
#endif
#define NIAGARAEDITOR_NiagaraNodeOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraNodeOutput *******************************************************
struct Z_Construct_UClass_UNiagaraNodeOutput_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeOutput_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOutput_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraNodeOutput(); \
	friend struct ::Z_Construct_UClass_UNiagaraNodeOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraNodeOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraNodeOutput, UNiagaraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraNodeOutput_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraNodeOutput)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOutput_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraNodeOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraNodeOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraNodeOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraNodeOutput); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraNodeOutput(UNiagaraNodeOutput&&) = delete; \
	UNiagaraNodeOutput(const UNiagaraNodeOutput&) = delete; \
	NIAGARAEDITOR_API virtual ~UNiagaraNodeOutput();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOutput_h_13_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOutput_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOutput_h_16_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOutput_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraNodeOutput;

// ********** End Class UNiagaraNodeOutput *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOutput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
