// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidFileMediaSourceFactory.h"

#ifdef ANDROIDMEDIAEDITOR_AndroidFileMediaSourceFactory_generated_h
#error "AndroidFileMediaSourceFactory.generated.h already included, missing '#pragma once' in AndroidFileMediaSourceFactory.h"
#endif
#define ANDROIDMEDIAEDITOR_AndroidFileMediaSourceFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAndroidFileMediaSourceFactory *******************************************
struct Z_Construct_UClass_UAndroidFileMediaSourceFactory_Statics;
ANDROIDMEDIAEDITOR_API UClass* Z_Construct_UClass_UAndroidFileMediaSourceFactory_NoRegister();

#define FID_Engine_Plugins_Media_AndroidMedia_Source_AndroidMediaEditor_Private_AndroidFileMediaSourceFactory_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAndroidFileMediaSourceFactory(); \
	friend struct ::Z_Construct_UClass_UAndroidFileMediaSourceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDMEDIAEDITOR_API UClass* ::Z_Construct_UClass_UAndroidFileMediaSourceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidFileMediaSourceFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidMediaEditor"), Z_Construct_UClass_UAndroidFileMediaSourceFactory_NoRegister) \
	DECLARE_SERIALIZER(UAndroidFileMediaSourceFactory)


#define FID_Engine_Plugins_Media_AndroidMedia_Source_AndroidMediaEditor_Private_AndroidFileMediaSourceFactory_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidFileMediaSourceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidFileMediaSourceFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidFileMediaSourceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidFileMediaSourceFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidFileMediaSourceFactory(UAndroidFileMediaSourceFactory&&) = delete; \
	UAndroidFileMediaSourceFactory(const UAndroidFileMediaSourceFactory&) = delete; \
	NO_API virtual ~UAndroidFileMediaSourceFactory();


#define FID_Engine_Plugins_Media_AndroidMedia_Source_AndroidMediaEditor_Private_AndroidFileMediaSourceFactory_h_11_PROLOG
#define FID_Engine_Plugins_Media_AndroidMedia_Source_AndroidMediaEditor_Private_AndroidFileMediaSourceFactory_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_AndroidMedia_Source_AndroidMediaEditor_Private_AndroidFileMediaSourceFactory_h_15_INCLASS \
	FID_Engine_Plugins_Media_AndroidMedia_Source_AndroidMediaEditor_Private_AndroidFileMediaSourceFactory_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidFileMediaSourceFactory;

// ********** End Class UAndroidFileMediaSourceFactory *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_AndroidMedia_Source_AndroidMediaEditor_Private_AndroidFileMediaSourceFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
