// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/EditorSubsystemBlueprintLibrary.h"

#ifdef UNREALED_EditorSubsystemBlueprintLibrary_generated_h
#error "EditorSubsystemBlueprintLibrary.generated.h already included, missing '#pragma once' in EditorSubsystemBlueprintLibrary.h"
#endif
#define UNREALED_EditorSubsystemBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UEditorSubsystem;

// ********** Begin Class UEditorSubsystemBlueprintLibrary *****************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDisablePreviewPlatform); \
	DECLARE_FUNCTION(execSetPreviewPlatform); \
	DECLARE_FUNCTION(execTogglePreviewPlatform); \
	DECLARE_FUNCTION(execGetPreviewPlatformOptions); \
	DECLARE_FUNCTION(execGetEditorSubsystem);


struct Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_Statics;
UNREALED_API UClass* Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorSubsystemBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorSubsystemBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UEditorSubsystemBlueprintLibrary)


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorSubsystemBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorSubsystemBlueprintLibrary(UEditorSubsystemBlueprintLibrary&&) = delete; \
	UEditorSubsystemBlueprintLibrary(const UEditorSubsystemBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorSubsystemBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorSubsystemBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorSubsystemBlueprintLibrary) \
	UNREALED_API virtual ~UEditorSubsystemBlueprintLibrary();


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorSubsystemBlueprintLibrary;

// ********** End Class UEditorSubsystemBlueprintLibrary *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
