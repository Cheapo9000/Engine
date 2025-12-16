// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InstanceDataPackers/PCGSkinnedMeshInstanceDataPackerBase.h"

#ifdef PCG_PCGSkinnedMeshInstanceDataPackerBase_generated_h
#error "PCGSkinnedMeshInstanceDataPackerBase.generated.h already included, missing '#pragma once' in PCGSkinnedMeshInstanceDataPackerBase.h"
#endif
#define PCG_PCGSkinnedMeshInstanceDataPackerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGMetadata;
class UPCGSpatialData;
struct FPCGContext;
struct FPCGSkinnedMeshInstanceList;
struct FPCGSkinnedMeshPackedCustomData;

// ********** Begin ScriptStruct FPCGSkinnedMeshPackedCustomData ***********************************
struct Z_Construct_UScriptStruct_FPCGSkinnedMeshPackedCustomData_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGSkinnedMeshInstanceDataPackerBase_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGSkinnedMeshPackedCustomData_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGSkinnedMeshPackedCustomData;
// ********** End ScriptStruct FPCGSkinnedMeshPackedCustomData *************************************

// ********** Begin Class UPCGSkinnedMeshInstanceDataPackerBase ************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGSkinnedMeshInstanceDataPackerBase_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPackCustomDataFromAttributes); \
	DECLARE_FUNCTION(execAddTypeToPacking); \
	DECLARE_FUNCTION(execPackInstances);


#define FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGSkinnedMeshInstanceDataPackerBase_h_36_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UPCGSkinnedMeshInstanceDataPackerBase_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSkinnedMeshInstanceDataPackerBase_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGSkinnedMeshInstanceDataPackerBase_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSkinnedMeshInstanceDataPackerBase(); \
	friend struct ::Z_Construct_UClass_UPCGSkinnedMeshInstanceDataPackerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSkinnedMeshInstanceDataPackerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSkinnedMeshInstanceDataPackerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSkinnedMeshInstanceDataPackerBase_NoRegister) \
	DECLARE_SERIALIZER(UPCGSkinnedMeshInstanceDataPackerBase)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGSkinnedMeshInstanceDataPackerBase_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGSkinnedMeshInstanceDataPackerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSkinnedMeshInstanceDataPackerBase(UPCGSkinnedMeshInstanceDataPackerBase&&) = delete; \
	UPCGSkinnedMeshInstanceDataPackerBase(const UPCGSkinnedMeshInstanceDataPackerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSkinnedMeshInstanceDataPackerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSkinnedMeshInstanceDataPackerBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSkinnedMeshInstanceDataPackerBase) \
	PCG_API virtual ~UPCGSkinnedMeshInstanceDataPackerBase();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGSkinnedMeshInstanceDataPackerBase_h_33_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGSkinnedMeshInstanceDataPackerBase_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGSkinnedMeshInstanceDataPackerBase_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGSkinnedMeshInstanceDataPackerBase_h_36_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGSkinnedMeshInstanceDataPackerBase_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGSkinnedMeshInstanceDataPackerBase_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSkinnedMeshInstanceDataPackerBase;

// ********** End Class UPCGSkinnedMeshInstanceDataPackerBase **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGSkinnedMeshInstanceDataPackerBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
