// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MLDeformerComponent.h"

#ifdef MLDEFORMERFRAMEWORK_MLDeformerComponent_generated_h
#error "MLDeformerComponent.generated.h already included, missing '#pragma once' in MLDeformerComponent.h"
#endif
#define MLDEFORMERFRAMEWORK_MLDeformerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMLDeformerAsset;
class UMLDeformerModelInstance;
class USkeletalMeshComponent;

// ********** Begin Class UMLDeformerComponent *****************************************************
#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_31_RPC_WRAPPERS \
	DECLARE_FUNCTION(execUpdateSkeletalMeshComponent); \
	DECLARE_FUNCTION(execGetSkeletalMeshComponent); \
	DECLARE_FUNCTION(execGetModelInstance); \
	DECLARE_FUNCTION(execFindSkeletalMeshComponent); \
	DECLARE_FUNCTION(execSetDeformerAsset); \
	DECLARE_FUNCTION(execGetDeformerAsset); \
	DECLARE_FUNCTION(execGetQualityLevel); \
	DECLARE_FUNCTION(execSetQualityLevel); \
	DECLARE_FUNCTION(execSetWeight); \
	DECLARE_FUNCTION(execGetWeight);


struct Z_Construct_UClass_UMLDeformerComponent_Statics;
MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerComponent_NoRegister();

#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUMLDeformerComponent(); \
	friend struct ::Z_Construct_UClass_UMLDeformerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MLDEFORMERFRAMEWORK_API UClass* ::Z_Construct_UClass_UMLDeformerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMLDeformerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MLDeformerFramework"), Z_Construct_UClass_UMLDeformerComponent_NoRegister) \
	DECLARE_SERIALIZER(UMLDeformerComponent)


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MLDEFORMERFRAMEWORK_API UMLDeformerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMLDeformerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MLDEFORMERFRAMEWORK_API, UMLDeformerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMLDeformerComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMLDeformerComponent(UMLDeformerComponent&&) = delete; \
	UMLDeformerComponent(const UMLDeformerComponent&) = delete; \
	MLDEFORMERFRAMEWORK_API virtual ~UMLDeformerComponent();


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_27_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_31_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_31_INCLASS \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMLDeformerComponent;

// ********** End Class UMLDeformerComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
