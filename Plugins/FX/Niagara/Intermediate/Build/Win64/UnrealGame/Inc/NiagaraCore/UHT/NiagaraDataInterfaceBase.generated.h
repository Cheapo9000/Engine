// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceBase.h"

#ifdef NIAGARACORE_NiagaraDataInterfaceBase_generated_h
#error "NiagaraDataInterfaceBase.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceBase.h"
#endif
#define NIAGARACORE_NiagaraDataInterfaceBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDataInterfaceBase ************************************************
struct Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics;
NIAGARACORE_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceBase_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraDataInterfaceBase_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceBase(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARACORE_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceBase, UNiagaraNotifyOnChanged, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NiagaraCore"), Z_Construct_UClass_UNiagaraDataInterfaceBase_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceBase)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraDataInterfaceBase_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARACORE_API UNiagaraDataInterfaceBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARACORE_API, UNiagaraDataInterfaceBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceBase(UNiagaraDataInterfaceBase&&) = delete; \
	UNiagaraDataInterfaceBase(const UNiagaraDataInterfaceBase&) = delete; \
	NIAGARACORE_API virtual ~UNiagaraDataInterfaceBase();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraDataInterfaceBase_h_43_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraDataInterfaceBase_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraDataInterfaceBase_h_46_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraDataInterfaceBase_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceBase;

// ********** End Class UNiagaraDataInterfaceBase **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraDataInterfaceBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
