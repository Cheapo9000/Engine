// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WebMFileMediaSourceFactory.h"

#ifdef WEBMMEDIAEDITOR_WebMFileMediaSourceFactory_generated_h
#error "WebMFileMediaSourceFactory.generated.h already included, missing '#pragma once' in WebMFileMediaSourceFactory.h"
#endif
#define WEBMMEDIAEDITOR_WebMFileMediaSourceFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebMPlatFileMediaSourceFactory ******************************************
struct Z_Construct_UClass_UWebMPlatFileMediaSourceFactory_Statics;
WEBMMEDIAEDITOR_API UClass* Z_Construct_UClass_UWebMPlatFileMediaSourceFactory_NoRegister();

#define FID_Engine_Plugins_Media_WebMMedia_Source_WebMMediaEditor_Private_WebMFileMediaSourceFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUWebMPlatFileMediaSourceFactory(); \
	friend struct ::Z_Construct_UClass_UWebMPlatFileMediaSourceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBMMEDIAEDITOR_API UClass* ::Z_Construct_UClass_UWebMPlatFileMediaSourceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebMPlatFileMediaSourceFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebMMediaEditor"), Z_Construct_UClass_UWebMPlatFileMediaSourceFactory_NoRegister) \
	DECLARE_SERIALIZER(UWebMPlatFileMediaSourceFactory)


#define FID_Engine_Plugins_Media_WebMMedia_Source_WebMMediaEditor_Private_WebMFileMediaSourceFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebMPlatFileMediaSourceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebMPlatFileMediaSourceFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebMPlatFileMediaSourceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebMPlatFileMediaSourceFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebMPlatFileMediaSourceFactory(UWebMPlatFileMediaSourceFactory&&) = delete; \
	UWebMPlatFileMediaSourceFactory(const UWebMPlatFileMediaSourceFactory&) = delete; \
	NO_API virtual ~UWebMPlatFileMediaSourceFactory();


#define FID_Engine_Plugins_Media_WebMMedia_Source_WebMMediaEditor_Private_WebMFileMediaSourceFactory_h_13_PROLOG
#define FID_Engine_Plugins_Media_WebMMedia_Source_WebMMediaEditor_Private_WebMFileMediaSourceFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_WebMMedia_Source_WebMMediaEditor_Private_WebMFileMediaSourceFactory_h_17_INCLASS \
	FID_Engine_Plugins_Media_WebMMedia_Source_WebMMediaEditor_Private_WebMFileMediaSourceFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebMPlatFileMediaSourceFactory;

// ********** End Class UWebMPlatFileMediaSourceFactory ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_WebMMedia_Source_WebMMediaEditor_Private_WebMFileMediaSourceFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
