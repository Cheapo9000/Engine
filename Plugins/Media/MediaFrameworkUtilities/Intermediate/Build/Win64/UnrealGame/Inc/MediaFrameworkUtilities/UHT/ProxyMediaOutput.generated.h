// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaAssets/ProxyMediaOutput.h"

#ifdef MEDIAFRAMEWORKUTILITIES_ProxyMediaOutput_generated_h
#error "ProxyMediaOutput.generated.h already included, missing '#pragma once' in ProxyMediaOutput.h"
#endif
#define MEDIAFRAMEWORKUTILITIES_ProxyMediaOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UProxyMediaOutput ********************************************************
#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaOutput_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsProxyValid);


struct Z_Construct_UClass_UProxyMediaOutput_Statics;
MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UProxyMediaOutput_NoRegister();

#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaOutput_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProxyMediaOutput(); \
	friend struct ::Z_Construct_UClass_UProxyMediaOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAFRAMEWORKUTILITIES_API UClass* ::Z_Construct_UClass_UProxyMediaOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UProxyMediaOutput, UMediaOutput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaFrameworkUtilities"), Z_Construct_UClass_UProxyMediaOutput_NoRegister) \
	DECLARE_SERIALIZER(UProxyMediaOutput)


#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaOutput_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProxyMediaOutput(UProxyMediaOutput&&) = delete; \
	UProxyMediaOutput(const UProxyMediaOutput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProxyMediaOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProxyMediaOutput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UProxyMediaOutput) \
	NO_API virtual ~UProxyMediaOutput();


#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaOutput_h_13_PROLOG
#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaOutput_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaOutput_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaOutput_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaOutput_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProxyMediaOutput;

// ********** End Class UProxyMediaOutput **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaOutput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
