// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialGraph/MaterialGraphNode_Base.h"

#ifdef UNREALED_MaterialGraphNode_Base_generated_h
#error "MaterialGraphNode_Base.generated.h already included, missing '#pragma once' in MaterialGraphNode_Base.h"
#endif
#define UNREALED_MaterialGraphNode_Base_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialGraphNode_Base **************************************************
struct Z_Construct_UClass_UMaterialGraphNode_Base_Statics;
UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Base_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Base_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialGraphNode_Base(); \
	friend struct ::Z_Construct_UClass_UMaterialGraphNode_Base_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UMaterialGraphNode_Base_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialGraphNode_Base, UEdGraphNode, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UMaterialGraphNode_Base_NoRegister) \
	DECLARE_SERIALIZER(UMaterialGraphNode_Base)


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Base_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UMaterialGraphNode_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialGraphNode_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UMaterialGraphNode_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialGraphNode_Base); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialGraphNode_Base(UMaterialGraphNode_Base&&) = delete; \
	UMaterialGraphNode_Base(const UMaterialGraphNode_Base&) = delete; \
	UNREALED_API virtual ~UMaterialGraphNode_Base();


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Base_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Base_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Base_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Base_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialGraphNode_Base;

// ********** End Class UMaterialGraphNode_Base ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Base_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
