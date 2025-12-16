// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaPlayerTimeSynchronizationSource.h"

#ifdef MEDIAFRAMEWORKUTILITIES_MediaPlayerTimeSynchronizationSource_generated_h
#error "MediaPlayerTimeSynchronizationSource.generated.h already included, missing '#pragma once' in MediaPlayerTimeSynchronizationSource.h"
#endif
#define MEDIAFRAMEWORKUTILITIES_MediaPlayerTimeSynchronizationSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMediaPlayerTimeSynchronizationSource ************************************
struct Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_Statics;
MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_NoRegister();

#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaPlayerTimeSynchronizationSource_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaPlayerTimeSynchronizationSource(); \
	friend struct ::Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAFRAMEWORKUTILITIES_API UClass* ::Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaPlayerTimeSynchronizationSource, UTimeSynchronizationSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaFrameworkUtilities"), Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_NoRegister) \
	DECLARE_SERIALIZER(UMediaPlayerTimeSynchronizationSource)


#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaPlayerTimeSynchronizationSource_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaPlayerTimeSynchronizationSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaPlayerTimeSynchronizationSource(UMediaPlayerTimeSynchronizationSource&&) = delete; \
	UMediaPlayerTimeSynchronizationSource(const UMediaPlayerTimeSynchronizationSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaPlayerTimeSynchronizationSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlayerTimeSynchronizationSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlayerTimeSynchronizationSource) \
	NO_API virtual ~UMediaPlayerTimeSynchronizationSource();


#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaPlayerTimeSynchronizationSource_h_15_PROLOG
#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaPlayerTimeSynchronizationSource_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaPlayerTimeSynchronizationSource_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaPlayerTimeSynchronizationSource_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaPlayerTimeSynchronizationSource;

// ********** End Class UMediaPlayerTimeSynchronizationSource **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaPlayerTimeSynchronizationSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
