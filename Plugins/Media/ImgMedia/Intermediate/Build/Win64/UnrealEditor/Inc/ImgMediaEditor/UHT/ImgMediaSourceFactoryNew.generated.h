// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ImgMediaSourceFactoryNew.h"

#ifdef IMGMEDIAEDITOR_ImgMediaSourceFactoryNew_generated_h
#error "ImgMediaSourceFactoryNew.generated.h already included, missing '#pragma once' in ImgMediaSourceFactoryNew.h"
#endif
#define IMGMEDIAEDITOR_ImgMediaSourceFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UImgMediaSourceFactoryNew ************************************************
struct Z_Construct_UClass_UImgMediaSourceFactoryNew_Statics;
IMGMEDIAEDITOR_API UClass* Z_Construct_UClass_UImgMediaSourceFactoryNew_NoRegister();

#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEditor_Private_Factories_ImgMediaSourceFactoryNew_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUImgMediaSourceFactoryNew(); \
	friend struct ::Z_Construct_UClass_UImgMediaSourceFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IMGMEDIAEDITOR_API UClass* ::Z_Construct_UClass_UImgMediaSourceFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UImgMediaSourceFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ImgMediaEditor"), Z_Construct_UClass_UImgMediaSourceFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UImgMediaSourceFactoryNew)


#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEditor_Private_Factories_ImgMediaSourceFactoryNew_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImgMediaSourceFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImgMediaSourceFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImgMediaSourceFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImgMediaSourceFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UImgMediaSourceFactoryNew(UImgMediaSourceFactoryNew&&) = delete; \
	UImgMediaSourceFactoryNew(const UImgMediaSourceFactoryNew&) = delete; \
	NO_API virtual ~UImgMediaSourceFactoryNew();


#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEditor_Private_Factories_ImgMediaSourceFactoryNew_h_12_PROLOG
#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEditor_Private_Factories_ImgMediaSourceFactoryNew_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEditor_Private_Factories_ImgMediaSourceFactoryNew_h_16_INCLASS \
	FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEditor_Private_Factories_ImgMediaSourceFactoryNew_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UImgMediaSourceFactoryNew;

// ********** End Class UImgMediaSourceFactoryNew **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEditor_Private_Factories_ImgMediaSourceFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
