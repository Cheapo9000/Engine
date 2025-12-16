// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassSpawnerSubsystem.h"

#ifdef MASSSPAWNER_MassSpawnerSubsystem_generated_h
#error "MassSpawnerSubsystem.generated.h already included, missing '#pragma once' in MassSpawnerSubsystem.h"
#endif
#define MASSSPAWNER_MassSpawnerSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassSpawnerSubsystem ****************************************************
struct Z_Construct_UClass_UMassSpawnerSubsystem_Statics;
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassSpawnerSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnerSubsystem_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassSpawnerSubsystem(); \
	friend struct ::Z_Construct_UClass_UMassSpawnerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSSPAWNER_API UClass* ::Z_Construct_UClass_UMassSpawnerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassSpawnerSubsystem, UMassSubsystemBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassSpawner"), Z_Construct_UClass_UMassSpawnerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMassSpawnerSubsystem)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnerSubsystem_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassSpawnerSubsystem(UMassSpawnerSubsystem&&) = delete; \
	UMassSpawnerSubsystem(const UMassSpawnerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSSPAWNER_API, UMassSpawnerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSpawnerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassSpawnerSubsystem) \
	MASSSPAWNER_API virtual ~UMassSpawnerSubsystem();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnerSubsystem_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnerSubsystem_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnerSubsystem_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnerSubsystem_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassSpawnerSubsystem;

// ********** End Class UMassSpawnerSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnerSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
