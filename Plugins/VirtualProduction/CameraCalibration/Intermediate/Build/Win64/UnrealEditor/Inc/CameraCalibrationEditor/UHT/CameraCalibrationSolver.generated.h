// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Calibrators/CameraCalibrationSolver.h"

#ifdef CAMERACALIBRATIONEDITOR_CameraCalibrationSolver_generated_h
#error "CameraCalibrationSolver.generated.h already included, missing '#pragma once' in CameraCalibrationSolver.h"
#endif
#define CAMERACALIBRATIONEDITOR_CameraCalibrationSolver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class ULensModel;
enum class ECalibrationFlags : uint32;
struct FDistortionCalibrationResult;
struct FImagePoints;
struct FObjectPoints;

// ********** Begin ScriptStruct FObjectPoints *****************************************************
struct Z_Construct_UScriptStruct_FObjectPoints_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraCalibrationSolver_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FObjectPoints_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FObjectPoints;
// ********** End ScriptStruct FObjectPoints *******************************************************

// ********** Begin ScriptStruct FImagePoints ******************************************************
struct Z_Construct_UScriptStruct_FImagePoints_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraCalibrationSolver_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FImagePoints_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FImagePoints;
// ********** End ScriptStruct FImagePoints ********************************************************

// ********** Begin Class ULensDistortionSolver ****************************************************
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraCalibrationSolver_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execSolve);


#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraCalibrationSolver_h_71_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ULensDistortionSolver_Statics;
CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_ULensDistortionSolver_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraCalibrationSolver_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULensDistortionSolver(); \
	friend struct ::Z_Construct_UClass_ULensDistortionSolver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAMERACALIBRATIONEDITOR_API UClass* ::Z_Construct_UClass_ULensDistortionSolver_NoRegister(); \
public: \
	DECLARE_CLASS2(ULensDistortionSolver, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CameraCalibrationEditor"), Z_Construct_UClass_ULensDistortionSolver_NoRegister) \
	DECLARE_SERIALIZER(ULensDistortionSolver)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraCalibrationSolver_h_71_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULensDistortionSolver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULensDistortionSolver(ULensDistortionSolver&&) = delete; \
	ULensDistortionSolver(const ULensDistortionSolver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULensDistortionSolver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensDistortionSolver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULensDistortionSolver) \
	NO_API virtual ~ULensDistortionSolver();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraCalibrationSolver_h_68_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraCalibrationSolver_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraCalibrationSolver_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraCalibrationSolver_h_71_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraCalibrationSolver_h_71_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraCalibrationSolver_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULensDistortionSolver;

// ********** End Class ULensDistortionSolver ******************************************************

// ********** Begin Class ULensDistortionSolverOpenCV **********************************************
struct Z_Construct_UClass_ULensDistortionSolverOpenCV_Statics;
CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_ULensDistortionSolverOpenCV_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraCalibrationSolver_h_148_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULensDistortionSolverOpenCV(); \
	friend struct ::Z_Construct_UClass_ULensDistortionSolverOpenCV_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAMERACALIBRATIONEDITOR_API UClass* ::Z_Construct_UClass_ULensDistortionSolverOpenCV_NoRegister(); \
public: \
	DECLARE_CLASS2(ULensDistortionSolverOpenCV, ULensDistortionSolver, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CameraCalibrationEditor"), Z_Construct_UClass_ULensDistortionSolverOpenCV_NoRegister) \
	DECLARE_SERIALIZER(ULensDistortionSolverOpenCV)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraCalibrationSolver_h_148_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULensDistortionSolverOpenCV(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULensDistortionSolverOpenCV(ULensDistortionSolverOpenCV&&) = delete; \
	ULensDistortionSolverOpenCV(const ULensDistortionSolverOpenCV&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULensDistortionSolverOpenCV); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensDistortionSolverOpenCV); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULensDistortionSolverOpenCV) \
	NO_API virtual ~ULensDistortionSolverOpenCV();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraCalibrationSolver_h_145_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraCalibrationSolver_h_148_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraCalibrationSolver_h_148_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraCalibrationSolver_h_148_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULensDistortionSolverOpenCV;

// ********** End Class ULensDistortionSolverOpenCV ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraCalibrationSolver_h

// ********** Begin Enum ECalibrationFlags *********************************************************
#define FOREACH_ENUM_ECALIBRATIONFLAGS(op) \
	op(ECalibrationFlags::None) \
	op(ECalibrationFlags::UseIntrinsicGuess) \
	op(ECalibrationFlags::UseExtrinsicGuess) \
	op(ECalibrationFlags::FixFocalLength) \
	op(ECalibrationFlags::FixPrincipalPoint) \
	op(ECalibrationFlags::FixExtrinsics) \
	op(ECalibrationFlags::FixDistortion) \
	op(ECalibrationFlags::FixAspectRatio) \
	op(ECalibrationFlags::SolveTargetOffset) \
	op(ECalibrationFlags::GroupCameraPoses) 

enum class ECalibrationFlags : uint32;
template<> struct TIsUEnumClass<ECalibrationFlags> { enum { Value = true }; };
template<> CAMERACALIBRATIONEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECalibrationFlags>();
// ********** End Enum ECalibrationFlags ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
