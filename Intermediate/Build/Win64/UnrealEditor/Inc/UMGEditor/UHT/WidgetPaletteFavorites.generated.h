// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WidgetPaletteFavorites.h"

#ifdef UMGEDITOR_WidgetPaletteFavorites_generated_h
#error "WidgetPaletteFavorites.generated.h already included, missing '#pragma once' in WidgetPaletteFavorites.h"
#endif
#define UMGEDITOR_WidgetPaletteFavorites_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWidgetPaletteFavorites **************************************************
struct Z_Construct_UClass_UWidgetPaletteFavorites_Statics;
UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetPaletteFavorites_NoRegister();

#define FID_Engine_Source_Editor_UMGEditor_Classes_WidgetPaletteFavorites_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetPaletteFavorites(); \
	friend struct ::Z_Construct_UClass_UWidgetPaletteFavorites_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMGEDITOR_API UClass* ::Z_Construct_UClass_UWidgetPaletteFavorites_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetPaletteFavorites, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMGEditor"), Z_Construct_UClass_UWidgetPaletteFavorites_NoRegister) \
	DECLARE_SERIALIZER(UWidgetPaletteFavorites) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UMGEditor_Classes_WidgetPaletteFavorites_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMGEDITOR_API UWidgetPaletteFavorites(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetPaletteFavorites) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMGEDITOR_API, UWidgetPaletteFavorites); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetPaletteFavorites); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetPaletteFavorites(UWidgetPaletteFavorites&&) = delete; \
	UWidgetPaletteFavorites(const UWidgetPaletteFavorites&) = delete; \
	UMGEDITOR_API virtual ~UWidgetPaletteFavorites();


#define FID_Engine_Source_Editor_UMGEditor_Classes_WidgetPaletteFavorites_h_15_PROLOG
#define FID_Engine_Source_Editor_UMGEditor_Classes_WidgetPaletteFavorites_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UMGEditor_Classes_WidgetPaletteFavorites_h_18_INCLASS \
	FID_Engine_Source_Editor_UMGEditor_Classes_WidgetPaletteFavorites_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetPaletteFavorites;

// ********** End Class UWidgetPaletteFavorites ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UMGEditor_Classes_WidgetPaletteFavorites_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
