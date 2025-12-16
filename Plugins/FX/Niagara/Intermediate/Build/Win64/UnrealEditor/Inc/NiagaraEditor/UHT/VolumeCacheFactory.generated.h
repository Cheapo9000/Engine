// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VolumeCacheFactory.h"

#ifdef NIAGARAEDITOR_VolumeCacheFactory_generated_h
#error "VolumeCacheFactory.generated.h already included, missing '#pragma once' in VolumeCacheFactory.h"
#endif
#define NIAGARAEDITOR_VolumeCacheFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVolumeCacheFactory ******************************************************
struct Z_Construct_UClass_UVolumeCacheFactory_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UVolumeCacheFactory_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_VolumeCacheFactory_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUVolumeCacheFactory(); \
	friend struct ::Z_Construct_UClass_UVolumeCacheFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UVolumeCacheFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UVolumeCacheFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UVolumeCacheFactory_NoRegister) \
	DECLARE_SERIALIZER(UVolumeCacheFactory)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_VolumeCacheFactory_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UVolumeCacheFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVolumeCacheFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UVolumeCacheFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVolumeCacheFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVolumeCacheFactory(UVolumeCacheFactory&&) = delete; \
	UVolumeCacheFactory(const UVolumeCacheFactory&) = delete; \
	NIAGARAEDITOR_API virtual ~UVolumeCacheFactory();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_VolumeCacheFactory_h_13_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_VolumeCacheFactory_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_VolumeCacheFactory_h_16_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_VolumeCacheFactory_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVolumeCacheFactory;

// ********** End Class UVolumeCacheFactory ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_VolumeCacheFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
