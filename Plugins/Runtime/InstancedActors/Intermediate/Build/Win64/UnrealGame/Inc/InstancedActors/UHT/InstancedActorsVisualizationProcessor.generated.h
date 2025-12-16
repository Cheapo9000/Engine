// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InstancedActorsVisualizationProcessor.h"

#ifdef INSTANCEDACTORS_InstancedActorsVisualizationProcessor_generated_h
#error "InstancedActorsVisualizationProcessor.generated.h already included, missing '#pragma once' in InstancedActorsVisualizationProcessor.h"
#endif
#define INSTANCEDACTORS_InstancedActorsVisualizationProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FInstancedActorsVisualizationProcessorTag *************************
struct Z_Construct_UScriptStruct_FInstancedActorsVisualizationProcessorTag_Statics;
#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsVisualizationProcessor_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInstancedActorsVisualizationProcessorTag_Statics; \
	INSTANCEDACTORS_API static class UScriptStruct* StaticStruct(); \
	typedef FMassTag Super;


struct FInstancedActorsVisualizationProcessorTag;
// ********** End ScriptStruct FInstancedActorsVisualizationProcessorTag ***************************

// ********** Begin Class UInstancedActorsVisualizationProcessor ***********************************
struct Z_Construct_UClass_UInstancedActorsVisualizationProcessor_Statics;
INSTANCEDACTORS_API UClass* Z_Construct_UClass_UInstancedActorsVisualizationProcessor_NoRegister();

#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsVisualizationProcessor_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInstancedActorsVisualizationProcessor(); \
	friend struct ::Z_Construct_UClass_UInstancedActorsVisualizationProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INSTANCEDACTORS_API UClass* ::Z_Construct_UClass_UInstancedActorsVisualizationProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UInstancedActorsVisualizationProcessor, UMassVisualizationProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/InstancedActors"), Z_Construct_UClass_UInstancedActorsVisualizationProcessor_NoRegister) \
	DECLARE_SERIALIZER(UInstancedActorsVisualizationProcessor)


#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsVisualizationProcessor_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInstancedActorsVisualizationProcessor(UInstancedActorsVisualizationProcessor&&) = delete; \
	UInstancedActorsVisualizationProcessor(const UInstancedActorsVisualizationProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInstancedActorsVisualizationProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInstancedActorsVisualizationProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInstancedActorsVisualizationProcessor) \
	NO_API virtual ~UInstancedActorsVisualizationProcessor();


#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsVisualizationProcessor_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsVisualizationProcessor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsVisualizationProcessor_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsVisualizationProcessor_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInstancedActorsVisualizationProcessor;

// ********** End Class UInstancedActorsVisualizationProcessor *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsVisualizationProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
