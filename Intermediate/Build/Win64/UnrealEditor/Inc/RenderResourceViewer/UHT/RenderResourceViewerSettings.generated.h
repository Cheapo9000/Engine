// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenderResourceViewerSettings.h"

#ifdef RENDERRESOURCEVIEWER_RenderResourceViewerSettings_generated_h
#error "RenderResourceViewerSettings.generated.h already included, missing '#pragma once' in RenderResourceViewerSettings.h"
#endif
#define RENDERRESOURCEVIEWER_RenderResourceViewerSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRenderResourceViewerTreemapFilter ********************************
struct Z_Construct_UScriptStruct_FRenderResourceViewerTreemapFilter_Statics;
#define FID_Engine_Source_Editor_RenderResourceViewer_Public_RenderResourceViewerSettings_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRenderResourceViewerTreemapFilter_Statics; \
	RENDERRESOURCEVIEWER_API static class UScriptStruct* StaticStruct();


struct FRenderResourceViewerTreemapFilter;
// ********** End ScriptStruct FRenderResourceViewerTreemapFilter **********************************

// ********** Begin Class URenderResourceViewerSettings ********************************************
struct Z_Construct_UClass_URenderResourceViewerSettings_Statics;
RENDERRESOURCEVIEWER_API UClass* Z_Construct_UClass_URenderResourceViewerSettings_NoRegister();

#define FID_Engine_Source_Editor_RenderResourceViewer_Public_RenderResourceViewerSettings_h_24_INCLASS \
private: \
	static void StaticRegisterNativesURenderResourceViewerSettings(); \
	friend struct ::Z_Construct_UClass_URenderResourceViewerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RENDERRESOURCEVIEWER_API UClass* ::Z_Construct_UClass_URenderResourceViewerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(URenderResourceViewerSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/RenderResourceViewer"), Z_Construct_UClass_URenderResourceViewerSettings_NoRegister) \
	DECLARE_SERIALIZER(URenderResourceViewerSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_RenderResourceViewer_Public_RenderResourceViewerSettings_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RENDERRESOURCEVIEWER_API URenderResourceViewerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URenderResourceViewerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RENDERRESOURCEVIEWER_API, URenderResourceViewerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderResourceViewerSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URenderResourceViewerSettings(URenderResourceViewerSettings&&) = delete; \
	URenderResourceViewerSettings(const URenderResourceViewerSettings&) = delete; \
	RENDERRESOURCEVIEWER_API virtual ~URenderResourceViewerSettings();


#define FID_Engine_Source_Editor_RenderResourceViewer_Public_RenderResourceViewerSettings_h_21_PROLOG
#define FID_Engine_Source_Editor_RenderResourceViewer_Public_RenderResourceViewerSettings_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_RenderResourceViewer_Public_RenderResourceViewerSettings_h_24_INCLASS \
	FID_Engine_Source_Editor_RenderResourceViewer_Public_RenderResourceViewerSettings_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URenderResourceViewerSettings;

// ********** End Class URenderResourceViewerSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_RenderResourceViewer_Public_RenderResourceViewerSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
