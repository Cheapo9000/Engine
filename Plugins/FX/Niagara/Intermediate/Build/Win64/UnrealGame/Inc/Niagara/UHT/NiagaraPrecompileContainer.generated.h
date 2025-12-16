// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraPrecompileContainer.h"

#ifdef NIAGARA_NiagaraPrecompileContainer_generated_h
#error "NiagaraPrecompileContainer.generated.h already included, missing '#pragma once' in NiagaraPrecompileContainer.h"
#endif
#define NIAGARA_NiagaraPrecompileContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraPrecompileContainer **********************************************
struct Z_Construct_UClass_UNiagaraPrecompileContainer_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPrecompileContainer_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraPrecompileContainer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraPrecompileContainer(); \
	friend struct ::Z_Construct_UClass_UNiagaraPrecompileContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraPrecompileContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraPrecompileContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraPrecompileContainer_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraPrecompileContainer)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraPrecompileContainer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraPrecompileContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraPrecompileContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraPrecompileContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPrecompileContainer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraPrecompileContainer(UNiagaraPrecompileContainer&&) = delete; \
	UNiagaraPrecompileContainer(const UNiagaraPrecompileContainer&) = delete; \
	NIAGARA_API virtual ~UNiagaraPrecompileContainer();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraPrecompileContainer_h_9_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraPrecompileContainer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraPrecompileContainer_h_12_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraPrecompileContainer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraPrecompileContainer;

// ********** End Class UNiagaraPrecompileContainer ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraPrecompileContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
