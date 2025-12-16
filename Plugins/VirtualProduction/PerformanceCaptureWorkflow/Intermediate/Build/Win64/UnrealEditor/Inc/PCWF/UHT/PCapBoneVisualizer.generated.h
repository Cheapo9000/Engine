// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Visualizers/PCapBoneVisualizer.h"

#ifdef PERFORMANCECAPTUREWORKFLOW_PCapBoneVisualizer_generated_h
#error "PCapBoneVisualizer.generated.h already included, missing '#pragma once' in PCapBoneVisualizer.h"
#endif
#define PERFORMANCECAPTUREWORKFLOW_PCapBoneVisualizer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;

// ********** Begin Class UPCapBoneVisualiser ******************************************************
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_Visualizers_PCapBoneVisualizer_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateColor);


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_Visualizers_PCapBoneVisualizer_h_23_ACCESSORS \
static void SetColor_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UPCapBoneVisualiser_Statics;
PERFORMANCECAPTUREWORKFLOW_API UClass* Z_Construct_UClass_UPCapBoneVisualiser_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_Visualizers_PCapBoneVisualizer_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCapBoneVisualiser(); \
	friend struct ::Z_Construct_UClass_UPCapBoneVisualiser_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERFORMANCECAPTUREWORKFLOW_API UClass* ::Z_Construct_UClass_UPCapBoneVisualiser_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCapBoneVisualiser, UInstancedStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PerformanceCaptureWorkflow"), Z_Construct_UClass_UPCapBoneVisualiser_NoRegister) \
	DECLARE_SERIALIZER(UPCapBoneVisualiser)


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_Visualizers_PCapBoneVisualizer_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCapBoneVisualiser(UPCapBoneVisualiser&&) = delete; \
	UPCapBoneVisualiser(const UPCapBoneVisualiser&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCapBoneVisualiser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCapBoneVisualiser); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCapBoneVisualiser) \
	NO_API virtual ~UPCapBoneVisualiser();


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_Visualizers_PCapBoneVisualizer_h_20_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_Visualizers_PCapBoneVisualizer_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_Visualizers_PCapBoneVisualizer_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_Visualizers_PCapBoneVisualizer_h_23_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_Visualizers_PCapBoneVisualizer_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_Visualizers_PCapBoneVisualizer_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCapBoneVisualiser;

// ********** End Class UPCapBoneVisualiser ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_Visualizers_PCapBoneVisualizer_h

// ********** Begin Enum EBoneVisualType ***********************************************************
#define FOREACH_ENUM_EBONEVISUALTYPE(op) \
	op(EBoneVisualType::Joint) \
	op(EBoneVisualType::Bone) 

enum class EBoneVisualType : uint8;
template<> struct TIsUEnumClass<EBoneVisualType> { enum { Value = true }; };
template<> PERFORMANCECAPTUREWORKFLOW_NON_ATTRIBUTED_API UEnum* StaticEnum<EBoneVisualType>();
// ********** End Enum EBoneVisualType *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
