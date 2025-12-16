// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shared/MediaPlayerEditorSettings.h"

#ifdef MEDIAPLAYEREDITOR_MediaPlayerEditorSettings_generated_h
#error "MediaPlayerEditorSettings.generated.h already included, missing '#pragma once' in MediaPlayerEditorSettings.h"
#endif
#define MEDIAPLAYEREDITOR_MediaPlayerEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMediaPlayerEditorSettings ***********************************************
struct Z_Construct_UClass_UMediaPlayerEditorSettings_Statics;
MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UMediaPlayerEditorSettings_NoRegister();

#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUMediaPlayerEditorSettings(); \
	friend struct ::Z_Construct_UClass_UMediaPlayerEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAPLAYEREDITOR_API UClass* ::Z_Construct_UClass_UMediaPlayerEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaPlayerEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MediaPlayerEditor"), Z_Construct_UClass_UMediaPlayerEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UMediaPlayerEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaPlayerEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlayerEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaPlayerEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlayerEditorSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaPlayerEditorSettings(UMediaPlayerEditorSettings&&) = delete; \
	UMediaPlayerEditorSettings(const UMediaPlayerEditorSettings&) = delete; \
	NO_API virtual ~UMediaPlayerEditorSettings();


#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_26_PROLOG
#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_30_INCLASS \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaPlayerEditorSettings;

// ********** End Class UMediaPlayerEditorSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h

// ********** Begin Enum EMediaPlayerEditorScale ***************************************************
#define FOREACH_ENUM_EMEDIAPLAYEREDITORSCALE(op) \
	op(EMediaPlayerEditorScale::Fill) \
	op(EMediaPlayerEditorScale::Fit) \
	op(EMediaPlayerEditorScale::Original) 

enum class EMediaPlayerEditorScale : uint8;
template<> struct TIsUEnumClass<EMediaPlayerEditorScale> { enum { Value = true }; };
template<> MEDIAPLAYEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaPlayerEditorScale>();
// ********** End Enum EMediaPlayerEditorScale *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
