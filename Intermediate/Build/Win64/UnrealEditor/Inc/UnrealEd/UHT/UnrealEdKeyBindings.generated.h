// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Preferences/UnrealEdKeyBindings.h"

#ifdef UNREALED_UnrealEdKeyBindings_generated_h
#error "UnrealEdKeyBindings.generated.h already included, missing '#pragma once' in UnrealEdKeyBindings.h"
#endif
#define UNREALED_UnrealEdKeyBindings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FEditorKeyBinding *************************************************
struct Z_Construct_UScriptStruct_FEditorKeyBinding_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEditorKeyBinding_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FEditorKeyBinding;
// ********** End ScriptStruct FEditorKeyBinding ***************************************************

// ********** Begin Class UUnrealEdKeyBindings *****************************************************
struct Z_Construct_UClass_UUnrealEdKeyBindings_Statics;
UNREALED_API UClass* Z_Construct_UClass_UUnrealEdKeyBindings_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUUnrealEdKeyBindings(); \
	friend struct ::Z_Construct_UClass_UUnrealEdKeyBindings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UUnrealEdKeyBindings_NoRegister(); \
public: \
	DECLARE_CLASS2(UUnrealEdKeyBindings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UUnrealEdKeyBindings_NoRegister) \
	DECLARE_SERIALIZER(UUnrealEdKeyBindings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorKeyBindings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealEdKeyBindings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealEdKeyBindings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealEdKeyBindings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealEdKeyBindings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUnrealEdKeyBindings(UUnrealEdKeyBindings&&) = delete; \
	UUnrealEdKeyBindings(const UUnrealEdKeyBindings&) = delete; \
	NO_API virtual ~UUnrealEdKeyBindings();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_43_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_46_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUnrealEdKeyBindings;

// ********** End Class UUnrealEdKeyBindings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
