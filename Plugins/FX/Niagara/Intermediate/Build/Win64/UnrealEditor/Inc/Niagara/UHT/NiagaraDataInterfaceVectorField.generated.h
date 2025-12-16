// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceVectorField.h"

#ifdef NIAGARA_NiagaraDataInterfaceVectorField_generated_h
#error "NiagaraDataInterfaceVectorField.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceVectorField.h"
#endif
#define NIAGARA_NiagaraDataInterfaceVectorField_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDataInterfaceVectorField *****************************************
struct Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceVectorField_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVectorField_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceVectorField(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceVectorField_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceVectorField, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceVectorField_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceVectorField)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVectorField_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceVectorField(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceVectorField) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceVectorField); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceVectorField); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceVectorField(UNiagaraDataInterfaceVectorField&&) = delete; \
	UNiagaraDataInterfaceVectorField(const UNiagaraDataInterfaceVectorField&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataInterfaceVectorField();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVectorField_h_10_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVectorField_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVectorField_h_13_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVectorField_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceVectorField;

// ********** End Class UNiagaraDataInterfaceVectorField *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVectorField_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
