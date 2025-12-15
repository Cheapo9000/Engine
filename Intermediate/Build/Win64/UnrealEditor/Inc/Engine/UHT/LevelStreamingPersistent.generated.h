// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/LevelStreamingPersistent.h"

#ifdef ENGINE_LevelStreamingPersistent_generated_h
#error "LevelStreamingPersistent.generated.h already included, missing '#pragma once' in LevelStreamingPersistent.h"
#endif
#define ENGINE_LevelStreamingPersistent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULevelStreamingPersistent ************************************************
struct Z_Construct_UClass_ULevelStreamingPersistent_Statics;
ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingPersistent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesULevelStreamingPersistent(); \
	friend struct ::Z_Construct_UClass_ULevelStreamingPersistent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ULevelStreamingPersistent_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelStreamingPersistent, ULevelStreaming, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ULevelStreamingPersistent_NoRegister) \
	DECLARE_SERIALIZER(ULevelStreamingPersistent)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelStreamingPersistent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreamingPersistent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelStreamingPersistent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreamingPersistent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelStreamingPersistent(ULevelStreamingPersistent&&) = delete; \
	ULevelStreamingPersistent(const ULevelStreamingPersistent&) = delete; \
	NO_API virtual ~ULevelStreamingPersistent();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelStreamingPersistent;

// ********** End Class ULevelStreamingPersistent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
