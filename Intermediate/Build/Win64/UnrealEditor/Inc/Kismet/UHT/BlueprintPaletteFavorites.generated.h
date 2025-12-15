// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintPaletteFavorites.h"

#ifdef KISMET_BlueprintPaletteFavorites_generated_h
#error "BlueprintPaletteFavorites.generated.h already included, missing '#pragma once' in BlueprintPaletteFavorites.h"
#endif
#define KISMET_BlueprintPaletteFavorites_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFavoritedBlueprintPaletteItem ************************************
struct Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_Statics;
#define FID_Engine_Source_Editor_Kismet_Classes_BlueprintPaletteFavorites_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_Statics; \
	KISMET_API static class UScriptStruct* StaticStruct();


struct FFavoritedBlueprintPaletteItem;
// ********** End ScriptStruct FFavoritedBlueprintPaletteItem **************************************

// ********** Begin Class UBlueprintPaletteFavorites ***********************************************
struct Z_Construct_UClass_UBlueprintPaletteFavorites_Statics;
KISMET_API UClass* Z_Construct_UClass_UBlueprintPaletteFavorites_NoRegister();

#define FID_Engine_Source_Editor_Kismet_Classes_BlueprintPaletteFavorites_h_108_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintPaletteFavorites(); \
	friend struct ::Z_Construct_UClass_UBlueprintPaletteFavorites_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KISMET_API UClass* ::Z_Construct_UClass_UBlueprintPaletteFavorites_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintPaletteFavorites, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Kismet"), Z_Construct_UClass_UBlueprintPaletteFavorites_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintPaletteFavorites) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_Kismet_Classes_BlueprintPaletteFavorites_h_108_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	KISMET_API UBlueprintPaletteFavorites(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintPaletteFavorites) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(KISMET_API, UBlueprintPaletteFavorites); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintPaletteFavorites); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintPaletteFavorites(UBlueprintPaletteFavorites&&) = delete; \
	UBlueprintPaletteFavorites(const UBlueprintPaletteFavorites&) = delete; \
	KISMET_API virtual ~UBlueprintPaletteFavorites();


#define FID_Engine_Source_Editor_Kismet_Classes_BlueprintPaletteFavorites_h_105_PROLOG
#define FID_Engine_Source_Editor_Kismet_Classes_BlueprintPaletteFavorites_h_108_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Kismet_Classes_BlueprintPaletteFavorites_h_108_INCLASS \
	FID_Engine_Source_Editor_Kismet_Classes_BlueprintPaletteFavorites_h_108_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintPaletteFavorites;

// ********** End Class UBlueprintPaletteFavorites *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Kismet_Classes_BlueprintPaletteFavorites_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
