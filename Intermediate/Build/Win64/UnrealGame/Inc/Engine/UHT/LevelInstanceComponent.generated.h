// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelInstance/LevelInstanceComponent.h"

#ifdef ENGINE_LevelInstanceComponent_generated_h
#error "LevelInstanceComponent.generated.h already included, missing '#pragma once' in LevelInstanceComponent.h"
#endif
#define ENGINE_LevelInstanceComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULevelInstanceComponent **************************************************
#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_27_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULevelInstanceComponent, ENGINE_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_27_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


struct Z_Construct_UClass_ULevelInstanceComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_27_INCLASS \
private: \
	static void StaticRegisterNativesULevelInstanceComponent(); \
	friend struct ::Z_Construct_UClass_ULevelInstanceComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ULevelInstanceComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelInstanceComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ULevelInstanceComponent_NoRegister) \
	DECLARE_SERIALIZER(ULevelInstanceComponent) \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_27_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULevelInstanceComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelInstanceComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelInstanceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelInstanceComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelInstanceComponent(ULevelInstanceComponent&&) = delete; \
	ULevelInstanceComponent(const ULevelInstanceComponent&) = delete; \
	ENGINE_API virtual ~ULevelInstanceComponent();


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_24_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_27_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelInstanceComponent;

// ********** End Class ULevelInstanceComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
