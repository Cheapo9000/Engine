// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshSelectors/PCGMeshSelectorByAttribute.h"

#ifdef PCG_PCGMeshSelectorByAttribute_generated_h
#error "PCGMeshSelectorByAttribute.generated.h already included, missing '#pragma once' in PCGMeshSelectorByAttribute.h"
#endif
#define PCG_PCGMeshSelectorByAttribute_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGMeshSelectorByAttribute **********************************************
struct Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMeshSelectorByAttribute_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorByAttribute_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMeshSelectorByAttribute(); \
	friend struct ::Z_Construct_UClass_UPCGMeshSelectorByAttribute_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMeshSelectorByAttribute_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMeshSelectorByAttribute, UPCGMeshSelectorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMeshSelectorByAttribute_NoRegister) \
	DECLARE_SERIALIZER(UPCGMeshSelectorByAttribute)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorByAttribute_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGMeshSelectorByAttribute(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMeshSelectorByAttribute(UPCGMeshSelectorByAttribute&&) = delete; \
	UPCGMeshSelectorByAttribute(const UPCGMeshSelectorByAttribute&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGMeshSelectorByAttribute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMeshSelectorByAttribute); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMeshSelectorByAttribute) \
	PCG_API virtual ~UPCGMeshSelectorByAttribute();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorByAttribute_h_10_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorByAttribute_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorByAttribute_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorByAttribute_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMeshSelectorByAttribute;

// ********** End Class UPCGMeshSelectorByAttribute ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_MeshSelectors_PCGMeshSelectorByAttribute_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
