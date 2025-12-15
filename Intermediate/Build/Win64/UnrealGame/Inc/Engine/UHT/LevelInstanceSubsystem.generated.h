// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelInstance/LevelInstanceSubsystem.h"

#ifdef ENGINE_LevelInstanceSubsystem_generated_h
#error "LevelInstanceSubsystem.generated.h already included, missing '#pragma once' in LevelInstanceSubsystem.h"
#endif
#define ENGINE_LevelInstanceSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULevelInstanceSubsystem **************************************************
struct Z_Construct_UClass_ULevelInstanceSubsystem_Statics;
ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSubsystem_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelInstanceSubsystem(); \
	friend struct ::Z_Construct_UClass_ULevelInstanceSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ULevelInstanceSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelInstanceSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ULevelInstanceSubsystem_NoRegister) \
	DECLARE_SERIALIZER(ULevelInstanceSubsystem) \
	virtual UObject* _getUObject() const override { return const_cast<ULevelInstanceSubsystem*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSubsystem_h_56_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelInstanceSubsystem(ULevelInstanceSubsystem&&) = delete; \
	ULevelInstanceSubsystem(const ULevelInstanceSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelInstanceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelInstanceSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULevelInstanceSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSubsystem_h_53_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSubsystem_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSubsystem_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSubsystem_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelInstanceSubsystem;

// ********** End Class ULevelInstanceSubsystem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
