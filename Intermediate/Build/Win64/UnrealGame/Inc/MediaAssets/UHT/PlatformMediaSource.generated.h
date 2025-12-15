// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlatformMediaSource.h"

#ifdef MEDIAASSETS_PlatformMediaSource_generated_h
#error "PlatformMediaSource.generated.h already included, missing '#pragma once' in PlatformMediaSource.h"
#endif
#define MEDIAASSETS_PlatformMediaSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPlatformMediaSource *****************************************************
#define FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPlatformMediaSource, MEDIAASSETS_API)


struct Z_Construct_UClass_UPlatformMediaSource_Statics;
MEDIAASSETS_API UClass* Z_Construct_UClass_UPlatformMediaSource_NoRegister();

#define FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlatformMediaSource(); \
	friend struct ::Z_Construct_UClass_UPlatformMediaSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAASSETS_API UClass* ::Z_Construct_UClass_UPlatformMediaSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlatformMediaSource, UMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaAssets"), Z_Construct_UClass_UPlatformMediaSource_NoRegister) \
	DECLARE_SERIALIZER(UPlatformMediaSource) \
	FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIAASSETS_API UPlatformMediaSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlatformMediaSource(UPlatformMediaSource&&) = delete; \
	UPlatformMediaSource(const UPlatformMediaSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAASSETS_API, UPlatformMediaSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformMediaSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformMediaSource) \
	MEDIAASSETS_API virtual ~UPlatformMediaSource();


#define FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_28_PROLOG
#define FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlatformMediaSource;

// ********** End Class UPlatformMediaSource *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
