// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraMessageDataBase.h"

#ifdef NIAGARA_NiagaraMessageDataBase_generated_h
#error "NiagaraMessageDataBase.generated.h already included, missing '#pragma once' in NiagaraMessageDataBase.h"
#endif
#define NIAGARA_NiagaraMessageDataBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraMessageDataBase **************************************************
struct Z_Construct_UClass_UNiagaraMessageDataBase_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraMessageDataBase_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMessageDataBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraMessageDataBase(); \
	friend struct ::Z_Construct_UClass_UNiagaraMessageDataBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraMessageDataBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraMessageDataBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraMessageDataBase_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraMessageDataBase)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMessageDataBase_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraMessageDataBase(UNiagaraMessageDataBase&&) = delete; \
	UNiagaraMessageDataBase(const UNiagaraMessageDataBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraMessageDataBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraMessageDataBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraMessageDataBase) \
	NIAGARA_API virtual ~UNiagaraMessageDataBase();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMessageDataBase_h_8_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMessageDataBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMessageDataBase_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMessageDataBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraMessageDataBase;

// ********** End Class UNiagaraMessageDataBase ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMessageDataBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
