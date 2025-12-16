// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorTutorialFactory.h"

#ifdef INTROTUTORIALS_EditorTutorialFactory_generated_h
#error "EditorTutorialFactory.generated.h already included, missing '#pragma once' in EditorTutorialFactory.h"
#endif
#define INTROTUTORIALS_EditorTutorialFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorTutorialFactory ***************************************************
struct Z_Construct_UClass_UEditorTutorialFactory_Statics;
INTROTUTORIALS_API UClass* Z_Construct_UClass_UEditorTutorialFactory_NoRegister();

#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUEditorTutorialFactory(); \
	friend struct ::Z_Construct_UClass_UEditorTutorialFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTROTUTORIALS_API UClass* ::Z_Construct_UClass_UEditorTutorialFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorTutorialFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IntroTutorials"), Z_Construct_UClass_UEditorTutorialFactory_NoRegister) \
	DECLARE_SERIALIZER(UEditorTutorialFactory)


#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorTutorialFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorTutorialFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorTutorialFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorTutorialFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorTutorialFactory(UEditorTutorialFactory&&) = delete; \
	UEditorTutorialFactory(const UEditorTutorialFactory&) = delete; \
	NO_API virtual ~UEditorTutorialFactory();


#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialFactory_h_10_PROLOG
#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialFactory_h_13_INCLASS \
	FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorTutorialFactory;

// ********** End Class UEditorTutorialFactory *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
