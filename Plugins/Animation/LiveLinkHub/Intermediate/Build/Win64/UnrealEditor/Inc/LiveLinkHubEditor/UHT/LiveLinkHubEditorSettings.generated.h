// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkHubEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINKHUBEDITOR_LiveLinkHubEditorSettings_generated_h
#error "LiveLinkHubEditorSettings.generated.h already included, missing '#pragma once' in LiveLinkHubEditorSettings.h"
#endif
#define LIVELINKHUBEDITOR_LiveLinkHubEditorSettings_generated_h

#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubEditor_Private_LiveLinkHubEditorSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkHubEditorSettings(); \
	friend struct Z_Construct_UClass_ULiveLinkHubEditorSettings_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkHubEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLinkHubEditor"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkHubEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubEditor_Private_LiveLinkHubEditorSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkHubEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULiveLinkHubEditorSettings(ULiveLinkHubEditorSettings&&); \
	ULiveLinkHubEditorSettings(const ULiveLinkHubEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkHubEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkHubEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkHubEditorSettings) \
	NO_API virtual ~ULiveLinkHubEditorSettings();


#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubEditor_Private_LiveLinkHubEditorSettings_h_12_PROLOG
#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubEditor_Private_LiveLinkHubEditorSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubEditor_Private_LiveLinkHubEditorSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubEditor_Private_LiveLinkHubEditorSettings_h_16_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINKHUBEDITOR_API UClass* StaticClass<class ULiveLinkHubEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubEditor_Private_LiveLinkHubEditorSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
