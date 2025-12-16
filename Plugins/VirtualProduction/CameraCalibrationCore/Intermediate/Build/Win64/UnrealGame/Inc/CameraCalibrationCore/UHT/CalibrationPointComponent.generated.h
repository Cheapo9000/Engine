// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CalibrationPointComponent.h"

#ifdef CAMERACALIBRATIONCORE_CalibrationPointComponent_generated_h
#error "CalibrationPointComponent.generated.h already included, missing '#pragma once' in CalibrationPointComponent.h"
#endif
#define CAMERACALIBRATIONCORE_CalibrationPointComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCalibrationPointComponent ***********************************************
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibrationPointComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRebuildVertices); \
	DECLARE_FUNCTION(execGetNamespacedPointNames); \
	DECLARE_FUNCTION(execNamespacedSubpointName); \
	DECLARE_FUNCTION(execGetWorldLocation);


struct Z_Construct_UClass_UCalibrationPointComponent_Statics;
CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCalibrationPointComponent_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibrationPointComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCalibrationPointComponent(); \
	friend struct ::Z_Construct_UClass_UCalibrationPointComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAMERACALIBRATIONCORE_API UClass* ::Z_Construct_UClass_UCalibrationPointComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCalibrationPointComponent, UProceduralMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CameraCalibrationCore"), Z_Construct_UClass_UCalibrationPointComponent_NoRegister) \
	DECLARE_SERIALIZER(UCalibrationPointComponent)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibrationPointComponent_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCalibrationPointComponent(UCalibrationPointComponent&&) = delete; \
	UCalibrationPointComponent(const UCalibrationPointComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CAMERACALIBRATIONCORE_API, UCalibrationPointComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCalibrationPointComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCalibrationPointComponent) \
	CAMERACALIBRATIONCORE_API virtual ~UCalibrationPointComponent();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibrationPointComponent_h_29_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibrationPointComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibrationPointComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibrationPointComponent_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibrationPointComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCalibrationPointComponent;

// ********** End Class UCalibrationPointComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibrationPointComponent_h

// ********** Begin Enum ECalibrationPointVisualization ********************************************
#define FOREACH_ENUM_ECALIBRATIONPOINTVISUALIZATION(op) \
	op(CalibrationPointVisualizationCube) \
	op(CalibrationPointVisualizationPyramid) 

enum ECalibrationPointVisualization : int;
template<> CAMERACALIBRATIONCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECalibrationPointVisualization>();
// ********** End Enum ECalibrationPointVisualization **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
