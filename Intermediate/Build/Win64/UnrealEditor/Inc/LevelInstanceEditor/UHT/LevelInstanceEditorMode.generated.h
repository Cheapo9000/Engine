// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelInstanceEditorMode.h"

#ifdef LEVELINSTANCEEDITOR_LevelInstanceEditorMode_generated_h
#error "LevelInstanceEditorMode.generated.h already included, missing '#pragma once' in LevelInstanceEditorMode.h"
#endif
#define LEVELINSTANCEEDITOR_LevelInstanceEditorMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULevelInstanceEditorBehaviorSource ***************************************
struct Z_Construct_UClass_ULevelInstanceEditorBehaviorSource_Statics;
LEVELINSTANCEEDITOR_API UClass* Z_Construct_UClass_ULevelInstanceEditorBehaviorSource_NoRegister();

#define FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceEditorMode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelInstanceEditorBehaviorSource(); \
	friend struct ::Z_Construct_UClass_ULevelInstanceEditorBehaviorSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELINSTANCEEDITOR_API UClass* ::Z_Construct_UClass_ULevelInstanceEditorBehaviorSource_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelInstanceEditorBehaviorSource, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelInstanceEditor"), Z_Construct_UClass_ULevelInstanceEditorBehaviorSource_NoRegister) \
	DECLARE_SERIALIZER(ULevelInstanceEditorBehaviorSource) \
	virtual UObject* _getUObject() const override { return const_cast<ULevelInstanceEditorBehaviorSource*>(this); }


#define FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceEditorMode_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelInstanceEditorBehaviorSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelInstanceEditorBehaviorSource(ULevelInstanceEditorBehaviorSource&&) = delete; \
	ULevelInstanceEditorBehaviorSource(const ULevelInstanceEditorBehaviorSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelInstanceEditorBehaviorSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelInstanceEditorBehaviorSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelInstanceEditorBehaviorSource) \
	NO_API virtual ~ULevelInstanceEditorBehaviorSource();


#define FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceEditorMode_h_11_PROLOG
#define FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceEditorMode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceEditorMode_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceEditorMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelInstanceEditorBehaviorSource;

// ********** End Class ULevelInstanceEditorBehaviorSource *****************************************

// ********** Begin Class ULevelInstanceEditorMode *************************************************
struct Z_Construct_UClass_ULevelInstanceEditorMode_Statics;
LEVELINSTANCEEDITOR_API UClass* Z_Construct_UClass_ULevelInstanceEditorMode_NoRegister();

#define FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceEditorMode_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelInstanceEditorMode(); \
	friend struct ::Z_Construct_UClass_ULevelInstanceEditorMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELINSTANCEEDITOR_API UClass* ::Z_Construct_UClass_ULevelInstanceEditorMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelInstanceEditorMode, UEdMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelInstanceEditor"), Z_Construct_UClass_ULevelInstanceEditorMode_NoRegister) \
	DECLARE_SERIALIZER(ULevelInstanceEditorMode)


#define FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceEditorMode_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelInstanceEditorMode(ULevelInstanceEditorMode&&) = delete; \
	ULevelInstanceEditorMode(const ULevelInstanceEditorMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelInstanceEditorMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelInstanceEditorMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULevelInstanceEditorMode)


#define FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceEditorMode_h_26_PROLOG
#define FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceEditorMode_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceEditorMode_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceEditorMode_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelInstanceEditorMode;

// ********** End Class ULevelInstanceEditorMode ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceEditorMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
