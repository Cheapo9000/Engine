// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialGraph/MaterialGraph.h"

#ifdef UNREALED_MaterialGraph_generated_h
#error "MaterialGraph.generated.h already included, missing '#pragma once' in MaterialGraph.h"
#endif
#define UNREALED_MaterialGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialGraph ***********************************************************
struct Z_Construct_UClass_UMaterialGraph_Statics;
UNREALED_API UClass* Z_Construct_UClass_UMaterialGraph_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_157_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialGraph(); \
	friend struct ::Z_Construct_UClass_UMaterialGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UMaterialGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialGraph, UEdGraph, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UMaterialGraph_NoRegister) \
	DECLARE_SERIALIZER(UMaterialGraph)


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_157_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UMaterialGraph(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialGraph) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialGraph); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialGraph(UMaterialGraph&&) = delete; \
	UMaterialGraph(const UMaterialGraph&) = delete;


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_154_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_157_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_157_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_157_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialGraph;

// ********** End Class UMaterialGraph *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
