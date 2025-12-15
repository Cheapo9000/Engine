// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/SlateWidgetStyleAssetFactory.h"

#ifdef UNREALED_SlateWidgetStyleAssetFactory_generated_h
#error "SlateWidgetStyleAssetFactory.generated.h already included, missing '#pragma once' in SlateWidgetStyleAssetFactory.h"
#endif
#define UNREALED_SlateWidgetStyleAssetFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USlateWidgetStyleAssetFactory ********************************************
struct Z_Construct_UClass_USlateWidgetStyleAssetFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_USlateWidgetStyleAssetFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SlateWidgetStyleAssetFactory_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSlateWidgetStyleAssetFactory(); \
	friend struct ::Z_Construct_UClass_USlateWidgetStyleAssetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_USlateWidgetStyleAssetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USlateWidgetStyleAssetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_USlateWidgetStyleAssetFactory_NoRegister) \
	DECLARE_SERIALIZER(USlateWidgetStyleAssetFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SlateWidgetStyleAssetFactory_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API USlateWidgetStyleAssetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateWidgetStyleAssetFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, USlateWidgetStyleAssetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateWidgetStyleAssetFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USlateWidgetStyleAssetFactory(USlateWidgetStyleAssetFactory&&) = delete; \
	USlateWidgetStyleAssetFactory(const USlateWidgetStyleAssetFactory&) = delete; \
	UNREALED_API virtual ~USlateWidgetStyleAssetFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SlateWidgetStyleAssetFactory_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SlateWidgetStyleAssetFactory_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SlateWidgetStyleAssetFactory_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SlateWidgetStyleAssetFactory_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USlateWidgetStyleAssetFactory;

// ********** End Class USlateWidgetStyleAssetFactory **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SlateWidgetStyleAssetFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
