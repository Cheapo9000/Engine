// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ProxyMediaSourceFactoryNew.h"

#ifdef MEDIAFRAMEWORKUTILITIESEDITOR_ProxyMediaSourceFactoryNew_generated_h
#error "ProxyMediaSourceFactoryNew.generated.h already included, missing '#pragma once' in ProxyMediaSourceFactoryNew.h"
#endif
#define MEDIAFRAMEWORKUTILITIESEDITOR_ProxyMediaSourceFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UProxyMediaSourceFactoryNew **********************************************
struct Z_Construct_UClass_UProxyMediaSourceFactoryNew_Statics;
MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* Z_Construct_UClass_UProxyMediaSourceFactoryNew_NoRegister();

#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Factories_ProxyMediaSourceFactoryNew_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUProxyMediaSourceFactoryNew(); \
	friend struct ::Z_Construct_UClass_UProxyMediaSourceFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* ::Z_Construct_UClass_UProxyMediaSourceFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UProxyMediaSourceFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaFrameworkUtilitiesEditor"), Z_Construct_UClass_UProxyMediaSourceFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UProxyMediaSourceFactoryNew)


#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Factories_ProxyMediaSourceFactoryNew_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProxyMediaSourceFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProxyMediaSourceFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProxyMediaSourceFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProxyMediaSourceFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProxyMediaSourceFactoryNew(UProxyMediaSourceFactoryNew&&) = delete; \
	UProxyMediaSourceFactoryNew(const UProxyMediaSourceFactoryNew&) = delete; \
	NO_API virtual ~UProxyMediaSourceFactoryNew();


#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Factories_ProxyMediaSourceFactoryNew_h_11_PROLOG
#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Factories_ProxyMediaSourceFactoryNew_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Factories_ProxyMediaSourceFactoryNew_h_15_INCLASS \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Factories_ProxyMediaSourceFactoryNew_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProxyMediaSourceFactoryNew;

// ********** End Class UProxyMediaSourceFactoryNew ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Factories_ProxyMediaSourceFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
