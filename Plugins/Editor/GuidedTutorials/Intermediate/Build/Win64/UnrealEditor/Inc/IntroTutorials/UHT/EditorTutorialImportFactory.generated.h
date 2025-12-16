// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorTutorialImportFactory.h"

#ifdef INTROTUTORIALS_EditorTutorialImportFactory_generated_h
#error "EditorTutorialImportFactory.generated.h already included, missing '#pragma once' in EditorTutorialImportFactory.h"
#endif
#define INTROTUTORIALS_EditorTutorialImportFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorTutorialImportFactory *********************************************
struct Z_Construct_UClass_UEditorTutorialImportFactory_Statics;
INTROTUTORIALS_API UClass* Z_Construct_UClass_UEditorTutorialImportFactory_NoRegister();

#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialImportFactory_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUEditorTutorialImportFactory(); \
	friend struct ::Z_Construct_UClass_UEditorTutorialImportFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTROTUTORIALS_API UClass* ::Z_Construct_UClass_UEditorTutorialImportFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorTutorialImportFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IntroTutorials"), Z_Construct_UClass_UEditorTutorialImportFactory_NoRegister) \
	DECLARE_SERIALIZER(UEditorTutorialImportFactory)


#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialImportFactory_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorTutorialImportFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorTutorialImportFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorTutorialImportFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorTutorialImportFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorTutorialImportFactory(UEditorTutorialImportFactory&&) = delete; \
	UEditorTutorialImportFactory(const UEditorTutorialImportFactory&) = delete; \
	NO_API virtual ~UEditorTutorialImportFactory();


#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialImportFactory_h_13_PROLOG
#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialImportFactory_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialImportFactory_h_16_INCLASS \
	FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialImportFactory_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorTutorialImportFactory;

// ********** End Class UEditorTutorialImportFactory ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialImportFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
