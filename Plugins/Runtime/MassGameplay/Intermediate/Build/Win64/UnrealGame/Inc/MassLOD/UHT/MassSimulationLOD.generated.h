// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassSimulationLOD.h"

#ifdef MASSLOD_MassSimulationLOD_generated_h
#error "MassSimulationLOD.generated.h already included, missing '#pragma once' in MassSimulationLOD.h"
#endif
#define MASSLOD_MassSimulationLOD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassSimulationLODFragment ****************************************
struct Z_Construct_UScriptStruct_FMassSimulationLODFragment_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassSimulationLODFragment_Statics; \
	MASSLOD_API static class UScriptStruct* StaticStruct(); \
	typedef FMassFragment Super;


struct FMassSimulationLODFragment;
// ********** End ScriptStruct FMassSimulationLODFragment ******************************************

// ********** Begin ScriptStruct FMassSimulationVariableTickFragment *******************************
struct Z_Construct_UScriptStruct_FMassSimulationVariableTickFragment_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassSimulationVariableTickFragment_Statics; \
	MASSLOD_API static class UScriptStruct* StaticStruct(); \
	typedef FMassFragment Super;


struct FMassSimulationVariableTickFragment;
// ********** End ScriptStruct FMassSimulationVariableTickFragment *********************************

// ********** Begin ScriptStruct FMassSimulationVariableTickChunkFragment **************************
struct Z_Construct_UScriptStruct_FMassSimulationVariableTickChunkFragment_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassSimulationVariableTickChunkFragment_Statics; \
	MASSLOD_API static class UScriptStruct* StaticStruct(); \
	typedef FMassVariableTickChunkFragment Super;


struct FMassSimulationVariableTickChunkFragment;
// ********** End ScriptStruct FMassSimulationVariableTickChunkFragment ****************************

// ********** Begin ScriptStruct FMassSimulationLODParameters **************************************
struct Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics; \
	MASSLOD_API static class UScriptStruct* StaticStruct(); \
	typedef FMassConstSharedFragment Super;


struct FMassSimulationLODParameters;
// ********** End ScriptStruct FMassSimulationLODParameters ****************************************

// ********** Begin ScriptStruct FMassSimulationVariableTickParameters *****************************
struct Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_109_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters_Statics; \
	MASSLOD_API static class UScriptStruct* StaticStruct(); \
	typedef FMassConstSharedFragment Super;


struct FMassSimulationVariableTickParameters;
// ********** End ScriptStruct FMassSimulationVariableTickParameters *******************************

// ********** Begin ScriptStruct FMassSimulationLODSharedFragment **********************************
struct Z_Construct_UScriptStruct_FMassSimulationLODSharedFragment_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_125_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassSimulationLODSharedFragment_Statics; \
	MASSLOD_API static class UScriptStruct* StaticStruct(); \
	typedef FMassSharedFragment Super;


struct FMassSimulationLODSharedFragment;
// ********** End ScriptStruct FMassSimulationLODSharedFragment ************************************

// ********** Begin ScriptStruct FMassSimulationVariableTickSharedFragment *************************
struct Z_Construct_UScriptStruct_FMassSimulationVariableTickSharedFragment_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_138_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassSimulationVariableTickSharedFragment_Statics; \
	MASSLOD_API static class UScriptStruct* StaticStruct(); \
	typedef FMassSharedFragment Super;


struct FMassSimulationVariableTickSharedFragment;
// ********** End ScriptStruct FMassSimulationVariableTickSharedFragment ***************************

// ********** Begin Class UMassSimulationLODProcessor **********************************************
struct Z_Construct_UClass_UMassSimulationLODProcessor_Statics;
MASSLOD_API UClass* Z_Construct_UClass_UMassSimulationLODProcessor_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_168_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassSimulationLODProcessor(); \
	friend struct ::Z_Construct_UClass_UMassSimulationLODProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSLOD_API UClass* ::Z_Construct_UClass_UMassSimulationLODProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassSimulationLODProcessor, UMassProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassLOD"), Z_Construct_UClass_UMassSimulationLODProcessor_NoRegister) \
	DECLARE_SERIALIZER(UMassSimulationLODProcessor)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_168_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassSimulationLODProcessor(UMassSimulationLODProcessor&&) = delete; \
	UMassSimulationLODProcessor(const UMassSimulationLODProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSLOD_API, UMassSimulationLODProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSimulationLODProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassSimulationLODProcessor) \
	MASSLOD_API virtual ~UMassSimulationLODProcessor();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_165_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_168_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_168_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_168_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassSimulationLODProcessor;

// ********** End Class UMassSimulationLODProcessor ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
