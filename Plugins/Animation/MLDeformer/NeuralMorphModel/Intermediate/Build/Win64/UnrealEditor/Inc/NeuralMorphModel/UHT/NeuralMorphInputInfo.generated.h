// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NeuralMorphInputInfo.h"

#ifdef NEURALMORPHMODEL_NeuralMorphInputInfo_generated_h
#error "NeuralMorphInputInfo.generated.h already included, missing '#pragma once' in NeuralMorphInputInfo.h"
#endif
#define NEURALMORPHMODEL_NeuralMorphInputInfo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNeuralMorphInputInfo ****************************************************
struct Z_Construct_UClass_UNeuralMorphInputInfo_Statics;
NEURALMORPHMODEL_API UClass* Z_Construct_UClass_UNeuralMorphInputInfo_NoRegister();

#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphInputInfo_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNeuralMorphInputInfo(); \
	friend struct ::Z_Construct_UClass_UNeuralMorphInputInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NEURALMORPHMODEL_API UClass* ::Z_Construct_UClass_UNeuralMorphInputInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(UNeuralMorphInputInfo, UMLDeformerMorphModelInputInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NeuralMorphModel"), Z_Construct_UClass_UNeuralMorphInputInfo_NoRegister) \
	DECLARE_SERIALIZER(UNeuralMorphInputInfo)


#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphInputInfo_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NEURALMORPHMODEL_API UNeuralMorphInputInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNeuralMorphInputInfo(UNeuralMorphInputInfo&&) = delete; \
	UNeuralMorphInputInfo(const UNeuralMorphInputInfo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NEURALMORPHMODEL_API, UNeuralMorphInputInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNeuralMorphInputInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNeuralMorphInputInfo) \
	NEURALMORPHMODEL_API virtual ~UNeuralMorphInputInfo();


#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphInputInfo_h_15_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphInputInfo_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphInputInfo_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphInputInfo_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNeuralMorphInputInfo;

// ********** End Class UNeuralMorphInputInfo ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphInputInfo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
