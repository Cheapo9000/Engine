// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NeuralMorphInputInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEURALMORPHMODEL_NeuralMorphInputInfo_generated_h
#error "NeuralMorphInputInfo.generated.h already included, missing '#pragma once' in NeuralMorphInputInfo.h"
#endif
#define NEURALMORPHMODEL_NeuralMorphInputInfo_generated_h

#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphInputInfo_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNeuralMorphInputInfo(); \
	friend struct Z_Construct_UClass_UNeuralMorphInputInfo_Statics; \
public: \
	DECLARE_CLASS(UNeuralMorphInputInfo, UMLDeformerMorphModelInputInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NeuralMorphModel"), NO_API) \
	DECLARE_SERIALIZER(UNeuralMorphInputInfo)


#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphInputInfo_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNeuralMorphInputInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNeuralMorphInputInfo(UNeuralMorphInputInfo&&); \
	UNeuralMorphInputInfo(const UNeuralMorphInputInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNeuralMorphInputInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNeuralMorphInputInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNeuralMorphInputInfo) \
	NO_API virtual ~UNeuralMorphInputInfo();


#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphInputInfo_h_12_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphInputInfo_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphInputInfo_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphInputInfo_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEURALMORPHMODEL_API UClass* StaticClass<class UNeuralMorphInputInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphInputInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
