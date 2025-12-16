// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Niagara/NiagaraDataInterfaceHairStrands.h"

#ifdef HAIRSTRANDSCORE_NiagaraDataInterfaceHairStrands_generated_h
#error "NiagaraDataInterfaceHairStrands.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceHairStrands.h"
#endif
#define HAIRSTRANDSCORE_NiagaraDataInterfaceHairStrands_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDataInterfaceHairStrands *****************************************
struct Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_Statics;
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_NoRegister();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfaceHairStrands_h_384_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceHairStrands(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIRSTRANDSCORE_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceHairStrands, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceHairStrands) \
	virtual UObject* _getUObject() const override { return const_cast<UNiagaraDataInterfaceHairStrands*>(this); }


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfaceHairStrands_h_384_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HAIRSTRANDSCORE_API UNiagaraDataInterfaceHairStrands(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceHairStrands) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HAIRSTRANDSCORE_API, UNiagaraDataInterfaceHairStrands); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceHairStrands); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceHairStrands(UNiagaraDataInterfaceHairStrands&&) = delete; \
	UNiagaraDataInterfaceHairStrands(const UNiagaraDataInterfaceHairStrands&) = delete; \
	HAIRSTRANDSCORE_API virtual ~UNiagaraDataInterfaceHairStrands();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfaceHairStrands_h_381_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfaceHairStrands_h_384_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfaceHairStrands_h_384_INCLASS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfaceHairStrands_h_384_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceHairStrands;

// ********** End Class UNiagaraDataInterfaceHairStrands *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfaceHairStrands_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
