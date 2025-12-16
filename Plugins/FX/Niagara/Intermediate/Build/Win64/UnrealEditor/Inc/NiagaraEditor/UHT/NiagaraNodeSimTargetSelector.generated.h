// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraNodeSimTargetSelector.h"

#ifdef NIAGARAEDITOR_NiagaraNodeSimTargetSelector_generated_h
#error "NiagaraNodeSimTargetSelector.generated.h already included, missing '#pragma once' in NiagaraNodeSimTargetSelector.h"
#endif
#define NIAGARAEDITOR_NiagaraNodeSimTargetSelector_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraNodeSimTargetSelector ********************************************
struct Z_Construct_UClass_UNiagaraNodeSimTargetSelector_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeSimTargetSelector_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeSimTargetSelector_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraNodeSimTargetSelector(); \
	friend struct ::Z_Construct_UClass_UNiagaraNodeSimTargetSelector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraNodeSimTargetSelector_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraNodeSimTargetSelector, UNiagaraNodeUsageSelector, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraNodeSimTargetSelector_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraNodeSimTargetSelector)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeSimTargetSelector_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraNodeSimTargetSelector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraNodeSimTargetSelector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraNodeSimTargetSelector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraNodeSimTargetSelector); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraNodeSimTargetSelector(UNiagaraNodeSimTargetSelector&&) = delete; \
	UNiagaraNodeSimTargetSelector(const UNiagaraNodeSimTargetSelector&) = delete; \
	NIAGARAEDITOR_API virtual ~UNiagaraNodeSimTargetSelector();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeSimTargetSelector_h_8_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeSimTargetSelector_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeSimTargetSelector_h_11_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeSimTargetSelector_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraNodeSimTargetSelector;

// ********** End Class UNiagaraNodeSimTargetSelector **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeSimTargetSelector_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
