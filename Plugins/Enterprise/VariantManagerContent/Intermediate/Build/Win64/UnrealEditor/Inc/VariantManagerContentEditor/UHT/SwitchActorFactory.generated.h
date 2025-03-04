// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SwitchActorFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VARIANTMANAGERCONTENTEDITOR_SwitchActorFactory_generated_h
#error "SwitchActorFactory.generated.h already included, missing '#pragma once' in SwitchActorFactory.h"
#endif
#define VARIANTMANAGERCONTENTEDITOR_SwitchActorFactory_generated_h

#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_SwitchActorFactory_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSwitchActorFactory(); \
	friend struct Z_Construct_UClass_USwitchActorFactory_Statics; \
public: \
	DECLARE_CLASS(USwitchActorFactory, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/VariantManagerContentEditor"), VARIANTMANAGERCONTENTEDITOR_API) \
	DECLARE_SERIALIZER(USwitchActorFactory)


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_SwitchActorFactory_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VARIANTMANAGERCONTENTEDITOR_API USwitchActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USwitchActorFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VARIANTMANAGERCONTENTEDITOR_API, USwitchActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USwitchActorFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USwitchActorFactory(USwitchActorFactory&&); \
	USwitchActorFactory(const USwitchActorFactory&); \
public: \
	VARIANTMANAGERCONTENTEDITOR_API virtual ~USwitchActorFactory();


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_SwitchActorFactory_h_12_PROLOG
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_SwitchActorFactory_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_SwitchActorFactory_h_15_INCLASS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_SwitchActorFactory_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VARIANTMANAGERCONTENTEDITOR_API UClass* StaticClass<class USwitchActorFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_SwitchActorFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
