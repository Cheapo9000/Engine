// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImgMediaSettings.h"

#ifdef IMGMEDIAFACTORY_ImgMediaSettings_generated_h
#error "ImgMediaSettings.generated.h already included, missing '#pragma once' in ImgMediaSettings.h"
#endif
#define IMGMEDIAFACTORY_ImgMediaSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UImgMediaSettings ********************************************************
struct Z_Construct_UClass_UImgMediaSettings_Statics;
IMGMEDIAFACTORY_API UClass* Z_Construct_UClass_UImgMediaSettings_NoRegister();

#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaFactory_Public_ImgMediaSettings_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImgMediaSettings(); \
	friend struct ::Z_Construct_UClass_UImgMediaSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IMGMEDIAFACTORY_API UClass* ::Z_Construct_UClass_UImgMediaSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UImgMediaSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ImgMediaFactory"), Z_Construct_UClass_UImgMediaSettings_NoRegister) \
	DECLARE_SERIALIZER(UImgMediaSettings)


#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaFactory_Public_ImgMediaSettings_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UImgMediaSettings(UImgMediaSettings&&) = delete; \
	UImgMediaSettings(const UImgMediaSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IMGMEDIAFACTORY_API, UImgMediaSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImgMediaSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UImgMediaSettings) \
	IMGMEDIAFACTORY_API virtual ~UImgMediaSettings();


#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaFactory_Public_ImgMediaSettings_h_19_PROLOG
#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaFactory_Public_ImgMediaSettings_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaFactory_Public_ImgMediaSettings_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaFactory_Public_ImgMediaSettings_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UImgMediaSettings;

// ********** End Class UImgMediaSettings **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaFactory_Public_ImgMediaSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
