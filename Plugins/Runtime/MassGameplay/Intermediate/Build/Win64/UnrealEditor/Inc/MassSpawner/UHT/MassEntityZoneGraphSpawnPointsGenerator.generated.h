// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassEntityZoneGraphSpawnPointsGenerator.h"

#ifdef MASSSPAWNER_MassEntityZoneGraphSpawnPointsGenerator_generated_h
#error "MassEntityZoneGraphSpawnPointsGenerator.generated.h already included, missing '#pragma once' in MassEntityZoneGraphSpawnPointsGenerator.h"
#endif
#define MASSSPAWNER_MassEntityZoneGraphSpawnPointsGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassEntityZoneGraphSpawnPointsGenerator *********************************
struct Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics;
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityZoneGraphSpawnPointsGenerator_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassEntityZoneGraphSpawnPointsGenerator(); \
	friend struct ::Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSSPAWNER_API UClass* ::Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassEntityZoneGraphSpawnPointsGenerator, UMassEntitySpawnDataGeneratorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassSpawner"), Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_NoRegister) \
	DECLARE_SERIALIZER(UMassEntityZoneGraphSpawnPointsGenerator)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityZoneGraphSpawnPointsGenerator_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSSPAWNER_API UMassEntityZoneGraphSpawnPointsGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassEntityZoneGraphSpawnPointsGenerator(UMassEntityZoneGraphSpawnPointsGenerator&&) = delete; \
	UMassEntityZoneGraphSpawnPointsGenerator(const UMassEntityZoneGraphSpawnPointsGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSSPAWNER_API, UMassEntityZoneGraphSpawnPointsGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassEntityZoneGraphSpawnPointsGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassEntityZoneGraphSpawnPointsGenerator) \
	MASSSPAWNER_API virtual ~UMassEntityZoneGraphSpawnPointsGenerator();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityZoneGraphSpawnPointsGenerator_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityZoneGraphSpawnPointsGenerator_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityZoneGraphSpawnPointsGenerator_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityZoneGraphSpawnPointsGenerator_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassEntityZoneGraphSpawnPointsGenerator;

// ********** End Class UMassEntityZoneGraphSpawnPointsGenerator ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityZoneGraphSpawnPointsGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
