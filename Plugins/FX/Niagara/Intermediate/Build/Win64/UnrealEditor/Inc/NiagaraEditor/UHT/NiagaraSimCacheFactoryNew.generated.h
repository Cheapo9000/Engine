// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraSimCacheFactoryNew.h"

#ifdef NIAGARAEDITOR_NiagaraSimCacheFactoryNew_generated_h
#error "NiagaraSimCacheFactoryNew.generated.h already included, missing '#pragma once' in NiagaraSimCacheFactoryNew.h"
#endif
#define NIAGARAEDITOR_NiagaraSimCacheFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraSimCacheFactoryNew ***********************************************
struct Z_Construct_UClass_UNiagaraSimCacheFactoryNew_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraSimCacheFactoryNew_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraSimCacheFactoryNew_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraSimCacheFactoryNew(); \
	friend struct ::Z_Construct_UClass_UNiagaraSimCacheFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraSimCacheFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraSimCacheFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraSimCacheFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraSimCacheFactoryNew)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraSimCacheFactoryNew_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraSimCacheFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSimCacheFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraSimCacheFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSimCacheFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraSimCacheFactoryNew(UNiagaraSimCacheFactoryNew&&) = delete; \
	UNiagaraSimCacheFactoryNew(const UNiagaraSimCacheFactoryNew&) = delete; \
	NIAGARAEDITOR_API virtual ~UNiagaraSimCacheFactoryNew();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraSimCacheFactoryNew_h_10_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraSimCacheFactoryNew_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraSimCacheFactoryNew_h_13_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraSimCacheFactoryNew_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraSimCacheFactoryNew;

// ********** End Class UNiagaraSimCacheFactoryNew *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraSimCacheFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
