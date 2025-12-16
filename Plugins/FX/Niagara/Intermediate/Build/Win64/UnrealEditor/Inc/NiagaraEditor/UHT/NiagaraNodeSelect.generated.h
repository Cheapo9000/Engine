// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraNodeSelect.h"

#ifdef NIAGARAEDITOR_NiagaraNodeSelect_generated_h
#error "NiagaraNodeSelect.generated.h already included, missing '#pragma once' in NiagaraNodeSelect.h"
#endif
#define NIAGARAEDITOR_NiagaraNodeSelect_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraNodeSelect *******************************************************
struct Z_Construct_UClass_UNiagaraNodeSelect_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeSelect_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeSelect_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraNodeSelect(); \
	friend struct ::Z_Construct_UClass_UNiagaraNodeSelect_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraNodeSelect_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraNodeSelect, UNiagaraNodeUsageSelector, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraNodeSelect_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraNodeSelect)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeSelect_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraNodeSelect(UNiagaraNodeSelect&&) = delete; \
	UNiagaraNodeSelect(const UNiagaraNodeSelect&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraNodeSelect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraNodeSelect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraNodeSelect) \
	NIAGARAEDITOR_API virtual ~UNiagaraNodeSelect();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeSelect_h_14_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeSelect_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeSelect_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeSelect_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraNodeSelect;

// ********** End Class UNiagaraNodeSelect *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeSelect_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
