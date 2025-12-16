// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewModels/Stack/NiagaraStackSelection.h"

#ifdef NIAGARAEDITOR_NiagaraStackSelection_generated_h
#error "NiagaraStackSelection.generated.h already included, missing '#pragma once' in NiagaraStackSelection.h"
#endif
#define NIAGARAEDITOR_NiagaraStackSelection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraStackSelection ***************************************************
struct Z_Construct_UClass_UNiagaraStackSelection_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSelection_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSelection_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraStackSelection(); \
	friend struct ::Z_Construct_UClass_UNiagaraStackSelection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraStackSelection_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraStackSelection, UNiagaraStackEntry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraStackSelection_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraStackSelection)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSelection_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraStackSelection(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraStackSelection(UNiagaraStackSelection&&) = delete; \
	UNiagaraStackSelection(const UNiagaraStackSelection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraStackSelection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraStackSelection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraStackSelection) \
	NIAGARAEDITOR_API virtual ~UNiagaraStackSelection();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSelection_h_8_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSelection_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSelection_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSelection_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraStackSelection;

// ********** End Class UNiagaraStackSelection *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackSelection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
