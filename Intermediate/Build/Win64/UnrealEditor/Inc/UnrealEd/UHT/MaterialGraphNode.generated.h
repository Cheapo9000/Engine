// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialGraph/MaterialGraphNode.h"

#ifdef UNREALED_MaterialGraphNode_generated_h
#error "MaterialGraphNode.generated.h already included, missing '#pragma once' in MaterialGraphNode.h"
#endif
#define UNREALED_MaterialGraphNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialGraphNode *******************************************************
struct Z_Construct_UClass_UMaterialGraphNode_Statics;
UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialGraphNode(); \
	friend struct ::Z_Construct_UClass_UMaterialGraphNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UMaterialGraphNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialGraphNode, UMaterialGraphNode_Base, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UMaterialGraphNode_NoRegister) \
	DECLARE_SERIALIZER(UMaterialGraphNode)


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UMaterialGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UMaterialGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialGraphNode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialGraphNode(UMaterialGraphNode&&) = delete; \
	UMaterialGraphNode(const UMaterialGraphNode&) = delete; \
	UNREALED_API virtual ~UMaterialGraphNode();


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialGraphNode;

// ********** End Class UMaterialGraphNode *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
