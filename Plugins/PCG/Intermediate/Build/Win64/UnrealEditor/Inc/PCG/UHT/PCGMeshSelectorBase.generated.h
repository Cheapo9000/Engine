// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshSelectors/PCGMeshSelectorBase.h"

#ifdef PCG_PCGMeshSelectorBase_generated_h
#error "PCGMeshSelectorBase.generated.h already included, missing '#pragma once' in PCGMeshSelectorBase.h"
#endif
#define PCG_PCGMeshSelectorBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGMeshInstanceList **********************************************
struct Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorBase_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGMeshInstanceList_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGMeshInstanceList;
// ********** End ScriptStruct FPCGMeshInstanceList ************************************************

// ********** Begin Class UPCGMeshSelectorBase *****************************************************
struct Z_Construct_UClass_UPCGMeshSelectorBase_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMeshSelectorBase_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorBase_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMeshSelectorBase(); \
	friend struct ::Z_Construct_UClass_UPCGMeshSelectorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMeshSelectorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMeshSelectorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMeshSelectorBase_NoRegister) \
	DECLARE_SERIALIZER(UPCGMeshSelectorBase)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorBase_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGMeshSelectorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMeshSelectorBase(UPCGMeshSelectorBase&&) = delete; \
	UPCGMeshSelectorBase(const UPCGMeshSelectorBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGMeshSelectorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMeshSelectorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMeshSelectorBase) \
	PCG_API virtual ~UPCGMeshSelectorBase();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorBase_h_66_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorBase_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorBase_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorBase_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMeshSelectorBase;

// ********** End Class UPCGMeshSelectorBase *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
