// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceOcclusion.h"

#ifdef NIAGARA_NiagaraDataInterfaceOcclusion_generated_h
#error "NiagaraDataInterfaceOcclusion.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceOcclusion.h"
#endif
#define NIAGARA_NiagaraDataInterfaceOcclusion_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDataInterfaceOcclusion *******************************************
struct Z_Construct_UClass_UNiagaraDataInterfaceOcclusion_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceOcclusion_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceOcclusion_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceOcclusion(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceOcclusion_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceOcclusion_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceOcclusion, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceOcclusion_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceOcclusion)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceOcclusion_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceOcclusion(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceOcclusion) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceOcclusion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceOcclusion); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceOcclusion(UNiagaraDataInterfaceOcclusion&&) = delete; \
	UNiagaraDataInterfaceOcclusion(const UNiagaraDataInterfaceOcclusion&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataInterfaceOcclusion();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceOcclusion_h_9_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceOcclusion_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceOcclusion_h_12_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceOcclusion_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceOcclusion;

// ********** End Class UNiagaraDataInterfaceOcclusion *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceOcclusion_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
