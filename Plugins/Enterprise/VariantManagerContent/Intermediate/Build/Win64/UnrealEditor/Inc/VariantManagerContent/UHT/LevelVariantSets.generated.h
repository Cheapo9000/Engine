// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelVariantSets.h"

#ifdef VARIANTMANAGERCONTENT_LevelVariantSets_generated_h
#error "LevelVariantSets.generated.h already included, missing '#pragma once' in LevelVariantSets.h"
#endif
#define VARIANTMANAGERCONTENT_LevelVariantSets_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVariantSet;

// ********** Begin Class ULevelVariantSets ********************************************************
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSets_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetVariantSetByName); \
	DECLARE_FUNCTION(execGetVariantSet); \
	DECLARE_FUNCTION(execGetNumVariantSets);


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSets_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULevelVariantSets, VARIANTMANAGERCONTENT_API)


struct Z_Construct_UClass_ULevelVariantSets_Statics;
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ULevelVariantSets_NoRegister();

#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSets_h_19_INCLASS \
private: \
	static void StaticRegisterNativesULevelVariantSets(); \
	friend struct ::Z_Construct_UClass_ULevelVariantSets_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VARIANTMANAGERCONTENT_API UClass* ::Z_Construct_UClass_ULevelVariantSets_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelVariantSets, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), Z_Construct_UClass_ULevelVariantSets_NoRegister) \
	DECLARE_SERIALIZER(ULevelVariantSets) \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSets_h_19_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSets_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VARIANTMANAGERCONTENT_API ULevelVariantSets(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelVariantSets) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VARIANTMANAGERCONTENT_API, ULevelVariantSets); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelVariantSets); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelVariantSets(ULevelVariantSets&&) = delete; \
	ULevelVariantSets(const ULevelVariantSets&) = delete; \
	VARIANTMANAGERCONTENT_API virtual ~ULevelVariantSets();


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSets_h_16_PROLOG
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSets_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSets_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSets_h_19_INCLASS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSets_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelVariantSets;

// ********** End Class ULevelVariantSets **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSets_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
