// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ColorCorrectWindow.h"

#ifdef COLORCORRECTREGIONS_ColorCorrectWindow_generated_h
#error "ColorCorrectWindow.generated.h already included, missing '#pragma once' in ColorCorrectWindow.h"
#endif
#define COLORCORRECTREGIONS_ColorCorrectWindow_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AColorCorrectionWindow ***************************************************
struct Z_Construct_UClass_AColorCorrectionWindow_Statics;
COLORCORRECTREGIONS_API UClass* Z_Construct_UClass_AColorCorrectionWindow_NoRegister();

#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectWindow_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAColorCorrectionWindow(); \
	friend struct ::Z_Construct_UClass_AColorCorrectionWindow_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COLORCORRECTREGIONS_API UClass* ::Z_Construct_UClass_AColorCorrectionWindow_NoRegister(); \
public: \
	DECLARE_CLASS2(AColorCorrectionWindow, AColorCorrectRegion, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ColorCorrectRegions"), Z_Construct_UClass_AColorCorrectionWindow_NoRegister) \
	DECLARE_SERIALIZER(AColorCorrectionWindow)


#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectWindow_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AColorCorrectionWindow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AColorCorrectionWindow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AColorCorrectionWindow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AColorCorrectionWindow); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AColorCorrectionWindow(AColorCorrectionWindow&&) = delete; \
	AColorCorrectionWindow(const AColorCorrectionWindow&) = delete;


#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectWindow_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectWindow_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectWindow_h_25_INCLASS \
	FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectWindow_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AColorCorrectionWindow;

// ********** End Class AColorCorrectionWindow *****************************************************

// ********** Begin Class ADEPRECATED_ColorCorrectWindow *******************************************
struct Z_Construct_UClass_ADEPRECATED_ColorCorrectWindow_Statics;
COLORCORRECTREGIONS_API UClass* Z_Construct_UClass_ADEPRECATED_ColorCorrectWindow_NoRegister();

#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectWindow_h_57_INCLASS \
private: \
	static void StaticRegisterNativesADEPRECATED_ColorCorrectWindow(); \
	friend struct ::Z_Construct_UClass_ADEPRECATED_ColorCorrectWindow_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COLORCORRECTREGIONS_API UClass* ::Z_Construct_UClass_ADEPRECATED_ColorCorrectWindow_NoRegister(); \
public: \
	DECLARE_CLASS2(ADEPRECATED_ColorCorrectWindow, AColorCorrectionWindow, COMPILED_IN_FLAGS(0 | CLASS_Config | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/ColorCorrectRegions"), Z_Construct_UClass_ADEPRECATED_ColorCorrectWindow_NoRegister) \
	DECLARE_SERIALIZER(ADEPRECATED_ColorCorrectWindow)


#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectWindow_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADEPRECATED_ColorCorrectWindow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADEPRECATED_ColorCorrectWindow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADEPRECATED_ColorCorrectWindow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADEPRECATED_ColorCorrectWindow); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADEPRECATED_ColorCorrectWindow(ADEPRECATED_ColorCorrectWindow&&) = delete; \
	ADEPRECATED_ColorCorrectWindow(const ADEPRECATED_ColorCorrectWindow&) = delete; \
	NO_API virtual ~ADEPRECATED_ColorCorrectWindow();


#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectWindow_h_54_PROLOG
#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectWindow_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectWindow_h_57_INCLASS \
	FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectWindow_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADEPRECATED_ColorCorrectWindow;

// ********** End Class ADEPRECATED_ColorCorrectWindow *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectWindow_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
