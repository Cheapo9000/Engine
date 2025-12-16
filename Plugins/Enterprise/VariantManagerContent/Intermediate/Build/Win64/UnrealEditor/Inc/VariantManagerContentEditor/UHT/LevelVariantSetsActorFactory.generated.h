// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelVariantSetsActorFactory.h"

#ifdef VARIANTMANAGERCONTENTEDITOR_LevelVariantSetsActorFactory_generated_h
#error "LevelVariantSetsActorFactory.generated.h already included, missing '#pragma once' in LevelVariantSetsActorFactory.h"
#endif
#define VARIANTMANAGERCONTENTEDITOR_LevelVariantSetsActorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULevelVariantSetsActorFactory ********************************************
struct Z_Construct_UClass_ULevelVariantSetsActorFactory_Statics;
VARIANTMANAGERCONTENTEDITOR_API UClass* Z_Construct_UClass_ULevelVariantSetsActorFactory_NoRegister();

#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_LevelVariantSetsActorFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesULevelVariantSetsActorFactory(); \
	friend struct ::Z_Construct_UClass_ULevelVariantSetsActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VARIANTMANAGERCONTENTEDITOR_API UClass* ::Z_Construct_UClass_ULevelVariantSetsActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelVariantSetsActorFactory, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/VariantManagerContentEditor"), Z_Construct_UClass_ULevelVariantSetsActorFactory_NoRegister) \
	DECLARE_SERIALIZER(ULevelVariantSetsActorFactory)


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_LevelVariantSetsActorFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelVariantSetsActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelVariantSetsActorFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelVariantSetsActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelVariantSetsActorFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelVariantSetsActorFactory(ULevelVariantSetsActorFactory&&) = delete; \
	ULevelVariantSetsActorFactory(const ULevelVariantSetsActorFactory&) = delete; \
	NO_API virtual ~ULevelVariantSetsActorFactory();


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_LevelVariantSetsActorFactory_h_14_PROLOG
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_LevelVariantSetsActorFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_LevelVariantSetsActorFactory_h_17_INCLASS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_LevelVariantSetsActorFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelVariantSetsActorFactory;

// ********** End Class ULevelVariantSetsActorFactory **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_LevelVariantSetsActorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
