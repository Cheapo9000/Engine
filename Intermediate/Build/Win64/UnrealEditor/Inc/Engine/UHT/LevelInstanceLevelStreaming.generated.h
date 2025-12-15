// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelInstance/LevelInstanceLevelStreaming.h"

#ifdef ENGINE_LevelInstanceLevelStreaming_generated_h
#error "LevelInstanceLevelStreaming.generated.h already included, missing '#pragma once' in LevelInstanceLevelStreaming.h"
#endif
#define ENGINE_LevelInstanceLevelStreaming_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULevelStreamingLevelInstance *********************************************
struct Z_Construct_UClass_ULevelStreamingLevelInstance_Statics;
ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingLevelInstance_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceLevelStreaming_h_22_INCLASS \
private: \
	static void StaticRegisterNativesULevelStreamingLevelInstance(); \
	friend struct ::Z_Construct_UClass_ULevelStreamingLevelInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ULevelStreamingLevelInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelStreamingLevelInstance, ULevelStreamingDynamic, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ULevelStreamingLevelInstance_NoRegister) \
	DECLARE_SERIALIZER(ULevelStreamingLevelInstance)


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceLevelStreaming_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULevelStreamingLevelInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreamingLevelInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelStreamingLevelInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreamingLevelInstance); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelStreamingLevelInstance(ULevelStreamingLevelInstance&&) = delete; \
	ULevelStreamingLevelInstance(const ULevelStreamingLevelInstance&) = delete; \
	ENGINE_API virtual ~ULevelStreamingLevelInstance();


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceLevelStreaming_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceLevelStreaming_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceLevelStreaming_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceLevelStreaming_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelStreamingLevelInstance;

// ********** End Class ULevelStreamingLevelInstance ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceLevelStreaming_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
