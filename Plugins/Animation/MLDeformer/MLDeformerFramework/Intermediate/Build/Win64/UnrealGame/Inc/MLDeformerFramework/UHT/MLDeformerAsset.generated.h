// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MLDeformerAsset.h"

#ifdef MLDEFORMERFRAMEWORK_MLDeformerAsset_generated_h
#error "MLDeformerAsset.generated.h already included, missing '#pragma once' in MLDeformerAsset.h"
#endif
#define MLDEFORMERFRAMEWORK_MLDeformerAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMLDeformerAsset *********************************************************
#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerAsset_h_22_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMLDeformerAsset, MLDEFORMERFRAMEWORK_API)


struct Z_Construct_UClass_UMLDeformerAsset_Statics;
MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerAsset_NoRegister();

#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerAsset_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMLDeformerAsset(); \
	friend struct ::Z_Construct_UClass_UMLDeformerAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MLDEFORMERFRAMEWORK_API UClass* ::Z_Construct_UClass_UMLDeformerAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UMLDeformerAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MLDeformerFramework"), Z_Construct_UClass_UMLDeformerAsset_NoRegister) \
	DECLARE_SERIALIZER(UMLDeformerAsset) \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerAsset_h_22_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerAsset_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MLDEFORMERFRAMEWORK_API UMLDeformerAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMLDeformerAsset(UMLDeformerAsset&&) = delete; \
	UMLDeformerAsset(const UMLDeformerAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MLDEFORMERFRAMEWORK_API, UMLDeformerAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMLDeformerAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMLDeformerAsset) \
	MLDEFORMERFRAMEWORK_API virtual ~UMLDeformerAsset();


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerAsset_h_18_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerAsset_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerAsset_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerAsset_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMLDeformerAsset;

// ********** End Class UMLDeformerAsset ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
