// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraEmitterFactoryNew.h"

#ifdef NIAGARAEDITOR_NiagaraEmitterFactoryNew_generated_h
#error "NiagaraEmitterFactoryNew.generated.h already included, missing '#pragma once' in NiagaraEmitterFactoryNew.h"
#endif
#define NIAGARAEDITOR_NiagaraEmitterFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraEmitterFactoryNew ************************************************
struct Z_Construct_UClass_UNiagaraEmitterFactoryNew_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraEmitterFactoryNew_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterFactoryNew_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraEmitterFactoryNew(); \
	friend struct ::Z_Construct_UClass_UNiagaraEmitterFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraEmitterFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraEmitterFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraEmitterFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraEmitterFactoryNew)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterFactoryNew_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraEmitterFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraEmitterFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraEmitterFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraEmitterFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraEmitterFactoryNew(UNiagaraEmitterFactoryNew&&) = delete; \
	UNiagaraEmitterFactoryNew(const UNiagaraEmitterFactoryNew&) = delete; \
	NIAGARAEDITOR_API virtual ~UNiagaraEmitterFactoryNew();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterFactoryNew_h_12_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterFactoryNew_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterFactoryNew_h_15_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterFactoryNew_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraEmitterFactoryNew;

// ********** End Class UNiagaraEmitterFactoryNew **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
