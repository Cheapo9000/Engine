// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/PlacementSubsystem.h"

#ifdef EDITORFRAMEWORK_PlacementSubsystem_generated_h
#error "PlacementSubsystem.generated.h already included, missing '#pragma once' in PlacementSubsystem.h"
#endif
#define EDITORFRAMEWORK_PlacementSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAssetPlacementInfo ***********************************************
struct Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics;
#define FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_PlacementSubsystem_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics; \
	EDITORFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FAssetPlacementInfo;
// ********** End ScriptStruct FAssetPlacementInfo *************************************************

// ********** Begin ScriptStruct FPlacementOptions *************************************************
struct Z_Construct_UScriptStruct_FPlacementOptions_Statics;
#define FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_PlacementSubsystem_h_75_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPlacementOptions_Statics; \
	EDITORFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FPlacementOptions;
// ********** End ScriptStruct FPlacementOptions ***************************************************

// ********** Begin Class UPlacementSubsystem ******************************************************
struct Z_Construct_UClass_UPlacementSubsystem_Statics;
EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UPlacementSubsystem_NoRegister();

#define FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_PlacementSubsystem_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlacementSubsystem(); \
	friend struct ::Z_Construct_UClass_UPlacementSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORFRAMEWORK_API UClass* ::Z_Construct_UClass_UPlacementSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlacementSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/EditorFramework"), Z_Construct_UClass_UPlacementSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UPlacementSubsystem)


#define FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_PlacementSubsystem_h_96_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORFRAMEWORK_API UPlacementSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlacementSubsystem(UPlacementSubsystem&&) = delete; \
	UPlacementSubsystem(const UPlacementSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORFRAMEWORK_API, UPlacementSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlacementSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlacementSubsystem) \
	EDITORFRAMEWORK_API virtual ~UPlacementSubsystem();


#define FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_PlacementSubsystem_h_93_PROLOG
#define FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_PlacementSubsystem_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_PlacementSubsystem_h_96_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_PlacementSubsystem_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlacementSubsystem;

// ********** End Class UPlacementSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_PlacementSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
