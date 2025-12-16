// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraSystemFactoryNew.h"

#ifdef NIAGARAEDITOR_NiagaraSystemFactoryNew_generated_h
#error "NiagaraSystemFactoryNew.generated.h already included, missing '#pragma once' in NiagaraSystemFactoryNew.h"
#endif
#define NIAGARAEDITOR_NiagaraSystemFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraSystemFactoryNew *************************************************
struct Z_Construct_UClass_UNiagaraSystemFactoryNew_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraSystemFactoryNew_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraSystemFactoryNew_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraSystemFactoryNew(); \
	friend struct ::Z_Construct_UClass_UNiagaraSystemFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraSystemFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraSystemFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraSystemFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraSystemFactoryNew)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraSystemFactoryNew_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraSystemFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSystemFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraSystemFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSystemFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraSystemFactoryNew(UNiagaraSystemFactoryNew&&) = delete; \
	UNiagaraSystemFactoryNew(const UNiagaraSystemFactoryNew&) = delete; \
	NO_API virtual ~UNiagaraSystemFactoryNew();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraSystemFactoryNew_h_15_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraSystemFactoryNew_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraSystemFactoryNew_h_18_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraSystemFactoryNew_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraSystemFactoryNew;

// ********** End Class UNiagaraSystemFactoryNew ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraSystemFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
