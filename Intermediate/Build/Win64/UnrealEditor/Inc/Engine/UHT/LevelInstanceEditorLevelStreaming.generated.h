// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelInstance/LevelInstanceEditorLevelStreaming.h"

#ifdef ENGINE_LevelInstanceEditorLevelStreaming_generated_h
#error "LevelInstanceEditorLevelStreaming.generated.h already included, missing '#pragma once' in LevelInstanceEditorLevelStreaming.h"
#endif
#define ENGINE_LevelInstanceEditorLevelStreaming_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULevelStreamingLevelInstanceEditor ***************************************
struct Z_Construct_UClass_ULevelStreamingLevelInstanceEditor_Statics;
ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingLevelInstanceEditor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorLevelStreaming_h_17_INCLASS \
private: \
	static void StaticRegisterNativesULevelStreamingLevelInstanceEditor(); \
	friend struct ::Z_Construct_UClass_ULevelStreamingLevelInstanceEditor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ULevelStreamingLevelInstanceEditor_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelStreamingLevelInstanceEditor, ULevelStreamingAlwaysLoaded, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ULevelStreamingLevelInstanceEditor_NoRegister) \
	DECLARE_SERIALIZER(ULevelStreamingLevelInstanceEditor)


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorLevelStreaming_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULevelStreamingLevelInstanceEditor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreamingLevelInstanceEditor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelStreamingLevelInstanceEditor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreamingLevelInstanceEditor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelStreamingLevelInstanceEditor(ULevelStreamingLevelInstanceEditor&&) = delete; \
	ULevelStreamingLevelInstanceEditor(const ULevelStreamingLevelInstanceEditor&) = delete; \
	ENGINE_API virtual ~ULevelStreamingLevelInstanceEditor();


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorLevelStreaming_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorLevelStreaming_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorLevelStreaming_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorLevelStreaming_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelStreamingLevelInstanceEditor;

// ********** End Class ULevelStreamingLevelInstanceEditor *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorLevelStreaming_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
