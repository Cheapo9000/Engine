// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorPaletteSettings.h"

#ifdef ACTORPALETTE_ActorPaletteSettings_generated_h
#error "ActorPaletteSettings.generated.h already included, missing '#pragma once' in ActorPaletteSettings.h"
#endif
#define ACTORPALETTE_ActorPaletteSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FActorPaletteMapEntry *********************************************
struct Z_Construct_UScriptStruct_FActorPaletteMapEntry_Statics;
#define FID_Engine_Plugins_Experimental_ActorPalette_Source_ActorPalette_Private_ActorPaletteSettings_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActorPaletteMapEntry_Statics; \
	ACTORPALETTE_API static class UScriptStruct* StaticStruct();


struct FActorPaletteMapEntry;
// ********** End ScriptStruct FActorPaletteMapEntry ***********************************************

// ********** Begin Class UActorPaletteSettings ****************************************************
struct Z_Construct_UClass_UActorPaletteSettings_Statics;
ACTORPALETTE_API UClass* Z_Construct_UClass_UActorPaletteSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_ActorPalette_Source_ActorPalette_Private_ActorPaletteSettings_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorPaletteSettings(); \
	friend struct ::Z_Construct_UClass_UActorPaletteSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORPALETTE_API UClass* ::Z_Construct_UClass_UActorPaletteSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorPaletteSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActorPalette"), Z_Construct_UClass_UActorPaletteSettings_NoRegister) \
	DECLARE_SERIALIZER(UActorPaletteSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Experimental_ActorPalette_Source_ActorPalette_Private_ActorPaletteSettings_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorPaletteSettings(UActorPaletteSettings&&) = delete; \
	UActorPaletteSettings(const UActorPaletteSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorPaletteSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorPaletteSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorPaletteSettings) \
	NO_API virtual ~UActorPaletteSettings();


#define FID_Engine_Plugins_Experimental_ActorPalette_Source_ActorPalette_Private_ActorPaletteSettings_h_28_PROLOG
#define FID_Engine_Plugins_Experimental_ActorPalette_Source_ActorPalette_Private_ActorPaletteSettings_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ActorPalette_Source_ActorPalette_Private_ActorPaletteSettings_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ActorPalette_Source_ActorPalette_Private_ActorPaletteSettings_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorPaletteSettings;

// ********** End Class UActorPaletteSettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ActorPalette_Source_ActorPalette_Private_ActorPaletteSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
