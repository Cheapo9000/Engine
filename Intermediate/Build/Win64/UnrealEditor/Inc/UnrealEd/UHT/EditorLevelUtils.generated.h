// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorLevelUtils.h"

#ifdef UNREALED_EditorLevelUtils_generated_h
#error "EditorLevelUtils.generated.h already included, missing '#pragma once' in EditorLevelUtils.h"
#endif
#define UNREALED_EditorLevelUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;
class ULevel;
class ULevelStreaming;
class UWorld;
enum class ELevelVisibilityDirtyMode : uint8;

// ********** Begin Class UEditorLevelUtils ********************************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLevels); \
	DECLARE_FUNCTION(execSetLevelsVisibility); \
	DECLARE_FUNCTION(execSetLevelVisibility); \
	DECLARE_FUNCTION(execK2_AddLevelToWorldWithTransform); \
	DECLARE_FUNCTION(execK2_RemoveLevelFromWorld); \
	DECLARE_FUNCTION(execK2_AddLevelToWorld); \
	DECLARE_FUNCTION(execMoveSelectedActorsToLevel); \
	DECLARE_FUNCTION(execMoveActorsToLevel); \
	DECLARE_FUNCTION(execMakeLevelCurrent); \
	DECLARE_FUNCTION(execCreateNewStreamingLevel);


struct Z_Construct_UClass_UEditorLevelUtils_Statics;
UNREALED_API UClass* Z_Construct_UClass_UEditorLevelUtils_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorLevelUtils(); \
	friend struct ::Z_Construct_UClass_UEditorLevelUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UEditorLevelUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorLevelUtils, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UEditorLevelUtils_NoRegister) \
	DECLARE_SERIALIZER(UEditorLevelUtils)


#define FID_Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorLevelUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorLevelUtils(UEditorLevelUtils&&) = delete; \
	UEditorLevelUtils(const UEditorLevelUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorLevelUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorLevelUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorLevelUtils) \
	NO_API virtual ~UEditorLevelUtils();


#define FID_Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_29_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorLevelUtils;

// ********** End Class UEditorLevelUtils **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h

// ********** Begin Enum ELevelVisibilityDirtyMode *************************************************
#define FOREACH_ENUM_ELEVELVISIBILITYDIRTYMODE(op) \
	op(ELevelVisibilityDirtyMode::ModifyOnChange) \
	op(ELevelVisibilityDirtyMode::DontModify) 

enum class ELevelVisibilityDirtyMode : uint8;
template<> struct TIsUEnumClass<ELevelVisibilityDirtyMode> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<ELevelVisibilityDirtyMode>();
// ********** End Enum ELevelVisibilityDirtyMode ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
