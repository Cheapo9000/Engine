// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/LevelInstance/LevelInstanceContainerInstance.h"

#ifdef ENGINE_LevelInstanceContainerInstance_generated_h
#error "LevelInstanceContainerInstance.generated.h already included, missing '#pragma once' in LevelInstanceContainerInstance.h"
#endif
#define ENGINE_LevelInstanceContainerInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULevelInstanceContainerInstance ******************************************
struct Z_Construct_UClass_ULevelInstanceContainerInstance_Statics;
ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceContainerInstance_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_LevelInstance_LevelInstanceContainerInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelInstanceContainerInstance(); \
	friend struct ::Z_Construct_UClass_ULevelInstanceContainerInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ULevelInstanceContainerInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelInstanceContainerInstance, UActorDescContainerInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ULevelInstanceContainerInstance_NoRegister) \
	DECLARE_SERIALIZER(ULevelInstanceContainerInstance)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_LevelInstance_LevelInstanceContainerInstance_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelInstanceContainerInstance(ULevelInstanceContainerInstance&&) = delete; \
	ULevelInstanceContainerInstance(const ULevelInstanceContainerInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelInstanceContainerInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelInstanceContainerInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULevelInstanceContainerInstance)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_LevelInstance_LevelInstanceContainerInstance_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_LevelInstance_LevelInstanceContainerInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_LevelInstance_LevelInstanceContainerInstance_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_LevelInstance_LevelInstanceContainerInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelInstanceContainerInstance;

// ********** End Class ULevelInstanceContainerInstance ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_LevelInstance_LevelInstanceContainerInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
