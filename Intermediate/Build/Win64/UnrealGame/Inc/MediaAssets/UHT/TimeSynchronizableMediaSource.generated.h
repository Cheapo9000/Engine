// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TimeSynchronizableMediaSource.h"

#ifdef MEDIAASSETS_TimeSynchronizableMediaSource_generated_h
#error "TimeSynchronizableMediaSource.generated.h already included, missing '#pragma once' in TimeSynchronizableMediaSource.h"
#endif
#define MEDIAASSETS_TimeSynchronizableMediaSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTimeSynchronizableMediaSource *******************************************
struct Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics;
MEDIAASSETS_API UClass* Z_Construct_UClass_UTimeSynchronizableMediaSource_NoRegister();

#define FID_Engine_Source_Runtime_MediaAssets_Public_TimeSynchronizableMediaSource_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimeSynchronizableMediaSource(); \
	friend struct ::Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAASSETS_API UClass* ::Z_Construct_UClass_UTimeSynchronizableMediaSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UTimeSynchronizableMediaSource, UBaseMediaSource, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MediaAssets"), Z_Construct_UClass_UTimeSynchronizableMediaSource_NoRegister) \
	DECLARE_SERIALIZER(UTimeSynchronizableMediaSource)


#define FID_Engine_Source_Runtime_MediaAssets_Public_TimeSynchronizableMediaSource_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTimeSynchronizableMediaSource(UTimeSynchronizableMediaSource&&) = delete; \
	UTimeSynchronizableMediaSource(const UTimeSynchronizableMediaSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAASSETS_API, UTimeSynchronizableMediaSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeSynchronizableMediaSource); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UTimeSynchronizableMediaSource) \
	MEDIAASSETS_API virtual ~UTimeSynchronizableMediaSource();


#define FID_Engine_Source_Runtime_MediaAssets_Public_TimeSynchronizableMediaSource_h_29_PROLOG
#define FID_Engine_Source_Runtime_MediaAssets_Public_TimeSynchronizableMediaSource_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MediaAssets_Public_TimeSynchronizableMediaSource_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_TimeSynchronizableMediaSource_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTimeSynchronizableMediaSource;

// ********** End Class UTimeSynchronizableMediaSource *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MediaAssets_Public_TimeSynchronizableMediaSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
