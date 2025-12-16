// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/LevelSequenceFactoryNew.h"

#ifdef LEVELSEQUENCEEDITOR_LevelSequenceFactoryNew_generated_h
#error "LevelSequenceFactoryNew.generated.h already included, missing '#pragma once' in LevelSequenceFactoryNew.h"
#endif
#define LEVELSEQUENCEEDITOR_LevelSequenceFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULevelSequenceFactoryNew *************************************************
struct Z_Construct_UClass_ULevelSequenceFactoryNew_Statics;
LEVELSEQUENCEEDITOR_API UClass* Z_Construct_UClass_ULevelSequenceFactoryNew_NoRegister();

#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Private_Factories_LevelSequenceFactoryNew_h_15_INCLASS \
private: \
	static void StaticRegisterNativesULevelSequenceFactoryNew(); \
	friend struct ::Z_Construct_UClass_ULevelSequenceFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSEQUENCEEDITOR_API UClass* ::Z_Construct_UClass_ULevelSequenceFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelSequenceFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequenceEditor"), Z_Construct_UClass_ULevelSequenceFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(ULevelSequenceFactoryNew)


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Private_Factories_LevelSequenceFactoryNew_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequenceFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequenceFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelSequenceFactoryNew(ULevelSequenceFactoryNew&&) = delete; \
	ULevelSequenceFactoryNew(const ULevelSequenceFactoryNew&) = delete; \
	NO_API virtual ~ULevelSequenceFactoryNew();


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Private_Factories_LevelSequenceFactoryNew_h_11_PROLOG
#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Private_Factories_LevelSequenceFactoryNew_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Private_Factories_LevelSequenceFactoryNew_h_15_INCLASS \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Private_Factories_LevelSequenceFactoryNew_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelSequenceFactoryNew;

// ********** End Class ULevelSequenceFactoryNew ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Private_Factories_LevelSequenceFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
