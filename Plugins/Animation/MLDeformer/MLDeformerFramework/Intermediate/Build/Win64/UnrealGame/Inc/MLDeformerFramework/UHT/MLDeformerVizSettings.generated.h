// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MLDeformerVizSettings.h"

#ifdef MLDEFORMERFRAMEWORK_MLDeformerVizSettings_generated_h
#error "MLDeformerVizSettings.generated.h already included, missing '#pragma once' in MLDeformerVizSettings.h"
#endif
#define MLDEFORMERFRAMEWORK_MLDeformerVizSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMLDeformerCompareActor *******************************************
struct Z_Construct_UScriptStruct_FMLDeformerCompareActor_Statics;
#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerVizSettings_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMLDeformerCompareActor_Statics; \
	MLDEFORMERFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FMLDeformerCompareActor;
// ********** End ScriptStruct FMLDeformerCompareActor *********************************************

// ********** Begin Class UMLDeformerVizSettings ***************************************************
struct Z_Construct_UClass_UMLDeformerVizSettings_Statics;
MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerVizSettings_NoRegister();

#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerVizSettings_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMLDeformerVizSettings(); \
	friend struct ::Z_Construct_UClass_UMLDeformerVizSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MLDEFORMERFRAMEWORK_API UClass* ::Z_Construct_UClass_UMLDeformerVizSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMLDeformerVizSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MLDeformerFramework"), Z_Construct_UClass_UMLDeformerVizSettings_NoRegister) \
	DECLARE_SERIALIZER(UMLDeformerVizSettings)


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerVizSettings_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MLDEFORMERFRAMEWORK_API UMLDeformerVizSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMLDeformerVizSettings(UMLDeformerVizSettings&&) = delete; \
	UMLDeformerVizSettings(const UMLDeformerVizSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MLDEFORMERFRAMEWORK_API, UMLDeformerVizSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMLDeformerVizSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMLDeformerVizSettings) \
	MLDEFORMERFRAMEWORK_API virtual ~UMLDeformerVizSettings();


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerVizSettings_h_54_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerVizSettings_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerVizSettings_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerVizSettings_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMLDeformerVizSettings;

// ********** End Class UMLDeformerVizSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerVizSettings_h

// ********** Begin Enum EMLDeformerVizMode ********************************************************
#define FOREACH_ENUM_EMLDEFORMERVIZMODE(op) \
	op(EMLDeformerVizMode::TrainingData) \
	op(EMLDeformerVizMode::TestData) 

enum class EMLDeformerVizMode : uint8;
template<> struct TIsUEnumClass<EMLDeformerVizMode> { enum { Value = true }; };
template<> MLDEFORMERFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EMLDeformerVizMode>();
// ********** End Enum EMLDeformerVizMode **********************************************************

// ********** Begin Enum EMLDeformerHeatMapMode ****************************************************
#define FOREACH_ENUM_EMLDEFORMERHEATMAPMODE(op) \
	op(EMLDeformerHeatMapMode::Activations) \
	op(EMLDeformerHeatMapMode::GroundTruth) 

enum class EMLDeformerHeatMapMode : uint8;
template<> struct TIsUEnumClass<EMLDeformerHeatMapMode> { enum { Value = true }; };
template<> MLDEFORMERFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EMLDeformerHeatMapMode>();
// ********** End Enum EMLDeformerHeatMapMode ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
