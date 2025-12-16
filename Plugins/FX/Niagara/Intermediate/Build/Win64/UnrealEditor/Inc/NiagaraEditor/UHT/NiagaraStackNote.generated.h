// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewModels/Stack/NiagaraStackNote.h"

#ifdef NIAGARAEDITOR_NiagaraStackNote_generated_h
#error "NiagaraStackNote.generated.h already included, missing '#pragma once' in NiagaraStackNote.h"
#endif
#define NIAGARAEDITOR_NiagaraStackNote_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraStackNote ********************************************************
struct Z_Construct_UClass_UNiagaraStackNote_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackNote_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackNote_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraStackNote(); \
	friend struct ::Z_Construct_UClass_UNiagaraStackNote_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraStackNote_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraStackNote, UNiagaraStackEntry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraStackNote_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraStackNote)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackNote_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraStackNote(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraStackNote(UNiagaraStackNote&&) = delete; \
	UNiagaraStackNote(const UNiagaraStackNote&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraStackNote); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraStackNote); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraStackNote) \
	NIAGARAEDITOR_API virtual ~UNiagaraStackNote();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackNote_h_13_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackNote_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackNote_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackNote_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraStackNote;

// ********** End Class UNiagaraStackNote **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackNote_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
