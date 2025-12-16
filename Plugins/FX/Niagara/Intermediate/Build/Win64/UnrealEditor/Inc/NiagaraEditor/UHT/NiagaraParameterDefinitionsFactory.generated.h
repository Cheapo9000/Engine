// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraParameterDefinitionsFactory.h"

#ifdef NIAGARAEDITOR_NiagaraParameterDefinitionsFactory_generated_h
#error "NiagaraParameterDefinitionsFactory.generated.h already included, missing '#pragma once' in NiagaraParameterDefinitionsFactory.h"
#endif
#define NIAGARAEDITOR_NiagaraParameterDefinitionsFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraParameterDefinitionsFactory **************************************
struct Z_Construct_UClass_UNiagaraParameterDefinitionsFactory_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraParameterDefinitionsFactory_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraParameterDefinitionsFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraParameterDefinitionsFactory(); \
	friend struct ::Z_Construct_UClass_UNiagaraParameterDefinitionsFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraParameterDefinitionsFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraParameterDefinitionsFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraParameterDefinitionsFactory_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraParameterDefinitionsFactory)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraParameterDefinitionsFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraParameterDefinitionsFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraParameterDefinitionsFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraParameterDefinitionsFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraParameterDefinitionsFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraParameterDefinitionsFactory(UNiagaraParameterDefinitionsFactory&&) = delete; \
	UNiagaraParameterDefinitionsFactory(const UNiagaraParameterDefinitionsFactory&) = delete; \
	NO_API virtual ~UNiagaraParameterDefinitionsFactory();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraParameterDefinitionsFactory_h_10_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraParameterDefinitionsFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraParameterDefinitionsFactory_h_13_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraParameterDefinitionsFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraParameterDefinitionsFactory;

// ********** End Class UNiagaraParameterDefinitionsFactory ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraParameterDefinitionsFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
