// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WebBrowserTexture.h"

#ifdef WEBBROWSERTEXTURE_WebBrowserTexture_generated_h
#error "WebBrowserTexture.generated.h already included, missing '#pragma once' in WebBrowserTexture.h"
#endif
#define WEBBROWSERTEXTURE_WebBrowserTexture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebBrowserTexture *******************************************************
struct Z_Construct_UClass_UWebBrowserTexture_Statics;
WEBBROWSERTEXTURE_API UClass* Z_Construct_UClass_UWebBrowserTexture_NoRegister();

#define FID_Engine_Source_Runtime_WebBrowserTexture_Public_WebBrowserTexture_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUWebBrowserTexture(); \
	friend struct ::Z_Construct_UClass_UWebBrowserTexture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBBROWSERTEXTURE_API UClass* ::Z_Construct_UClass_UWebBrowserTexture_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebBrowserTexture, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebBrowserTexture"), Z_Construct_UClass_UWebBrowserTexture_NoRegister) \
	DECLARE_SERIALIZER(UWebBrowserTexture)


#define FID_Engine_Source_Runtime_WebBrowserTexture_Public_WebBrowserTexture_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebBrowserTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebBrowserTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebBrowserTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebBrowserTexture); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebBrowserTexture(UWebBrowserTexture&&) = delete; \
	UWebBrowserTexture(const UWebBrowserTexture&) = delete; \
	NO_API virtual ~UWebBrowserTexture();


#define FID_Engine_Source_Runtime_WebBrowserTexture_Public_WebBrowserTexture_h_23_PROLOG
#define FID_Engine_Source_Runtime_WebBrowserTexture_Public_WebBrowserTexture_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_WebBrowserTexture_Public_WebBrowserTexture_h_27_INCLASS \
	FID_Engine_Source_Runtime_WebBrowserTexture_Public_WebBrowserTexture_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebBrowserTexture;

// ********** End Class UWebBrowserTexture *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_WebBrowserTexture_Public_WebBrowserTexture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
