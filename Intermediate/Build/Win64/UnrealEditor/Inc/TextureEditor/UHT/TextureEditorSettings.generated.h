// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TextureEditorSettings.h"

#ifdef TEXTUREEDITOR_TextureEditorSettings_generated_h
#error "TextureEditorSettings.generated.h already included, missing '#pragma once' in TextureEditorSettings.h"
#endif
#define TEXTUREEDITOR_TextureEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTextureEditorSettings ***************************************************
struct Z_Construct_UClass_UTextureEditorSettings_Statics;
TEXTUREEDITOR_API UClass* Z_Construct_UClass_UTextureEditorSettings_NoRegister();

#define FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUTextureEditorSettings(); \
	friend struct ::Z_Construct_UClass_UTextureEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREEDITOR_API UClass* ::Z_Construct_UClass_UTextureEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextureEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TextureEditor"), Z_Construct_UClass_UTextureEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UTextureEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREEDITOR_API UTextureEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREEDITOR_API, UTextureEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureEditorSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextureEditorSettings(UTextureEditorSettings&&) = delete; \
	UTextureEditorSettings(const UTextureEditorSettings&) = delete; \
	TEXTUREEDITOR_API virtual ~UTextureEditorSettings();


#define FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_55_PROLOG
#define FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_59_INCLASS \
	FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextureEditorSettings;

// ********** End Class UTextureEditorSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h

// ********** Begin Enum ETextureEditorBackgrounds *************************************************
#define FOREACH_ENUM_ETEXTUREEDITORBACKGROUNDS(op) \
	op(TextureEditorBackground_SolidColor) \
	op(TextureEditorBackground_Checkered) \
	op(TextureEditorBackground_CheckeredFill) 

enum ETextureEditorBackgrounds : int;
template<> TEXTUREEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETextureEditorBackgrounds>();
// ********** End Enum ETextureEditorBackgrounds ***************************************************

// ********** Begin Enum ETextureEditorSampling ****************************************************
#define FOREACH_ENUM_ETEXTUREEDITORSAMPLING(op) \
	op(TextureEditorSampling_Default) \
	op(TextureEditorSampling_Point) 

enum ETextureEditorSampling : int;
template<> TEXTUREEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETextureEditorSampling>();
// ********** End Enum ETextureEditorSampling ******************************************************

// ********** Begin Enum ETextureEditorVolumeViewMode **********************************************
#define FOREACH_ENUM_ETEXTUREEDITORVOLUMEVIEWMODE(op) \
	op(TextureEditorVolumeViewMode_DepthSlices) \
	op(TextureEditorVolumeViewMode_VolumeTrace) 

enum ETextureEditorVolumeViewMode : int;
template<> TEXTUREEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETextureEditorVolumeViewMode>();
// ********** End Enum ETextureEditorVolumeViewMode ************************************************

// ********** Begin Enum ETextureEditorCubemapViewMode *********************************************
#define FOREACH_ENUM_ETEXTUREEDITORCUBEMAPVIEWMODE(op) \
	op(TextureEditorCubemapViewMode_2DView) \
	op(TextureEditorCubemapViewMode_3DView) 

enum ETextureEditorCubemapViewMode : int;
template<> TEXTUREEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETextureEditorCubemapViewMode>();
// ********** End Enum ETextureEditorCubemapViewMode ***********************************************

// ********** Begin Enum ETextureEditorZoomMode ****************************************************
#define FOREACH_ENUM_ETEXTUREEDITORZOOMMODE(op) \
	op(ETextureEditorZoomMode::Custom) \
	op(ETextureEditorZoomMode::Fit) \
	op(ETextureEditorZoomMode::Fill) 

enum class ETextureEditorZoomMode : uint8;
template<> struct TIsUEnumClass<ETextureEditorZoomMode> { enum { Value = true }; };
template<> TEXTUREEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETextureEditorZoomMode>();
// ********** End Enum ETextureEditorZoomMode ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
