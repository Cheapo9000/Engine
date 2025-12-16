// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InstanceDataPackers/PCGInstanceDataPackerBase.h"

#ifdef PCG_PCGInstanceDataPackerBase_generated_h
#error "PCGInstanceDataPackerBase.generated.h already included, missing '#pragma once' in PCGInstanceDataPackerBase.h"
#endif
#define PCG_PCGInstanceDataPackerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGMetadata;
class UPCGSpatialData;
struct FPCGContext;
struct FPCGMeshInstanceList;
struct FPCGPackedCustomData;

// ********** Begin ScriptStruct FPCGPackedCustomData **********************************************
struct Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGPackedCustomData;
// ********** End ScriptStruct FPCGPackedCustomData ************************************************

// ********** Begin Class UPCGInstanceDataPackerBase ***********************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPackCustomDataFromAttributes); \
	DECLARE_FUNCTION(execAddTypeToPacking); \
	DECLARE_FUNCTION(execPackInstances);


#define FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_33_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UPCGInstanceDataPackerBase_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGInstanceDataPackerBase_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGInstanceDataPackerBase(); \
	friend struct ::Z_Construct_UClass_UPCGInstanceDataPackerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGInstanceDataPackerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGInstanceDataPackerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGInstanceDataPackerBase_NoRegister) \
	DECLARE_SERIALIZER(UPCGInstanceDataPackerBase)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGInstanceDataPackerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGInstanceDataPackerBase(UPCGInstanceDataPackerBase&&) = delete; \
	UPCGInstanceDataPackerBase(const UPCGInstanceDataPackerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGInstanceDataPackerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGInstanceDataPackerBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGInstanceDataPackerBase) \
	PCG_API virtual ~UPCGInstanceDataPackerBase();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_30_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_33_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGInstanceDataPackerBase;

// ********** End Class UPCGInstanceDataPackerBase *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
