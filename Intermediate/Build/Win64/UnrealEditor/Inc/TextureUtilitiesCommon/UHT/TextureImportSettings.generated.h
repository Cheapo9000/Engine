// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TextureImportSettings.h"

#ifdef TEXTUREUTILITIESCOMMON_TextureImportSettings_generated_h
#error "TextureImportSettings.generated.h already included, missing '#pragma once' in TextureImportSettings.h"
#endif
#define TEXTUREUTILITIESCOMMON_TextureImportSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTextureImportSettings ***************************************************
struct Z_Construct_UClass_UTextureImportSettings_Statics;
TEXTUREUTILITIESCOMMON_API UClass* Z_Construct_UClass_UTextureImportSettings_NoRegister();

#define FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUTextureImportSettings(); \
	friend struct ::Z_Construct_UClass_UTextureImportSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREUTILITIESCOMMON_API UClass* ::Z_Construct_UClass_UTextureImportSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextureImportSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/TextureUtilitiesCommon"), Z_Construct_UClass_UTextureImportSettings_NoRegister) \
	DECLARE_SERIALIZER(UTextureImportSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREUTILITIESCOMMON_API UTextureImportSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureImportSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREUTILITIESCOMMON_API, UTextureImportSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureImportSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextureImportSettings(UTextureImportSettings&&) = delete; \
	UTextureImportSettings(const UTextureImportSettings&) = delete; \
	TEXTUREUTILITIESCOMMON_API virtual ~UTextureImportSettings();


#define FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_50_PROLOG
#define FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_53_INCLASS \
	FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextureImportSettings;

// ********** End Class UTextureImportSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h

// ********** Begin Enum ETextureImportFloatingPointFormat *****************************************
#define FOREACH_ENUM_ETEXTUREIMPORTFLOATINGPOINTFORMAT(op) \
	op(ETextureImportFloatingPointFormat::HDR_F16) \
	op(ETextureImportFloatingPointFormat::HDRCompressed_BC6) \
	op(ETextureImportFloatingPointFormat::HDR_F32_or_F16) \
	op(ETextureImportFloatingPointFormat::PreviousDefault) 

enum class ETextureImportFloatingPointFormat : uint8;
template<> struct TIsUEnumClass<ETextureImportFloatingPointFormat> { enum { Value = true }; };
template<> TEXTUREUTILITIESCOMMON_NON_ATTRIBUTED_API UEnum* StaticEnum<ETextureImportFloatingPointFormat>();
// ********** End Enum ETextureImportFloatingPointFormat *******************************************

// ********** Begin Enum ETextureImportPNGInfill ***************************************************
#define FOREACH_ENUM_ETEXTUREIMPORTPNGINFILL(op) \
	op(ETextureImportPNGInfill::Default) \
	op(ETextureImportPNGInfill::Never) \
	op(ETextureImportPNGInfill::OnlyOnBinaryTransparency) \
	op(ETextureImportPNGInfill::Always) 

enum class ETextureImportPNGInfill : uint8;
template<> struct TIsUEnumClass<ETextureImportPNGInfill> { enum { Value = true }; };
template<> TEXTUREUTILITIESCOMMON_NON_ATTRIBUTED_API UEnum* StaticEnum<ETextureImportPNGInfill>();
// ********** End Enum ETextureImportPNGInfill *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
