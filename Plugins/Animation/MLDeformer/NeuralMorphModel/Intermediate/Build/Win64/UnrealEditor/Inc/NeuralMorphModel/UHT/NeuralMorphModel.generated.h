// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NeuralMorphModel.h"

#ifdef NEURALMORPHMODEL_NeuralMorphModel_generated_h
#error "NeuralMorphModel.generated.h already included, missing '#pragma once' in NeuralMorphModel.h"
#endif
#define NEURALMORPHMODEL_NeuralMorphModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNeuralMorphModel ********************************************************
#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModel_h_39_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNeuralMorphModel, NEURALMORPHMODEL_API)


struct Z_Construct_UClass_UNeuralMorphModel_Statics;
NEURALMORPHMODEL_API UClass* Z_Construct_UClass_UNeuralMorphModel_NoRegister();

#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModel_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNeuralMorphModel(); \
	friend struct ::Z_Construct_UClass_UNeuralMorphModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NEURALMORPHMODEL_API UClass* ::Z_Construct_UClass_UNeuralMorphModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UNeuralMorphModel, UMLDeformerMorphModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NeuralMorphModel"), Z_Construct_UClass_UNeuralMorphModel_NoRegister) \
	DECLARE_SERIALIZER(UNeuralMorphModel) \
	FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModel_h_39_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModel_h_39_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNeuralMorphModel(UNeuralMorphModel&&) = delete; \
	UNeuralMorphModel(const UNeuralMorphModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NEURALMORPHMODEL_API, UNeuralMorphModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNeuralMorphModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNeuralMorphModel) \
	NEURALMORPHMODEL_API virtual ~UNeuralMorphModel();


#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModel_h_35_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModel_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModel_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModel_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNeuralMorphModel;

// ********** End Class UNeuralMorphModel **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
