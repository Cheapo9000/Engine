// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixMetasound/DataTypes/HarmonixMusicHandle.h"

#ifdef HARMONIXMETASOUND_HarmonixMusicHandle_generated_h
#error "HarmonixMusicHandle.generated.h already included, missing '#pragma once' in HarmonixMusicHandle.h"
#endif
#define HARMONIXMETASOUND_HarmonixMusicHandle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHarmonixMusicHandle *****************************************************
struct Z_Construct_UClass_UHarmonixMusicHandle_Statics;
HARMONIXMETASOUND_API UClass* Z_Construct_UClass_UHarmonixMusicHandle_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_HarmonixMusicHandle_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHarmonixMusicHandle(); \
	friend struct ::Z_Construct_UClass_UHarmonixMusicHandle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXMETASOUND_API UClass* ::Z_Construct_UClass_UHarmonixMusicHandle_NoRegister(); \
public: \
	DECLARE_CLASS2(UHarmonixMusicHandle, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HarmonixMetasound"), Z_Construct_UClass_UHarmonixMusicHandle_NoRegister) \
	DECLARE_SERIALIZER(UHarmonixMusicHandle) \
	virtual UObject* _getUObject() const override { return const_cast<UHarmonixMusicHandle*>(this); }


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_HarmonixMusicHandle_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HARMONIXMETASOUND_API UHarmonixMusicHandle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHarmonixMusicHandle(UHarmonixMusicHandle&&) = delete; \
	UHarmonixMusicHandle(const UHarmonixMusicHandle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HARMONIXMETASOUND_API, UHarmonixMusicHandle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHarmonixMusicHandle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHarmonixMusicHandle) \
	HARMONIXMETASOUND_API virtual ~UHarmonixMusicHandle();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_HarmonixMusicHandle_h_30_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_HarmonixMusicHandle_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_HarmonixMusicHandle_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_HarmonixMusicHandle_h_34_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHarmonixMusicHandle;

// ********** End Class UHarmonixMusicHandle *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_HarmonixMusicHandle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
