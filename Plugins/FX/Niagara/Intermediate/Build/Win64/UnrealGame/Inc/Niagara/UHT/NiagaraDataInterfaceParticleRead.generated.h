// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceParticleRead.h"

#ifdef NIAGARA_NiagaraDataInterfaceParticleRead_generated_h
#error "NiagaraDataInterfaceParticleRead.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceParticleRead.h"
#endif
#define NIAGARA_NiagaraDataInterfaceParticleRead_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDataInterfaceParticleRead ****************************************
struct Z_Construct_UClass_UNiagaraDataInterfaceParticleRead_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceParticleRead_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceParticleRead_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceParticleRead(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceParticleRead_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceParticleRead_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceParticleRead, UNiagaraDataInterfaceRWBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceParticleRead_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceParticleRead)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceParticleRead_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceParticleRead(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceParticleRead) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceParticleRead); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceParticleRead); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceParticleRead(UNiagaraDataInterfaceParticleRead&&) = delete; \
	UNiagaraDataInterfaceParticleRead(const UNiagaraDataInterfaceParticleRead&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataInterfaceParticleRead();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceParticleRead_h_11_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceParticleRead_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceParticleRead_h_14_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceParticleRead_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceParticleRead;

// ********** End Class UNiagaraDataInterfaceParticleRead ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceParticleRead_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
