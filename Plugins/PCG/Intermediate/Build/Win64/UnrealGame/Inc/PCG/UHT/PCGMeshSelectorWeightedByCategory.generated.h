// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshSelectors/PCGMeshSelectorWeightedByCategory.h"

#ifdef PCG_PCGMeshSelectorWeightedByCategory_generated_h
#error "PCGMeshSelectorWeightedByCategory.generated.h already included, missing '#pragma once' in PCGMeshSelectorWeightedByCategory.h"
#endif
#define PCG_PCGMeshSelectorWeightedByCategory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGWeightedByCategoryEntryList ***********************************
struct Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeightedByCategory_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGWeightedByCategoryEntryList;
// ********** End ScriptStruct FPCGWeightedByCategoryEntryList *************************************

// ********** Begin Class UPCGMeshSelectorWeightedByCategory ***************************************
struct Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeightedByCategory_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMeshSelectorWeightedByCategory(); \
	friend struct ::Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMeshSelectorWeightedByCategory, UPCGMeshSelectorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_NoRegister) \
	DECLARE_SERIALIZER(UPCGMeshSelectorWeightedByCategory)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeightedByCategory_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGMeshSelectorWeightedByCategory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMeshSelectorWeightedByCategory(UPCGMeshSelectorWeightedByCategory&&) = delete; \
	UPCGMeshSelectorWeightedByCategory(const UPCGMeshSelectorWeightedByCategory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGMeshSelectorWeightedByCategory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMeshSelectorWeightedByCategory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMeshSelectorWeightedByCategory) \
	PCG_API virtual ~UPCGMeshSelectorWeightedByCategory();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeightedByCategory_h_37_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeightedByCategory_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeightedByCategory_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeightedByCategory_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMeshSelectorWeightedByCategory;

// ********** End Class UPCGMeshSelectorWeightedByCategory *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeightedByCategory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
