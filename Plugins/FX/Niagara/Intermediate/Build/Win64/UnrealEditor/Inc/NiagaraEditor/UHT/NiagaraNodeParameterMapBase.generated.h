// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraNodeParameterMapBase.h"

#ifdef NIAGARAEDITOR_NiagaraNodeParameterMapBase_generated_h
#error "NiagaraNodeParameterMapBase.generated.h already included, missing '#pragma once' in NiagaraNodeParameterMapBase.h"
#endif
#define NIAGARAEDITOR_NiagaraNodeParameterMapBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraNodeParameterMapBase *********************************************
struct Z_Construct_UClass_UNiagaraNodeParameterMapBase_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeParameterMapBase_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraNodeParameterMapBase(); \
	friend struct ::Z_Construct_UClass_UNiagaraNodeParameterMapBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraNodeParameterMapBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraNodeParameterMapBase, UNiagaraNodeWithDynamicPins, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraNodeParameterMapBase_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraNodeParameterMapBase)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraNodeParameterMapBase(UNiagaraNodeParameterMapBase&&) = delete; \
	UNiagaraNodeParameterMapBase(const UNiagaraNodeParameterMapBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraNodeParameterMapBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraNodeParameterMapBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraNodeParameterMapBase) \
	NO_API virtual ~UNiagaraNodeParameterMapBase();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapBase_h_14_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapBase_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraNodeParameterMapBase;

// ********** End Class UNiagaraNodeParameterMapBase ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
