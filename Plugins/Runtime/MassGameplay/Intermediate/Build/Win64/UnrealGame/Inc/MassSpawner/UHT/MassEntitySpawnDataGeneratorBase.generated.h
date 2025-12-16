// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassEntitySpawnDataGeneratorBase.h"

#ifdef MASSSPAWNER_MassEntitySpawnDataGeneratorBase_generated_h
#error "MassEntitySpawnDataGeneratorBase.generated.h already included, missing '#pragma once' in MassEntitySpawnDataGeneratorBase.h"
#endif
#define MASSSPAWNER_MassEntitySpawnDataGeneratorBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassEntitySpawnDataGeneratorResult *******************************
struct Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntitySpawnDataGeneratorBase_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics; \
	MASSSPAWNER_API static class UScriptStruct* StaticStruct();


struct FMassEntitySpawnDataGeneratorResult;
// ********** End ScriptStruct FMassEntitySpawnDataGeneratorResult *********************************

// ********** Begin Class UMassEntitySpawnDataGeneratorBase ****************************************
struct Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase_Statics;
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntitySpawnDataGeneratorBase_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassEntitySpawnDataGeneratorBase(); \
	friend struct ::Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSSPAWNER_API UClass* ::Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassEntitySpawnDataGeneratorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MassSpawner"), Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase_NoRegister) \
	DECLARE_SERIALIZER(UMassEntitySpawnDataGeneratorBase)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntitySpawnDataGeneratorBase_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSSPAWNER_API UMassEntitySpawnDataGeneratorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassEntitySpawnDataGeneratorBase(UMassEntitySpawnDataGeneratorBase&&) = delete; \
	UMassEntitySpawnDataGeneratorBase(const UMassEntitySpawnDataGeneratorBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSSPAWNER_API, UMassEntitySpawnDataGeneratorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassEntitySpawnDataGeneratorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassEntitySpawnDataGeneratorBase) \
	MASSSPAWNER_API virtual ~UMassEntitySpawnDataGeneratorBase();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntitySpawnDataGeneratorBase_h_52_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntitySpawnDataGeneratorBase_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntitySpawnDataGeneratorBase_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntitySpawnDataGeneratorBase_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassEntitySpawnDataGeneratorBase;

// ********** End Class UMassEntitySpawnDataGeneratorBase ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntitySpawnDataGeneratorBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
