// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NeuralMorphModelVizSettings.h"

#ifdef NEURALMORPHMODEL_NeuralMorphModelVizSettings_generated_h
#error "NeuralMorphModelVizSettings.generated.h already included, missing '#pragma once' in NeuralMorphModelVizSettings.h"
#endif
#define NEURALMORPHMODEL_NeuralMorphModelVizSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNeuralMorphModelVizSettings *********************************************
#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelVizSettings_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShouldShowMaskVizMode);


struct Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics;
NEURALMORPHMODEL_API UClass* Z_Construct_UClass_UNeuralMorphModelVizSettings_NoRegister();

#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelVizSettings_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNeuralMorphModelVizSettings(); \
	friend struct ::Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NEURALMORPHMODEL_API UClass* ::Z_Construct_UClass_UNeuralMorphModelVizSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UNeuralMorphModelVizSettings, UMLDeformerMorphModelVizSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NeuralMorphModel"), Z_Construct_UClass_UNeuralMorphModelVizSettings_NoRegister) \
	DECLARE_SERIALIZER(UNeuralMorphModelVizSettings)


#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelVizSettings_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NEURALMORPHMODEL_API UNeuralMorphModelVizSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNeuralMorphModelVizSettings(UNeuralMorphModelVizSettings&&) = delete; \
	UNeuralMorphModelVizSettings(const UNeuralMorphModelVizSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NEURALMORPHMODEL_API, UNeuralMorphModelVizSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNeuralMorphModelVizSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNeuralMorphModelVizSettings) \
	NEURALMORPHMODEL_API virtual ~UNeuralMorphModelVizSettings();


#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelVizSettings_h_16_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelVizSettings_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelVizSettings_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelVizSettings_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelVizSettings_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNeuralMorphModelVizSettings;

// ********** End Class UNeuralMorphModelVizSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelVizSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
