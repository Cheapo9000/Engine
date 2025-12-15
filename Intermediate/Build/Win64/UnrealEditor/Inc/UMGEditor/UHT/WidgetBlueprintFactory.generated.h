// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WidgetBlueprintFactory.h"

#ifdef UMGEDITOR_WidgetBlueprintFactory_generated_h
#error "WidgetBlueprintFactory.generated.h already included, missing '#pragma once' in WidgetBlueprintFactory.h"
#endif
#define UMGEDITOR_WidgetBlueprintFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWidgetBlueprintFactory **************************************************
struct Z_Construct_UClass_UWidgetBlueprintFactory_Statics;
UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprintFactory_NoRegister();

#define FID_Engine_Source_Editor_UMGEditor_Classes_WidgetBlueprintFactory_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetBlueprintFactory(); \
	friend struct ::Z_Construct_UClass_UWidgetBlueprintFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMGEDITOR_API UClass* ::Z_Construct_UClass_UWidgetBlueprintFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetBlueprintFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMGEditor"), Z_Construct_UClass_UWidgetBlueprintFactory_NoRegister) \
	DECLARE_SERIALIZER(UWidgetBlueprintFactory)


#define FID_Engine_Source_Editor_UMGEditor_Classes_WidgetBlueprintFactory_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMGEDITOR_API UWidgetBlueprintFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetBlueprintFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMGEDITOR_API, UWidgetBlueprintFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetBlueprintFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetBlueprintFactory(UWidgetBlueprintFactory&&) = delete; \
	UWidgetBlueprintFactory(const UWidgetBlueprintFactory&) = delete; \
	UMGEDITOR_API virtual ~UWidgetBlueprintFactory();


#define FID_Engine_Source_Editor_UMGEditor_Classes_WidgetBlueprintFactory_h_12_PROLOG
#define FID_Engine_Source_Editor_UMGEditor_Classes_WidgetBlueprintFactory_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UMGEditor_Classes_WidgetBlueprintFactory_h_15_INCLASS \
	FID_Engine_Source_Editor_UMGEditor_Classes_WidgetBlueprintFactory_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetBlueprintFactory;

// ********** End Class UWidgetBlueprintFactory ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UMGEditor_Classes_WidgetBlueprintFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
