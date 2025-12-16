// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundSimple.h"

#ifdef SOUNDUTILITIES_SoundSimple_generated_h
#error "SoundSimple.generated.h already included, missing '#pragma once' in SoundSimple.h"
#endif
#define SOUNDUTILITIES_SoundSimple_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSoundVariation ***************************************************
struct Z_Construct_UScriptStruct_FSoundVariation_Statics;
#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundVariation_Statics; \
	SOUNDUTILITIES_API static class UScriptStruct* StaticStruct();


struct FSoundVariation;
// ********** End ScriptStruct FSoundVariation *****************************************************

// ********** Begin Class USoundSimple *************************************************************
#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_47_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundSimple, SOUNDUTILITIES_API)


struct Z_Construct_UClass_USoundSimple_Statics;
SOUNDUTILITIES_API UClass* Z_Construct_UClass_USoundSimple_NoRegister();

#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundSimple(); \
	friend struct ::Z_Construct_UClass_USoundSimple_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDUTILITIES_API UClass* ::Z_Construct_UClass_USoundSimple_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundSimple, USoundBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SoundUtilities"), Z_Construct_UClass_USoundSimple_NoRegister) \
	DECLARE_SERIALIZER(USoundSimple) \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_47_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SOUNDUTILITIES_API USoundSimple(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundSimple(USoundSimple&&) = delete; \
	USoundSimple(const USoundSimple&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOUNDUTILITIES_API, USoundSimple); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSimple); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSimple) \
	SOUNDUTILITIES_API virtual ~USoundSimple();


#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_44_PROLOG
#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundSimple;

// ********** End Class USoundSimple ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
