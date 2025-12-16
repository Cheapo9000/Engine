// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Stateless/NiagaraStatelessModule.h"

#ifdef NIAGARA_NiagaraStatelessModule_generated_h
#error "NiagaraStatelessModule.generated.h already included, missing '#pragma once' in NiagaraStatelessModule.h"
#endif
#define NIAGARA_NiagaraStatelessModule_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraStatelessModule **************************************************
struct Z_Construct_UClass_UNiagaraStatelessModule_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessModule_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraStatelessModule(); \
	friend struct ::Z_Construct_UClass_UNiagaraStatelessModule_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraStatelessModule_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraStatelessModule, UNiagaraMergeable, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraStatelessModule_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraStatelessModule)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessModule_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraStatelessModule(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraStatelessModule(UNiagaraStatelessModule&&) = delete; \
	UNiagaraStatelessModule(const UNiagaraStatelessModule&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraStatelessModule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraStatelessModule); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNiagaraStatelessModule) \
	NIAGARA_API virtual ~UNiagaraStatelessModule();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessModule_h_18_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessModule_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessModule_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessModule_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraStatelessModule;

// ********** End Class UNiagaraStatelessModule ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessModule_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
