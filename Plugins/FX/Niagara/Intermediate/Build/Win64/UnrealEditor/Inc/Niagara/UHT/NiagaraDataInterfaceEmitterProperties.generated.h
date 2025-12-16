// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceEmitterProperties.h"

#ifdef NIAGARA_NiagaraDataInterfaceEmitterProperties_generated_h
#error "NiagaraDataInterfaceEmitterProperties.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceEmitterProperties.h"
#endif
#define NIAGARA_NiagaraDataInterfaceEmitterProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDataInterfaceEmitterProperties ***********************************
struct Z_Construct_UClass_UNiagaraDataInterfaceEmitterProperties_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceEmitterProperties_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceEmitterProperties_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceEmitterProperties(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceEmitterProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceEmitterProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceEmitterProperties, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceEmitterProperties_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceEmitterProperties)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceEmitterProperties_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraDataInterfaceEmitterProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceEmitterProperties) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraDataInterfaceEmitterProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceEmitterProperties); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceEmitterProperties(UNiagaraDataInterfaceEmitterProperties&&) = delete; \
	UNiagaraDataInterfaceEmitterProperties(const UNiagaraDataInterfaceEmitterProperties&) = delete; \
	NO_API virtual ~UNiagaraDataInterfaceEmitterProperties();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceEmitterProperties_h_18_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceEmitterProperties_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceEmitterProperties_h_21_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceEmitterProperties_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceEmitterProperties;

// ********** End Class UNiagaraDataInterfaceEmitterProperties *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceEmitterProperties_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
