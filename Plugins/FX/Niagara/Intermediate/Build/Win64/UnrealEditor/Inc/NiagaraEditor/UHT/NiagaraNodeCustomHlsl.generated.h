// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraNodeCustomHlsl.h"

#ifdef NIAGARAEDITOR_NiagaraNodeCustomHlsl_generated_h
#error "NiagaraNodeCustomHlsl.generated.h already included, missing '#pragma once' in NiagaraNodeCustomHlsl.h"
#endif
#define NIAGARAEDITOR_NiagaraNodeCustomHlsl_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraNodeCustomHlsl ***************************************************
struct Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeCustomHlsl_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeCustomHlsl_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraNodeCustomHlsl(); \
	friend struct ::Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraNodeCustomHlsl_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraNodeCustomHlsl, UNiagaraNodeFunctionCall, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraNodeCustomHlsl_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraNodeCustomHlsl)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeCustomHlsl_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraNodeCustomHlsl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraNodeCustomHlsl) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraNodeCustomHlsl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraNodeCustomHlsl); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraNodeCustomHlsl(UNiagaraNodeCustomHlsl&&) = delete; \
	UNiagaraNodeCustomHlsl(const UNiagaraNodeCustomHlsl&) = delete; \
	NIAGARAEDITOR_API virtual ~UNiagaraNodeCustomHlsl();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeCustomHlsl_h_13_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeCustomHlsl_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeCustomHlsl_h_16_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeCustomHlsl_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraNodeCustomHlsl;

// ********** End Class UNiagaraNodeCustomHlsl *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeCustomHlsl_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
