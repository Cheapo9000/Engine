// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Visualizers/LiveLinkDataPreview.h"

#ifdef LIVELINK_LiveLinkDataPreview_generated_h
#error "LiveLinkDataPreview.generated.h already included, missing '#pragma once' in LiveLinkDataPreview.h"
#endif
#define LIVELINK_LiveLinkDataPreview_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALiveLinkDataPreview *****************************************************
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Visualizers_LiveLinkDataPreview_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitializeSubjects); \
	DECLARE_FUNCTION(execSetEnableLiveLinkData);


struct Z_Construct_UClass_ALiveLinkDataPreview_Statics;
LIVELINK_API UClass* Z_Construct_UClass_ALiveLinkDataPreview_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Visualizers_LiveLinkDataPreview_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALiveLinkDataPreview(); \
	friend struct ::Z_Construct_UClass_ALiveLinkDataPreview_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINK_API UClass* ::Z_Construct_UClass_ALiveLinkDataPreview_NoRegister(); \
public: \
	DECLARE_CLASS2(ALiveLinkDataPreview, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLink"), Z_Construct_UClass_ALiveLinkDataPreview_NoRegister) \
	DECLARE_SERIALIZER(ALiveLinkDataPreview)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Visualizers_LiveLinkDataPreview_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALiveLinkDataPreview(ALiveLinkDataPreview&&) = delete; \
	ALiveLinkDataPreview(const ALiveLinkDataPreview&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINK_API, ALiveLinkDataPreview); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALiveLinkDataPreview); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALiveLinkDataPreview) \
	LIVELINK_API virtual ~ALiveLinkDataPreview();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Visualizers_LiveLinkDataPreview_h_17_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Visualizers_LiveLinkDataPreview_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Visualizers_LiveLinkDataPreview_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Visualizers_LiveLinkDataPreview_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Visualizers_LiveLinkDataPreview_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALiveLinkDataPreview;

// ********** End Class ALiveLinkDataPreview *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Visualizers_LiveLinkDataPreview_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
