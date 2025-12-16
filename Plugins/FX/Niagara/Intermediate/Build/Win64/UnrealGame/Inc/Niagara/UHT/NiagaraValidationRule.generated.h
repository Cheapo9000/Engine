// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraValidationRule.h"

#ifdef NIAGARA_NiagaraValidationRule_generated_h
#error "NiagaraValidationRule.generated.h already included, missing '#pragma once' in NiagaraValidationRule.h"
#endif
#define NIAGARA_NiagaraValidationRule_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraValidationRule ***************************************************
struct Z_Construct_UClass_UNiagaraValidationRule_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraValidationRule_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRule_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraValidationRule(); \
	friend struct ::Z_Construct_UClass_UNiagaraValidationRule_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraValidationRule_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraValidationRule, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraValidationRule_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraValidationRule) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRule_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraValidationRule(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraValidationRule(UNiagaraValidationRule&&) = delete; \
	UNiagaraValidationRule(const UNiagaraValidationRule&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraValidationRule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraValidationRule); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraValidationRule) \
	NIAGARA_API virtual ~UNiagaraValidationRule();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRule_h_67_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRule_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRule_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRule_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraValidationRule;

// ********** End Class UNiagaraValidationRule *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRule_h

// ********** Begin Enum ENiagaraValidationSeverity ************************************************
#define FOREACH_ENUM_ENIAGARAVALIDATIONSEVERITY(op) \
	op(ENiagaraValidationSeverity::Info) \
	op(ENiagaraValidationSeverity::Warning) \
	op(ENiagaraValidationSeverity::Error) 

enum class ENiagaraValidationSeverity;
template<> struct TIsUEnumClass<ENiagaraValidationSeverity> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraValidationSeverity>();
// ********** End Enum ENiagaraValidationSeverity **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
