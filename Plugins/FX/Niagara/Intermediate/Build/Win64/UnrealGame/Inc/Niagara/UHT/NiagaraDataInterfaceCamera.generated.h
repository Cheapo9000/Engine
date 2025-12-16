// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceCamera.h"

#ifdef NIAGARA_NiagaraDataInterfaceCamera_generated_h
#error "NiagaraDataInterfaceCamera.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceCamera.h"
#endif
#define NIAGARA_NiagaraDataInterfaceCamera_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDataInterfaceCamera **********************************************
struct Z_Construct_UClass_UNiagaraDataInterfaceCamera_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCamera_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCamera_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceCamera(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceCamera_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceCamera_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceCamera, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceCamera_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceCamera)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCamera_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceCamera(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceCamera); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceCamera(UNiagaraDataInterfaceCamera&&) = delete; \
	UNiagaraDataInterfaceCamera(const UNiagaraDataInterfaceCamera&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataInterfaceCamera();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCamera_h_28_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCamera_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCamera_h_31_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCamera_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceCamera;

// ********** End Class UNiagaraDataInterfaceCamera ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCamera_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
