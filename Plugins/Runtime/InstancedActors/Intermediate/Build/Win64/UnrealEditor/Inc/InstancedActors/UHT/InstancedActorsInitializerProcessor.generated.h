// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InstancedActorsInitializerProcessor.h"

#ifdef INSTANCEDACTORS_InstancedActorsInitializerProcessor_generated_h
#error "InstancedActorsInitializerProcessor.generated.h already included, missing '#pragma once' in InstancedActorsInitializerProcessor.h"
#endif
#define INSTANCEDACTORS_InstancedActorsInitializerProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FInstancedActorsMassSpawnData *************************************
struct Z_Construct_UScriptStruct_FInstancedActorsMassSpawnData_Statics;
#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsInitializerProcessor_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInstancedActorsMassSpawnData_Statics; \
	INSTANCEDACTORS_API static class UScriptStruct* StaticStruct();


struct FInstancedActorsMassSpawnData;
// ********** End ScriptStruct FInstancedActorsMassSpawnData ***************************************

// ********** Begin Class UInstancedActorsInitializerProcessor *************************************
struct Z_Construct_UClass_UInstancedActorsInitializerProcessor_Statics;
INSTANCEDACTORS_API UClass* Z_Construct_UClass_UInstancedActorsInitializerProcessor_NoRegister();

#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsInitializerProcessor_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInstancedActorsInitializerProcessor(); \
	friend struct ::Z_Construct_UClass_UInstancedActorsInitializerProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INSTANCEDACTORS_API UClass* ::Z_Construct_UClass_UInstancedActorsInitializerProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UInstancedActorsInitializerProcessor, UMassProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/InstancedActors"), Z_Construct_UClass_UInstancedActorsInitializerProcessor_NoRegister) \
	DECLARE_SERIALIZER(UInstancedActorsInitializerProcessor)


#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsInitializerProcessor_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInstancedActorsInitializerProcessor(UInstancedActorsInitializerProcessor&&) = delete; \
	UInstancedActorsInitializerProcessor(const UInstancedActorsInitializerProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInstancedActorsInitializerProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInstancedActorsInitializerProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInstancedActorsInitializerProcessor) \
	NO_API virtual ~UInstancedActorsInitializerProcessor();


#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsInitializerProcessor_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsInitializerProcessor_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsInitializerProcessor_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsInitializerProcessor_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInstancedActorsInitializerProcessor;

// ********** End Class UInstancedActorsInitializerProcessor ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsInitializerProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
