// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshSelectors/PCGMeshSelectorWeighted.h"

#ifdef PCG_PCGMeshSelectorWeighted_generated_h
#error "PCGMeshSelectorWeighted.generated.h already included, missing '#pragma once' in PCGMeshSelectorWeighted.h"
#endif
#define PCG_PCGMeshSelectorWeighted_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGMeshSelectorWeightedEntry *************************************
struct Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeighted_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGMeshSelectorWeightedEntry;
// ********** End ScriptStruct FPCGMeshSelectorWeightedEntry ***************************************

// ********** Begin Class UPCGMeshSelectorWeighted *************************************************
struct Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMeshSelectorWeighted_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeighted_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMeshSelectorWeighted(); \
	friend struct ::Z_Construct_UClass_UPCGMeshSelectorWeighted_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMeshSelectorWeighted_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMeshSelectorWeighted, UPCGMeshSelectorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMeshSelectorWeighted_NoRegister) \
	DECLARE_SERIALIZER(UPCGMeshSelectorWeighted)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeighted_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGMeshSelectorWeighted(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMeshSelectorWeighted(UPCGMeshSelectorWeighted&&) = delete; \
	UPCGMeshSelectorWeighted(const UPCGMeshSelectorWeighted&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGMeshSelectorWeighted); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMeshSelectorWeighted); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMeshSelectorWeighted) \
	PCG_API virtual ~UPCGMeshSelectorWeighted();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeighted_h_73_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeighted_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeighted_h_76_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeighted_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMeshSelectorWeighted;

// ********** End Class UPCGMeshSelectorWeighted ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorWeighted_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
