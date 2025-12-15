// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialGraph/MaterialGraphNode_Operator.h"

#ifdef UNREALED_MaterialGraphNode_Operator_generated_h
#error "MaterialGraphNode_Operator.generated.h already included, missing '#pragma once' in MaterialGraphNode_Operator.h"
#endif
#define UNREALED_MaterialGraphNode_Operator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialGraphNode_Operator **********************************************
struct Z_Construct_UClass_UMaterialGraphNode_Operator_Statics;
UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Operator_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Operator_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialGraphNode_Operator(); \
	friend struct ::Z_Construct_UClass_UMaterialGraphNode_Operator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UMaterialGraphNode_Operator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialGraphNode_Operator, UMaterialGraphNode, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UMaterialGraphNode_Operator_NoRegister) \
	DECLARE_SERIALIZER(UMaterialGraphNode_Operator)


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Operator_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UMaterialGraphNode_Operator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialGraphNode_Operator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UMaterialGraphNode_Operator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialGraphNode_Operator); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialGraphNode_Operator(UMaterialGraphNode_Operator&&) = delete; \
	UMaterialGraphNode_Operator(const UMaterialGraphNode_Operator&) = delete; \
	UNREALED_API virtual ~UMaterialGraphNode_Operator();


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Operator_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Operator_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Operator_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Operator_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialGraphNode_Operator;

// ********** End Class UMaterialGraphNode_Operator ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Operator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
