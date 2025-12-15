// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaSource.h"

#ifdef MEDIAASSETS_MediaSource_generated_h
#error "MediaSource.generated.h already included, missing '#pragma once' in MediaSource.h"
#endif
#define MEDIAASSETS_MediaSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMediaSource *************************************************************
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMediaOptionString); \
	DECLARE_FUNCTION(execSetMediaOptionInt64); \
	DECLARE_FUNCTION(execSetMediaOptionFloat); \
	DECLARE_FUNCTION(execSetMediaOptionBool); \
	DECLARE_FUNCTION(execValidate); \
	DECLARE_FUNCTION(execGetUrl);


struct Z_Construct_UClass_UMediaSource_Statics;
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();

#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaSource(); \
	friend struct ::Z_Construct_UClass_UMediaSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAASSETS_API UClass* ::Z_Construct_UClass_UMediaSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaSource, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MediaAssets"), Z_Construct_UClass_UMediaSource_NoRegister) \
	DECLARE_SERIALIZER(UMediaSource)


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIAASSETS_API UMediaSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaSource(UMediaSource&&) = delete; \
	UMediaSource(const UMediaSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAASSETS_API, UMediaSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaSource) \
	MEDIAASSETS_API virtual ~UMediaSource();


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_41_PROLOG
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaSource;

// ********** End Class UMediaSource ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
