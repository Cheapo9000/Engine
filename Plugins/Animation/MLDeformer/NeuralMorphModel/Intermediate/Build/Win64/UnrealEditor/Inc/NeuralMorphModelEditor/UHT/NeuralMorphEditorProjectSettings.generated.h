// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NeuralMorphEditorProjectSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEURALMORPHMODELEDITOR_NeuralMorphEditorProjectSettings_generated_h
#error "NeuralMorphEditorProjectSettings.generated.h already included, missing '#pragma once' in NeuralMorphEditorProjectSettings.h"
#endif
#define NEURALMORPHMODELEDITOR_NeuralMorphEditorProjectSettings_generated_h

#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphEditorProjectSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNeuralMorphEditorProjectSettings(); \
	friend struct Z_Construct_UClass_UNeuralMorphEditorProjectSettings_Statics; \
public: \
	DECLARE_CLASS(UNeuralMorphEditorProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NeuralMorphModelEditor"), NO_API) \
	DECLARE_SERIALIZER(UNeuralMorphEditorProjectSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphEditorProjectSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNeuralMorphEditorProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNeuralMorphEditorProjectSettings(UNeuralMorphEditorProjectSettings&&); \
	UNeuralMorphEditorProjectSettings(const UNeuralMorphEditorProjectSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNeuralMorphEditorProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNeuralMorphEditorProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNeuralMorphEditorProjectSettings) \
	NO_API virtual ~UNeuralMorphEditorProjectSettings();


#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphEditorProjectSettings_h_10_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphEditorProjectSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphEditorProjectSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphEditorProjectSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEURALMORPHMODELEDITOR_API UClass* StaticClass<class UNeuralMorphEditorProjectSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModelEditor_Public_NeuralMorphEditorProjectSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
