// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewModels/Stack/NiagaraStackRoot.h"

#ifdef NIAGARAEDITOR_NiagaraStackRoot_generated_h
#error "NiagaraStackRoot.generated.h already included, missing '#pragma once' in NiagaraStackRoot.h"
#endif
#define NIAGARAEDITOR_NiagaraStackRoot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraStackRoot ********************************************************
struct Z_Construct_UClass_UNiagaraStackRoot_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackRoot_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackRoot_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraStackRoot(); \
	friend struct ::Z_Construct_UClass_UNiagaraStackRoot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraStackRoot_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraStackRoot, UNiagaraStackEntry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraStackRoot_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraStackRoot)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackRoot_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraStackRoot(UNiagaraStackRoot&&) = delete; \
	UNiagaraStackRoot(const UNiagaraStackRoot&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraStackRoot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraStackRoot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraStackRoot) \
	NIAGARAEDITOR_API virtual ~UNiagaraStackRoot();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackRoot_h_21_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackRoot_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackRoot_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackRoot_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraStackRoot;

// ********** End Class UNiagaraStackRoot **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackRoot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
