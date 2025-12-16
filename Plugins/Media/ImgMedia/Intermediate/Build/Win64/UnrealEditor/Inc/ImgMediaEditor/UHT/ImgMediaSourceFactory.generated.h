// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ImgMediaSourceFactory.h"

#ifdef IMGMEDIAEDITOR_ImgMediaSourceFactory_generated_h
#error "ImgMediaSourceFactory.generated.h already included, missing '#pragma once' in ImgMediaSourceFactory.h"
#endif
#define IMGMEDIAEDITOR_ImgMediaSourceFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UImgMediaSourceFactory ***************************************************
struct Z_Construct_UClass_UImgMediaSourceFactory_Statics;
IMGMEDIAEDITOR_API UClass* Z_Construct_UClass_UImgMediaSourceFactory_NoRegister();

#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEditor_Private_Factories_ImgMediaSourceFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUImgMediaSourceFactory(); \
	friend struct ::Z_Construct_UClass_UImgMediaSourceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IMGMEDIAEDITOR_API UClass* ::Z_Construct_UClass_UImgMediaSourceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UImgMediaSourceFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ImgMediaEditor"), Z_Construct_UClass_UImgMediaSourceFactory_NoRegister) \
	DECLARE_SERIALIZER(UImgMediaSourceFactory)


#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEditor_Private_Factories_ImgMediaSourceFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImgMediaSourceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImgMediaSourceFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImgMediaSourceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImgMediaSourceFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UImgMediaSourceFactory(UImgMediaSourceFactory&&) = delete; \
	UImgMediaSourceFactory(const UImgMediaSourceFactory&) = delete; \
	NO_API virtual ~UImgMediaSourceFactory();


#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEditor_Private_Factories_ImgMediaSourceFactory_h_13_PROLOG
#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEditor_Private_Factories_ImgMediaSourceFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEditor_Private_Factories_ImgMediaSourceFactory_h_17_INCLASS \
	FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEditor_Private_Factories_ImgMediaSourceFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UImgMediaSourceFactory;

// ********** End Class UImgMediaSourceFactory *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEditor_Private_Factories_ImgMediaSourceFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
