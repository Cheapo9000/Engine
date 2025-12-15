// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelInstance/LevelInstanceEditorInstanceActor.h"

#ifdef ENGINE_LevelInstanceEditorInstanceActor_generated_h
#error "LevelInstanceEditorInstanceActor.generated.h already included, missing '#pragma once' in LevelInstanceEditorInstanceActor.h"
#endif
#define ENGINE_LevelInstanceEditorInstanceActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALevelInstanceEditorInstanceActor ****************************************
struct Z_Construct_UClass_ALevelInstanceEditorInstanceActor_Statics;
ENGINE_API UClass* Z_Construct_UClass_ALevelInstanceEditorInstanceActor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorInstanceActor_h_21_INCLASS \
private: \
	static void StaticRegisterNativesALevelInstanceEditorInstanceActor(); \
	friend struct ::Z_Construct_UClass_ALevelInstanceEditorInstanceActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ALevelInstanceEditorInstanceActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ALevelInstanceEditorInstanceActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ALevelInstanceEditorInstanceActor_NoRegister) \
	DECLARE_SERIALIZER(ALevelInstanceEditorInstanceActor)


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorInstanceActor_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ALevelInstanceEditorInstanceActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelInstanceEditorInstanceActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ALevelInstanceEditorInstanceActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelInstanceEditorInstanceActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALevelInstanceEditorInstanceActor(ALevelInstanceEditorInstanceActor&&) = delete; \
	ALevelInstanceEditorInstanceActor(const ALevelInstanceEditorInstanceActor&) = delete; \
	ENGINE_API virtual ~ALevelInstanceEditorInstanceActor();


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorInstanceActor_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorInstanceActor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorInstanceActor_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorInstanceActor_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALevelInstanceEditorInstanceActor;

// ********** End Class ALevelInstanceEditorInstanceActor ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorInstanceActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
