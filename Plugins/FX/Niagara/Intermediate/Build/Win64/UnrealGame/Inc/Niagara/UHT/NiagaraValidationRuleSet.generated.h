// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraValidationRuleSet.h"

#ifdef NIAGARA_NiagaraValidationRuleSet_generated_h
#error "NiagaraValidationRuleSet.generated.h already included, missing '#pragma once' in NiagaraValidationRuleSet.h"
#endif
#define NIAGARA_NiagaraValidationRuleSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraValidationRuleSet ************************************************
struct Z_Construct_UClass_UNiagaraValidationRuleSet_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraValidationRuleSet_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRuleSet_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraValidationRuleSet(); \
	friend struct ::Z_Construct_UClass_UNiagaraValidationRuleSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraValidationRuleSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraValidationRuleSet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraValidationRuleSet_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraValidationRuleSet)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRuleSet_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraValidationRuleSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraValidationRuleSet(UNiagaraValidationRuleSet&&) = delete; \
	UNiagaraValidationRuleSet(const UNiagaraValidationRuleSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraValidationRuleSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraValidationRuleSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraValidationRuleSet) \
	NIAGARA_API virtual ~UNiagaraValidationRuleSet();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRuleSet_h_11_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRuleSet_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRuleSet_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRuleSet_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraValidationRuleSet;

// ********** End Class UNiagaraValidationRuleSet **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRuleSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
