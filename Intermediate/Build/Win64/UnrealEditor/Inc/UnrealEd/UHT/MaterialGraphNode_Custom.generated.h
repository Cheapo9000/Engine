// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialGraph/MaterialGraphNode_Custom.h"

#ifdef UNREALED_MaterialGraphNode_Custom_generated_h
#error "MaterialGraphNode_Custom.generated.h already included, missing '#pragma once' in MaterialGraphNode_Custom.h"
#endif
#define UNREALED_MaterialGraphNode_Custom_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialGraphNode_Custom ************************************************
struct Z_Construct_UClass_UMaterialGraphNode_Custom_Statics;
UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Custom_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Custom_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialGraphNode_Custom(); \
	friend struct ::Z_Construct_UClass_UMaterialGraphNode_Custom_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UMaterialGraphNode_Custom_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialGraphNode_Custom, UMaterialGraphNode, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UMaterialGraphNode_Custom_NoRegister) \
	DECLARE_SERIALIZER(UMaterialGraphNode_Custom)


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Custom_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UMaterialGraphNode_Custom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialGraphNode_Custom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UMaterialGraphNode_Custom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialGraphNode_Custom); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialGraphNode_Custom(UMaterialGraphNode_Custom&&) = delete; \
	UMaterialGraphNode_Custom(const UMaterialGraphNode_Custom&) = delete; \
	UNREALED_API virtual ~UMaterialGraphNode_Custom();


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Custom_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Custom_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Custom_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Custom_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialGraphNode_Custom;

// ********** End Class UMaterialGraphNode_Custom **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Custom_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
