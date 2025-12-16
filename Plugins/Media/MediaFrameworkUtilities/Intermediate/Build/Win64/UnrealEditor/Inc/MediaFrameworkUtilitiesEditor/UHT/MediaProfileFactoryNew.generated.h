// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/MediaProfileFactoryNew.h"

#ifdef MEDIAFRAMEWORKUTILITIESEDITOR_MediaProfileFactoryNew_generated_h
#error "MediaProfileFactoryNew.generated.h already included, missing '#pragma once' in MediaProfileFactoryNew.h"
#endif
#define MEDIAFRAMEWORKUTILITIESEDITOR_MediaProfileFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMediaProfileFactoryNew **************************************************
struct Z_Construct_UClass_UMediaProfileFactoryNew_Statics;
MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* Z_Construct_UClass_UMediaProfileFactoryNew_NoRegister();

#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Factories_MediaProfileFactoryNew_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMediaProfileFactoryNew(); \
	friend struct ::Z_Construct_UClass_UMediaProfileFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* ::Z_Construct_UClass_UMediaProfileFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaProfileFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaFrameworkUtilitiesEditor"), Z_Construct_UClass_UMediaProfileFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UMediaProfileFactoryNew)


#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Factories_MediaProfileFactoryNew_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaProfileFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaProfileFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaProfileFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaProfileFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaProfileFactoryNew(UMediaProfileFactoryNew&&) = delete; \
	UMediaProfileFactoryNew(const UMediaProfileFactoryNew&) = delete; \
	NO_API virtual ~UMediaProfileFactoryNew();


#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Factories_MediaProfileFactoryNew_h_11_PROLOG
#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Factories_MediaProfileFactoryNew_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Factories_MediaProfileFactoryNew_h_15_INCLASS \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Factories_MediaProfileFactoryNew_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaProfileFactoryNew;

// ********** End Class UMediaProfileFactoryNew ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Factories_MediaProfileFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
