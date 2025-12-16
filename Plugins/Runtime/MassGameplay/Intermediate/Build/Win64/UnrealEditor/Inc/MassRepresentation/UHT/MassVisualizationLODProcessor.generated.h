// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassVisualizationLODProcessor.h"

#ifdef MASSREPRESENTATION_MassVisualizationLODProcessor_generated_h
#error "MassVisualizationLODProcessor.generated.h already included, missing '#pragma once' in MassVisualizationLODProcessor.h"
#endif
#define MASSREPRESENTATION_MassVisualizationLODProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassVisualizationLODProcessorTag *********************************
struct Z_Construct_UScriptStruct_FMassVisualizationLODProcessorTag_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationLODProcessor_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassVisualizationLODProcessorTag_Statics; \
	MASSREPRESENTATION_API static class UScriptStruct* StaticStruct(); \
	typedef FMassTag Super;


struct FMassVisualizationLODProcessorTag;
// ********** End ScriptStruct FMassVisualizationLODProcessorTag ***********************************

// ********** Begin Class UMassVisualizationLODProcessor *******************************************
struct Z_Construct_UClass_UMassVisualizationLODProcessor_Statics;
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationLODProcessor_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationLODProcessor_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassVisualizationLODProcessor(); \
	friend struct ::Z_Construct_UClass_UMassVisualizationLODProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSREPRESENTATION_API UClass* ::Z_Construct_UClass_UMassVisualizationLODProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassVisualizationLODProcessor, UMassProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassRepresentation"), Z_Construct_UClass_UMassVisualizationLODProcessor_NoRegister) \
	DECLARE_SERIALIZER(UMassVisualizationLODProcessor)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationLODProcessor_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassVisualizationLODProcessor(UMassVisualizationLODProcessor&&) = delete; \
	UMassVisualizationLODProcessor(const UMassVisualizationLODProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSREPRESENTATION_API, UMassVisualizationLODProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassVisualizationLODProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassVisualizationLODProcessor) \
	MASSREPRESENTATION_API virtual ~UMassVisualizationLODProcessor();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationLODProcessor_h_24_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationLODProcessor_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationLODProcessor_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationLODProcessor_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassVisualizationLODProcessor;

// ********** End Class UMassVisualizationLODProcessor *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationLODProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
