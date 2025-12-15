// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/LevelScriptActor.h"

#ifdef ENGINE_LevelScriptActor_generated_h
#error "LevelScriptActor.generated.h already included, missing '#pragma once' in LevelScriptActor.h"
#endif
#define ENGINE_LevelScriptActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALevelScriptActor ********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetCinematicMode); \
	DECLARE_FUNCTION(execRemoteEvent);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ALevelScriptActor_Statics;
ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_INCLASS \
private: \
	static void StaticRegisterNativesALevelScriptActor(); \
	friend struct ::Z_Construct_UClass_ALevelScriptActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ALevelScriptActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ALevelScriptActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ALevelScriptActor_NoRegister) \
	DECLARE_SERIALIZER(ALevelScriptActor)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ALevelScriptActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelScriptActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ALevelScriptActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelScriptActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALevelScriptActor(ALevelScriptActor&&) = delete; \
	ALevelScriptActor(const ALevelScriptActor&) = delete; \
	ENGINE_API virtual ~ALevelScriptActor();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_24_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALevelScriptActor;

// ********** End Class ALevelScriptActor **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
