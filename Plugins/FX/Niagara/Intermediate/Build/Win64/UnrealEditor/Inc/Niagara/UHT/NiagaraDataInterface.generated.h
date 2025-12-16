// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterface.h"

#ifdef NIAGARA_NiagaraDataInterface_generated_h
#error "NiagaraDataInterface.generated.h already included, missing '#pragma once' in NiagaraDataInterface.h"
#endif
#define NIAGARA_NiagaraDataInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDataInterface ****************************************************
struct Z_Construct_UClass_UNiagaraDataInterface_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterface_h_573_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterface(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterface, UNiagaraDataInterfaceBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterface)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterface_h_573_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterface(UNiagaraDataInterface&&) = delete; \
	UNiagaraDataInterface(const UNiagaraDataInterface&) = delete;


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterface_h_570_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterface_h_573_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterface_h_573_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterface_h_573_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterface;

// ********** End Class UNiagaraDataInterface ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
