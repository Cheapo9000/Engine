// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MLDeformerModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MLDEFORMERFRAMEWORK_MLDeformerModel_generated_h
#error "MLDeformerModel.generated.h already included, missing '#pragma once' in MLDeformerModel.h"
#endif
#define MLDEFORMERFRAMEWORK_MLDeformerModel_generated_h

#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModel_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTrainingDevice); \
	DECLARE_FUNCTION(execGetTrainingDevice); \
	DECLARE_FUNCTION(execGetTrainingDeviceList);


#if WITH_EDITOR
#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModel_h_101_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetVertexAttributeNames);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModel_h_101_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModel_h_101_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMLDeformerModel, NO_API)


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModel_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMLDeformerModel(); \
	friend struct Z_Construct_UClass_UMLDeformerModel_Statics; \
public: \
	DECLARE_CLASS(UMLDeformerModel, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MLDeformerFramework"), NO_API) \
	DECLARE_SERIALIZER(UMLDeformerModel) \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModel_h_101_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UMLDeformerModel*>(this); }


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModel_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMLDeformerModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMLDeformerModel(UMLDeformerModel&&); \
	UMLDeformerModel(const UMLDeformerModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMLDeformerModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMLDeformerModel); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMLDeformerModel)


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModel_h_96_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModel_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModel_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModel_h_101_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModel_h_101_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModel_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MLDEFORMERFRAMEWORK_API UClass* StaticClass<class UMLDeformerModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModel_h


#define FOREACH_ENUM_EMLDEFORMERMASKCHANNEL(op) \
	op(EMLDeformerMaskChannel::Disabled) \
	op(EMLDeformerMaskChannel::VertexColorRed) \
	op(EMLDeformerMaskChannel::VertexColorGreen) \
	op(EMLDeformerMaskChannel::VertexColorBlue) \
	op(EMLDeformerMaskChannel::VertexColorAlpha) \
	op(EMLDeformerMaskChannel::VertexAttribute) 

enum class EMLDeformerMaskChannel : uint8;
template<> struct TIsUEnumClass<EMLDeformerMaskChannel> { enum { Value = true }; };
template<> MLDEFORMERFRAMEWORK_API UEnum* StaticEnum<EMLDeformerMaskChannel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
