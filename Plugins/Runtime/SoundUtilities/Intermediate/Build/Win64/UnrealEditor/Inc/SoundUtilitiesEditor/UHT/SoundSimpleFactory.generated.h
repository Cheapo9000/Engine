// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundSimpleFactory.h"

#ifdef SOUNDUTILITIESEDITOR_SoundSimpleFactory_generated_h
#error "SoundSimpleFactory.generated.h already included, missing '#pragma once' in SoundSimpleFactory.h"
#endif
#define SOUNDUTILITIESEDITOR_SoundSimpleFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundSimpleFactory ******************************************************
struct Z_Construct_UClass_USoundSimpleFactory_Statics;
SOUNDUTILITIESEDITOR_API UClass* Z_Construct_UClass_USoundSimpleFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilitiesEditor_Private_SoundSimpleFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSimpleFactory(); \
	friend struct ::Z_Construct_UClass_USoundSimpleFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDUTILITIESEDITOR_API UClass* ::Z_Construct_UClass_USoundSimpleFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundSimpleFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SoundUtilitiesEditor"), Z_Construct_UClass_USoundSimpleFactory_NoRegister) \
	DECLARE_SERIALIZER(USoundSimpleFactory)


#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilitiesEditor_Private_SoundSimpleFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SOUNDUTILITIESEDITOR_API USoundSimpleFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSimpleFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOUNDUTILITIESEDITOR_API, USoundSimpleFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSimpleFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundSimpleFactory(USoundSimpleFactory&&) = delete; \
	USoundSimpleFactory(const USoundSimpleFactory&) = delete; \
	SOUNDUTILITIESEDITOR_API virtual ~USoundSimpleFactory();


#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilitiesEditor_Private_SoundSimpleFactory_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilitiesEditor_Private_SoundSimpleFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilitiesEditor_Private_SoundSimpleFactory_h_13_INCLASS \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilitiesEditor_Private_SoundSimpleFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundSimpleFactory;

// ********** End Class USoundSimpleFactory ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilitiesEditor_Private_SoundSimpleFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
