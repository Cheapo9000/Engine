// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceRenderTarget2D.h"

#ifdef NIAGARA_NiagaraDataInterfaceRenderTarget2D_generated_h
#error "NiagaraDataInterfaceRenderTarget2D.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceRenderTarget2D.h"
#endif
#define NIAGARA_NiagaraDataInterfaceRenderTarget2D_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDataInterfaceRenderTarget2D **************************************
struct Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTarget2D_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceRenderTarget2D(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceRenderTarget2D, UNiagaraDataInterfaceRWBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceRenderTarget2D) \
	virtual UObject* _getUObject() const override { return const_cast<UNiagaraDataInterfaceRenderTarget2D*>(this); }


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTarget2D_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceRenderTarget2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceRenderTarget2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceRenderTarget2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceRenderTarget2D); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceRenderTarget2D(UNiagaraDataInterfaceRenderTarget2D&&) = delete; \
	UNiagaraDataInterfaceRenderTarget2D(const UNiagaraDataInterfaceRenderTarget2D&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataInterfaceRenderTarget2D();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTarget2D_h_77_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTarget2D_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTarget2D_h_80_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTarget2D_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceRenderTarget2D;

// ********** End Class UNiagaraDataInterfaceRenderTarget2D ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTarget2D_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
