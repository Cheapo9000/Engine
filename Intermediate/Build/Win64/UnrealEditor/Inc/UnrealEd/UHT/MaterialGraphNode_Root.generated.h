// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialGraph/MaterialGraphNode_Root.h"

#ifdef UNREALED_MaterialGraphNode_Root_generated_h
#error "MaterialGraphNode_Root.generated.h already included, missing '#pragma once' in MaterialGraphNode_Root.h"
#endif
#define UNREALED_MaterialGraphNode_Root_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialGraphNode_Root **************************************************
struct Z_Construct_UClass_UMaterialGraphNode_Root_Statics;
UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Root_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Root_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialGraphNode_Root(); \
	friend struct ::Z_Construct_UClass_UMaterialGraphNode_Root_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UMaterialGraphNode_Root_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialGraphNode_Root, UMaterialGraphNode_Base, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UMaterialGraphNode_Root_NoRegister) \
	DECLARE_SERIALIZER(UMaterialGraphNode_Root)


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Root_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UMaterialGraphNode_Root(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialGraphNode_Root) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UMaterialGraphNode_Root); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialGraphNode_Root); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialGraphNode_Root(UMaterialGraphNode_Root&&) = delete; \
	UMaterialGraphNode_Root(const UMaterialGraphNode_Root&) = delete; \
	UNREALED_API virtual ~UMaterialGraphNode_Root();


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Root_h_12_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Root_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Root_h_15_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Root_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialGraphNode_Root;

// ********** End Class UMaterialGraphNode_Root ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Root_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
