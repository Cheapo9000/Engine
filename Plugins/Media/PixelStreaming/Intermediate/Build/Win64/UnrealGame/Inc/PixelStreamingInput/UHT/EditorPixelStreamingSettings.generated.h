// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorPixelStreamingSettings.h"

#ifdef PIXELSTREAMINGINPUT_EditorPixelStreamingSettings_generated_h
#error "EditorPixelStreamingSettings.generated.h already included, missing '#pragma once' in EditorPixelStreamingSettings.h"
#endif
#define PIXELSTREAMINGINPUT_EditorPixelStreamingSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPixelStreamingSettings **************************************************
struct Z_Construct_UClass_UPixelStreamingSettings_Statics;
PIXELSTREAMINGINPUT_API UClass* Z_Construct_UClass_UPixelStreamingSettings_NoRegister();

#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingInput_Public_EditorPixelStreamingSettings_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUPixelStreamingSettings(); \
	friend struct ::Z_Construct_UClass_UPixelStreamingSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMINGINPUT_API UClass* ::Z_Construct_UClass_UPixelStreamingSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreamingSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/PixelStreamingInput"), Z_Construct_UClass_UPixelStreamingSettings_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreamingSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("PixelStreaming");} \



#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingInput_Public_EditorPixelStreamingSettings_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPixelStreamingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreamingSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelStreamingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreamingSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreamingSettings(UPixelStreamingSettings&&) = delete; \
	UPixelStreamingSettings(const UPixelStreamingSettings&) = delete; \
	NO_API virtual ~UPixelStreamingSettings();


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingInput_Public_EditorPixelStreamingSettings_h_11_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingInput_Public_EditorPixelStreamingSettings_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingInput_Public_EditorPixelStreamingSettings_h_14_INCLASS \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingInput_Public_EditorPixelStreamingSettings_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreamingSettings;

// ********** End Class UPixelStreamingSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingInput_Public_EditorPixelStreamingSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
