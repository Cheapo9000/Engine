// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixMetasound/DataTypes/HarmonixMusicAsset.h"

#ifdef HARMONIXMETASOUND_HarmonixMusicAsset_generated_h
#error "HarmonixMusicAsset.generated.h already included, missing '#pragma once' in HarmonixMusicAsset.h"
#endif
#define HARMONIXMETASOUND_HarmonixMusicAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHarmonixMusicAsset ******************************************************
struct Z_Construct_UClass_UHarmonixMusicAsset_Statics;
HARMONIXMETASOUND_API UClass* Z_Construct_UClass_UHarmonixMusicAsset_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_HarmonixMusicAsset_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHarmonixMusicAsset(); \
	friend struct ::Z_Construct_UClass_UHarmonixMusicAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXMETASOUND_API UClass* ::Z_Construct_UClass_UHarmonixMusicAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UHarmonixMusicAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HarmonixMetasound"), Z_Construct_UClass_UHarmonixMusicAsset_NoRegister) \
	DECLARE_SERIALIZER(UHarmonixMusicAsset) \
	virtual UObject* _getUObject() const override { return const_cast<UHarmonixMusicAsset*>(this); }


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_HarmonixMusicAsset_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HARMONIXMETASOUND_API UHarmonixMusicAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHarmonixMusicAsset(UHarmonixMusicAsset&&) = delete; \
	UHarmonixMusicAsset(const UHarmonixMusicAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HARMONIXMETASOUND_API, UHarmonixMusicAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHarmonixMusicAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHarmonixMusicAsset) \
	HARMONIXMETASOUND_API virtual ~UHarmonixMusicAsset();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_HarmonixMusicAsset_h_27_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_HarmonixMusicAsset_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_HarmonixMusicAsset_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_HarmonixMusicAsset_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHarmonixMusicAsset;

// ********** End Class UHarmonixMusicAsset ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_HarmonixMusicAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
