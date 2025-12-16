// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shared/MediaPlayerEditorMediaContext.h"

#ifdef MEDIAPLAYEREDITOR_MediaPlayerEditorMediaContext_generated_h
#error "MediaPlayerEditorMediaContext.generated.h already included, missing '#pragma once' in MediaPlayerEditorMediaContext.h"
#endif
#define MEDIAPLAYEREDITOR_MediaPlayerEditorMediaContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMediaPlayerEditorMediaContext *******************************************
struct Z_Construct_UClass_UMediaPlayerEditorMediaContext_Statics;
MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UMediaPlayerEditorMediaContext_NoRegister();

#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorMediaContext_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaPlayerEditorMediaContext(); \
	friend struct ::Z_Construct_UClass_UMediaPlayerEditorMediaContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAPLAYEREDITOR_API UClass* ::Z_Construct_UClass_UMediaPlayerEditorMediaContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaPlayerEditorMediaContext, UToolMenuContextBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaPlayerEditor"), Z_Construct_UClass_UMediaPlayerEditorMediaContext_NoRegister) \
	DECLARE_SERIALIZER(UMediaPlayerEditorMediaContext)


#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorMediaContext_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIAPLAYEREDITOR_API UMediaPlayerEditorMediaContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaPlayerEditorMediaContext(UMediaPlayerEditorMediaContext&&) = delete; \
	UMediaPlayerEditorMediaContext(const UMediaPlayerEditorMediaContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAPLAYEREDITOR_API, UMediaPlayerEditorMediaContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlayerEditorMediaContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlayerEditorMediaContext) \
	MEDIAPLAYEREDITOR_API virtual ~UMediaPlayerEditorMediaContext();


#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorMediaContext_h_14_PROLOG
#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorMediaContext_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorMediaContext_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorMediaContext_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaPlayerEditorMediaContext;

// ********** End Class UMediaPlayerEditorMediaContext *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorMediaContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
