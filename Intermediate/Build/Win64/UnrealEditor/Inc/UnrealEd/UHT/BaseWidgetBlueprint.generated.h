// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseWidgetBlueprint.h"

#ifdef UNREALED_BaseWidgetBlueprint_generated_h
#error "BaseWidgetBlueprint.generated.h already included, missing '#pragma once' in BaseWidgetBlueprint.h"
#endif
#define UNREALED_BaseWidgetBlueprint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBaseWidgetBlueprint *****************************************************
struct Z_Construct_UClass_UBaseWidgetBlueprint_Statics;
UNREALED_API UClass* Z_Construct_UClass_UBaseWidgetBlueprint_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUBaseWidgetBlueprint(); \
	friend struct ::Z_Construct_UClass_UBaseWidgetBlueprint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UBaseWidgetBlueprint_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseWidgetBlueprint, UUserWidgetBlueprint, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UBaseWidgetBlueprint_NoRegister) \
	DECLARE_SERIALIZER(UBaseWidgetBlueprint)


#define FID_Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UBaseWidgetBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseWidgetBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UBaseWidgetBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseWidgetBlueprint); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseWidgetBlueprint(UBaseWidgetBlueprint&&) = delete; \
	UBaseWidgetBlueprint(const UBaseWidgetBlueprint&) = delete; \
	UNREALED_API virtual ~UBaseWidgetBlueprint();


#define FID_Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_8_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_11_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseWidgetBlueprint;

// ********** End Class UBaseWidgetBlueprint *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
