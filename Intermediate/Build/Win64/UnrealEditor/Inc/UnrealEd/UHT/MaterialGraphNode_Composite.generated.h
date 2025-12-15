// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialGraph/MaterialGraphNode_Composite.h"

#ifdef UNREALED_MaterialGraphNode_Composite_generated_h
#error "MaterialGraphNode_Composite.generated.h already included, missing '#pragma once' in MaterialGraphNode_Composite.h"
#endif
#define UNREALED_MaterialGraphNode_Composite_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialGraphNode_Composite *********************************************
struct Z_Construct_UClass_UMaterialGraphNode_Composite_Statics;
UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Composite_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Composite_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialGraphNode_Composite(); \
	friend struct ::Z_Construct_UClass_UMaterialGraphNode_Composite_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UMaterialGraphNode_Composite_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialGraphNode_Composite, UMaterialGraphNode, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UMaterialGraphNode_Composite_NoRegister) \
	DECLARE_SERIALIZER(UMaterialGraphNode_Composite)


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Composite_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UMaterialGraphNode_Composite(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialGraphNode_Composite) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UMaterialGraphNode_Composite); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialGraphNode_Composite); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialGraphNode_Composite(UMaterialGraphNode_Composite&&) = delete; \
	UMaterialGraphNode_Composite(const UMaterialGraphNode_Composite&) = delete; \
	UNREALED_API virtual ~UMaterialGraphNode_Composite();


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Composite_h_12_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Composite_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Composite_h_15_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Composite_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialGraphNode_Composite;

// ********** End Class UMaterialGraphNode_Composite ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Composite_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
