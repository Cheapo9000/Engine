// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceVirtualTexture.h"

#ifdef NIAGARA_NiagaraDataInterfaceVirtualTexture_generated_h
#error "NiagaraDataInterfaceVirtualTexture.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceVirtualTexture.h"
#endif
#define NIAGARA_NiagaraDataInterfaceVirtualTexture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDataInterfaceVirtualTexture **************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceVirtualTexture_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraDataInterfaceVirtualTexture, NIAGARA_API)


struct Z_Construct_UClass_UNiagaraDataInterfaceVirtualTexture_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceVirtualTexture_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceVirtualTexture_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceVirtualTexture(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceVirtualTexture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceVirtualTexture_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceVirtualTexture, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceVirtualTexture_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceVirtualTexture) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceVirtualTexture_h_18_ARCHIVESERIALIZER


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceVirtualTexture_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceVirtualTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceVirtualTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceVirtualTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceVirtualTexture); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceVirtualTexture(UNiagaraDataInterfaceVirtualTexture&&) = delete; \
	UNiagaraDataInterfaceVirtualTexture(const UNiagaraDataInterfaceVirtualTexture&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataInterfaceVirtualTexture();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceVirtualTexture_h_15_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceVirtualTexture_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceVirtualTexture_h_18_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceVirtualTexture_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceVirtualTexture;

// ********** End Class UNiagaraDataInterfaceVirtualTexture ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceVirtualTexture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
