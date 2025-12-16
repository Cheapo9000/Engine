// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InstanceDataPackers/PCGSkinnedMeshInstanceDataPackerByAttribute.h"

#ifdef PCG_PCGSkinnedMeshInstanceDataPackerByAttribute_generated_h
#error "PCGSkinnedMeshInstanceDataPackerByAttribute.generated.h already included, missing '#pragma once' in PCGSkinnedMeshInstanceDataPackerByAttribute.h"
#endif
#define PCG_PCGSkinnedMeshInstanceDataPackerByAttribute_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGSkinnedMeshInstanceDataPackerByAttribute *****************************
struct Z_Construct_UClass_UPCGSkinnedMeshInstanceDataPackerByAttribute_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSkinnedMeshInstanceDataPackerByAttribute_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGSkinnedMeshInstanceDataPackerByAttribute_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSkinnedMeshInstanceDataPackerByAttribute(); \
	friend struct ::Z_Construct_UClass_UPCGSkinnedMeshInstanceDataPackerByAttribute_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSkinnedMeshInstanceDataPackerByAttribute_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSkinnedMeshInstanceDataPackerByAttribute, UPCGSkinnedMeshInstanceDataPackerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSkinnedMeshInstanceDataPackerByAttribute_NoRegister) \
	DECLARE_SERIALIZER(UPCGSkinnedMeshInstanceDataPackerByAttribute)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGSkinnedMeshInstanceDataPackerByAttribute_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGSkinnedMeshInstanceDataPackerByAttribute(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSkinnedMeshInstanceDataPackerByAttribute(UPCGSkinnedMeshInstanceDataPackerByAttribute&&) = delete; \
	UPCGSkinnedMeshInstanceDataPackerByAttribute(const UPCGSkinnedMeshInstanceDataPackerByAttribute&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSkinnedMeshInstanceDataPackerByAttribute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSkinnedMeshInstanceDataPackerByAttribute); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSkinnedMeshInstanceDataPackerByAttribute) \
	PCG_API virtual ~UPCGSkinnedMeshInstanceDataPackerByAttribute();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGSkinnedMeshInstanceDataPackerByAttribute_h_10_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGSkinnedMeshInstanceDataPackerByAttribute_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGSkinnedMeshInstanceDataPackerByAttribute_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGSkinnedMeshInstanceDataPackerByAttribute_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSkinnedMeshInstanceDataPackerByAttribute;

// ********** End Class UPCGSkinnedMeshInstanceDataPackerByAttribute *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGSkinnedMeshInstanceDataPackerByAttribute_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
