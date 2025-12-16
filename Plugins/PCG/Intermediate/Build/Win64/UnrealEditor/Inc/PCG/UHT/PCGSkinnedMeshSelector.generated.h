// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshSelectors/PCGSkinnedMeshSelector.h"

#ifdef PCG_PCGSkinnedMeshSelector_generated_h
#error "PCGSkinnedMeshSelector.generated.h already included, missing '#pragma once' in PCGSkinnedMeshSelector.h"
#endif
#define PCG_PCGSkinnedMeshSelector_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGSkinnedMeshInstance *******************************************
struct Z_Construct_UScriptStruct_FPCGSkinnedMeshInstance_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGSkinnedMeshSelector_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGSkinnedMeshInstance_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGSkinnedMeshInstance;
// ********** End ScriptStruct FPCGSkinnedMeshInstance *********************************************

// ********** Begin ScriptStruct FPCGSkinnedMeshInstanceList ***************************************
struct Z_Construct_UScriptStruct_FPCGSkinnedMeshInstanceList_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGSkinnedMeshSelector_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGSkinnedMeshInstanceList_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGSkinnedMeshInstanceList;
// ********** End ScriptStruct FPCGSkinnedMeshInstanceList *****************************************

// ********** Begin Class UPCGSkinnedMeshSelector **************************************************
struct Z_Construct_UClass_UPCGSkinnedMeshSelector_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSkinnedMeshSelector_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGSkinnedMeshSelector_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSkinnedMeshSelector(); \
	friend struct ::Z_Construct_UClass_UPCGSkinnedMeshSelector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSkinnedMeshSelector_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSkinnedMeshSelector, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSkinnedMeshSelector_NoRegister) \
	DECLARE_SERIALIZER(UPCGSkinnedMeshSelector)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGSkinnedMeshSelector_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGSkinnedMeshSelector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSkinnedMeshSelector(UPCGSkinnedMeshSelector&&) = delete; \
	UPCGSkinnedMeshSelector(const UPCGSkinnedMeshSelector&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSkinnedMeshSelector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSkinnedMeshSelector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSkinnedMeshSelector) \
	PCG_API virtual ~UPCGSkinnedMeshSelector();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGSkinnedMeshSelector_h_62_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGSkinnedMeshSelector_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGSkinnedMeshSelector_h_65_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGSkinnedMeshSelector_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSkinnedMeshSelector;

// ********** End Class UPCGSkinnedMeshSelector ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGSkinnedMeshSelector_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
