// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialGraph/MaterialGraphNode_Comment.h"

#ifdef UNREALED_MaterialGraphNode_Comment_generated_h
#error "MaterialGraphNode_Comment.generated.h already included, missing '#pragma once' in MaterialGraphNode_Comment.h"
#endif
#define UNREALED_MaterialGraphNode_Comment_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialGraphNode_Comment ***********************************************
struct Z_Construct_UClass_UMaterialGraphNode_Comment_Statics;
UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Comment_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Comment_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialGraphNode_Comment(); \
	friend struct ::Z_Construct_UClass_UMaterialGraphNode_Comment_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UMaterialGraphNode_Comment_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialGraphNode_Comment, UEdGraphNode_Comment, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UMaterialGraphNode_Comment_NoRegister) \
	DECLARE_SERIALIZER(UMaterialGraphNode_Comment)


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Comment_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UMaterialGraphNode_Comment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialGraphNode_Comment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UMaterialGraphNode_Comment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialGraphNode_Comment); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialGraphNode_Comment(UMaterialGraphNode_Comment&&) = delete; \
	UMaterialGraphNode_Comment(const UMaterialGraphNode_Comment&) = delete; \
	UNREALED_API virtual ~UMaterialGraphNode_Comment();


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Comment_h_12_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Comment_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Comment_h_15_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Comment_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialGraphNode_Comment;

// ********** End Class UMaterialGraphNode_Comment *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Comment_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
