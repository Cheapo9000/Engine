// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassSpawnLocationProcessor.h"

#ifdef MASSSPAWNER_MassSpawnLocationProcessor_generated_h
#error "MassSpawnLocationProcessor.generated.h already included, missing '#pragma once' in MassSpawnLocationProcessor.h"
#endif
#define MASSSPAWNER_MassSpawnLocationProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassSpawnLocationProcessor **********************************************
struct Z_Construct_UClass_UMassSpawnLocationProcessor_Statics;
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassSpawnLocationProcessor_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnLocationProcessor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassSpawnLocationProcessor(); \
	friend struct ::Z_Construct_UClass_UMassSpawnLocationProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSSPAWNER_API UClass* ::Z_Construct_UClass_UMassSpawnLocationProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassSpawnLocationProcessor, UMassProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassSpawner"), Z_Construct_UClass_UMassSpawnLocationProcessor_NoRegister) \
	DECLARE_SERIALIZER(UMassSpawnLocationProcessor)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnLocationProcessor_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassSpawnLocationProcessor(UMassSpawnLocationProcessor&&) = delete; \
	UMassSpawnLocationProcessor(const UMassSpawnLocationProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSSPAWNER_API, UMassSpawnLocationProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSpawnLocationProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassSpawnLocationProcessor) \
	MASSSPAWNER_API virtual ~UMassSpawnLocationProcessor();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnLocationProcessor_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnLocationProcessor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnLocationProcessor_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnLocationProcessor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassSpawnLocationProcessor;

// ********** End Class UMassSpawnLocationProcessor ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnLocationProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
