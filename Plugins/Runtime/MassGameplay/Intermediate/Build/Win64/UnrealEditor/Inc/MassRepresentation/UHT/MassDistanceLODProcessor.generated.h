// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassDistanceLODProcessor.h"

#ifdef MASSREPRESENTATION_MassDistanceLODProcessor_generated_h
#error "MassDistanceLODProcessor.generated.h already included, missing '#pragma once' in MassDistanceLODProcessor.h"
#endif
#define MASSREPRESENTATION_MassDistanceLODProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassDistanceLODProcessorTag **************************************
struct Z_Construct_UScriptStruct_FMassDistanceLODProcessorTag_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassDistanceLODProcessor_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassDistanceLODProcessorTag_Statics; \
	MASSREPRESENTATION_API static class UScriptStruct* StaticStruct(); \
	typedef FMassTag Super;


struct FMassDistanceLODProcessorTag;
// ********** End ScriptStruct FMassDistanceLODProcessorTag ****************************************

// ********** Begin Class UMassDistanceLODProcessor ************************************************
struct Z_Construct_UClass_UMassDistanceLODProcessor_Statics;
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassDistanceLODProcessor_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassDistanceLODProcessor_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassDistanceLODProcessor(); \
	friend struct ::Z_Construct_UClass_UMassDistanceLODProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSREPRESENTATION_API UClass* ::Z_Construct_UClass_UMassDistanceLODProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassDistanceLODProcessor, UMassProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassRepresentation"), Z_Construct_UClass_UMassDistanceLODProcessor_NoRegister) \
	DECLARE_SERIALIZER(UMassDistanceLODProcessor)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassDistanceLODProcessor_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassDistanceLODProcessor(UMassDistanceLODProcessor&&) = delete; \
	UMassDistanceLODProcessor(const UMassDistanceLODProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSREPRESENTATION_API, UMassDistanceLODProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassDistanceLODProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassDistanceLODProcessor) \
	MASSREPRESENTATION_API virtual ~UMassDistanceLODProcessor();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassDistanceLODProcessor_h_25_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassDistanceLODProcessor_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassDistanceLODProcessor_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassDistanceLODProcessor_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassDistanceLODProcessor;

// ********** End Class UMassDistanceLODProcessor **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassDistanceLODProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
