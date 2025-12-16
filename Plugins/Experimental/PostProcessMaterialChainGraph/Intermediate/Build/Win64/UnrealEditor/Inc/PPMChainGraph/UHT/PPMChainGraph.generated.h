// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PPMChainGraph.h"

#ifdef PPMCHAINGRAPH_PPMChainGraph_generated_h
#error "PPMChainGraph.generated.h already included, missing '#pragma once' in PPMChainGraph.h"
#endif
#define PPMCHAINGRAPH_PPMChainGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPPMChainGraphInput ***********************************************
struct Z_Construct_UScriptStruct_FPPMChainGraphInput_Statics;
#define FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraph_Public_PPMChainGraph_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPPMChainGraphInput_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPPMChainGraphInput;
// ********** End ScriptStruct FPPMChainGraphInput *************************************************

// ********** Begin ScriptStruct FPPMChainGraphPostProcessPass *************************************
struct Z_Construct_UScriptStruct_FPPMChainGraphPostProcessPass_Statics;
#define FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraph_Public_PPMChainGraph_h_78_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPPMChainGraphPostProcessPass_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPPMChainGraphPostProcessPass;
// ********** End ScriptStruct FPPMChainGraphPostProcessPass ***************************************

// ********** Begin Class UPPMChainGraph ***********************************************************
struct Z_Construct_UClass_UPPMChainGraph_Statics;
PPMCHAINGRAPH_API UClass* Z_Construct_UClass_UPPMChainGraph_NoRegister();

#define FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraph_Public_PPMChainGraph_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPPMChainGraph(); \
	friend struct ::Z_Construct_UClass_UPPMChainGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PPMCHAINGRAPH_API UClass* ::Z_Construct_UClass_UPPMChainGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UPPMChainGraph, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PPMChainGraph"), Z_Construct_UClass_UPPMChainGraph_NoRegister) \
	DECLARE_SERIALIZER(UPPMChainGraph)


#define FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraph_Public_PPMChainGraph_h_117_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPPMChainGraph(UPPMChainGraph&&) = delete; \
	UPPMChainGraph(const UPPMChainGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPPMChainGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPPMChainGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPPMChainGraph) \
	NO_API virtual ~UPPMChainGraph();


#define FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraph_Public_PPMChainGraph_h_114_PROLOG
#define FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraph_Public_PPMChainGraph_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraph_Public_PPMChainGraph_h_117_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraph_Public_PPMChainGraph_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPPMChainGraph;

// ********** End Class UPPMChainGraph *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraph_Public_PPMChainGraph_h

// ********** Begin Enum EPPMChainGraphPPMInputId **************************************************
#define FOREACH_ENUM_EPPMCHAINGRAPHPPMINPUTID(op) \
	op(EPPMChainGraphPPMInputId::PPMInputMaping_Unassigned) \
	op(EPPMChainGraphPPMInputId::PPMInputMaping_0) \
	op(EPPMChainGraphPPMInputId::PPMInputMaping_1) \
	op(EPPMChainGraphPPMInputId::PPMInputMaping_2) \
	op(EPPMChainGraphPPMInputId::PPMInputMaping_3) \
	op(EPPMChainGraphPPMInputId::PPMInputMaping_4) 

enum class EPPMChainGraphPPMInputId : uint8;
template<> struct TIsUEnumClass<EPPMChainGraphPPMInputId> { enum { Value = true }; };
template<> PPMCHAINGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EPPMChainGraphPPMInputId>();
// ********** End Enum EPPMChainGraphPPMInputId ****************************************************

// ********** Begin Enum EPPMChainGraphOutput ******************************************************
#define FOREACH_ENUM_EPPMCHAINGRAPHOUTPUT(op) \
	op(EPPMChainGraphOutput::PPMOutput_SceneColor) \
	op(EPPMChainGraphOutput::PPMOutput_RenderTarget) 

enum class EPPMChainGraphOutput : uint8;
template<> struct TIsUEnumClass<EPPMChainGraphOutput> { enum { Value = true }; };
template<> PPMCHAINGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EPPMChainGraphOutput>();
// ********** End Enum EPPMChainGraphOutput ********************************************************

// ********** Begin Enum EPPMChainGraphExecutionLocation *******************************************
#define FOREACH_ENUM_EPPMCHAINGRAPHEXECUTIONLOCATION(op) \
	op(EPPMChainGraphExecutionLocation::PrePostProcess) \
	op(EPPMChainGraphExecutionLocation::AfterMotionBlur) \
	op(EPPMChainGraphExecutionLocation::AfterToneMap) \
	op(EPPMChainGraphExecutionLocation::AfterFXAA) \
	op(EPPMChainGraphExecutionLocation::AfterVisualizeDepthOfField) 

enum class EPPMChainGraphExecutionLocation : uint8;
template<> struct TIsUEnumClass<EPPMChainGraphExecutionLocation> { enum { Value = true }; };
template<> PPMCHAINGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EPPMChainGraphExecutionLocation>();
// ********** End Enum EPPMChainGraphExecutionLocation *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
