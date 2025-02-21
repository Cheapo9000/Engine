// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINKEDITOR_LiveLinkEditorSettings_generated_h
#error "LiveLinkEditorSettings.generated.h already included, missing '#pragma once' in LiveLinkEditorSettings.h"
#endif
#define LIVELINKEDITOR_LiveLinkEditorSettings_generated_h

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Public_LiveLinkEditorSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkEditorSettings(); \
	friend struct Z_Construct_UClass_ULiveLinkEditorSettings_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLinkEditor"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Public_LiveLinkEditorSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULiveLinkEditorSettings(ULiveLinkEditorSettings&&); \
	ULiveLinkEditorSettings(const ULiveLinkEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkEditorSettings) \
	NO_API virtual ~ULiveLinkEditorSettings();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Public_LiveLinkEditorSettings_h_12_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Public_LiveLinkEditorSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Public_LiveLinkEditorSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Public_LiveLinkEditorSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINKEDITOR_API UClass* StaticClass<class ULiveLinkEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Public_LiveLinkEditorSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
