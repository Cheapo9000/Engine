// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaAssets/ProxyMediaSource.h"

#ifdef MEDIAFRAMEWORKUTILITIES_ProxyMediaSource_generated_h
#error "ProxyMediaSource.generated.h already included, missing '#pragma once' in ProxyMediaSource.h"
#endif
#define MEDIAFRAMEWORKUTILITIES_ProxyMediaSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UProxyMediaSource ********************************************************
#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaSource_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsProxyValid);


struct Z_Construct_UClass_UProxyMediaSource_Statics;
MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UProxyMediaSource_NoRegister();

#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaSource_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProxyMediaSource(); \
	friend struct ::Z_Construct_UClass_UProxyMediaSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAFRAMEWORKUTILITIES_API UClass* ::Z_Construct_UClass_UProxyMediaSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UProxyMediaSource, UMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaFrameworkUtilities"), Z_Construct_UClass_UProxyMediaSource_NoRegister) \
	DECLARE_SERIALIZER(UProxyMediaSource)


#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaSource_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProxyMediaSource(UProxyMediaSource&&) = delete; \
	UProxyMediaSource(const UProxyMediaSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProxyMediaSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProxyMediaSource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UProxyMediaSource) \
	NO_API virtual ~UProxyMediaSource();


#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaSource_h_13_PROLOG
#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaSource_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaSource_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaSource_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaSource_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProxyMediaSource;

// ********** End Class UProxyMediaSource **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
