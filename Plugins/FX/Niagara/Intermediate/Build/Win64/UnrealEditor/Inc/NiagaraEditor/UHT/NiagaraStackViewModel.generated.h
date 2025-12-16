// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewModels/Stack/NiagaraStackViewModel.h"

#ifdef NIAGARAEDITOR_NiagaraStackViewModel_generated_h
#error "NiagaraStackViewModel.generated.h already included, missing '#pragma once' in NiagaraStackViewModel.h"
#endif
#define NIAGARAEDITOR_NiagaraStackViewModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraStackViewModel ***************************************************
struct Z_Construct_UClass_UNiagaraStackViewModel_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackViewModel_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackViewModel_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraStackViewModel(); \
	friend struct ::Z_Construct_UClass_UNiagaraStackViewModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraStackViewModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraStackViewModel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraStackViewModel_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraStackViewModel)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackViewModel_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraStackViewModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraStackViewModel(UNiagaraStackViewModel&&) = delete; \
	UNiagaraStackViewModel(const UNiagaraStackViewModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraStackViewModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraStackViewModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraStackViewModel) \
	NIAGARAEDITOR_API virtual ~UNiagaraStackViewModel();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackViewModel_h_50_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackViewModel_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackViewModel_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackViewModel_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraStackViewModel;

// ********** End Class UNiagaraStackViewModel *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackViewModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
