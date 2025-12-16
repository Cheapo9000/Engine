// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/Settings/TextureShareSettings.h"

#ifdef TEXTURESHARE_TextureShareSettings_generated_h
#error "TextureShareSettings.generated.h already included, missing '#pragma once' in TextureShareSettings.h"
#endif
#define TEXTURESHARE_TextureShareSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTextureShareSettings ****************************************************
struct Z_Construct_UClass_UTextureShareSettings_Statics;
TEXTURESHARE_API UClass* Z_Construct_UClass_UTextureShareSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Private_Game_Settings_TextureShareSettings_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextureShareSettings(); \
	friend struct ::Z_Construct_UClass_UTextureShareSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTURESHARE_API UClass* ::Z_Construct_UClass_UTextureShareSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextureShareSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/TextureShare"), Z_Construct_UClass_UTextureShareSettings_NoRegister) \
	DECLARE_SERIALIZER(UTextureShareSettings)


#define FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Private_Game_Settings_TextureShareSettings_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextureShareSettings(UTextureShareSettings&&) = delete; \
	UTextureShareSettings(const UTextureShareSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextureShareSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureShareSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureShareSettings) \
	NO_API virtual ~UTextureShareSettings();


#define FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Private_Game_Settings_TextureShareSettings_h_31_PROLOG
#define FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Private_Game_Settings_TextureShareSettings_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Private_Game_Settings_TextureShareSettings_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Private_Game_Settings_TextureShareSettings_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextureShareSettings;

// ********** End Class UTextureShareSettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Private_Game_Settings_TextureShareSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
