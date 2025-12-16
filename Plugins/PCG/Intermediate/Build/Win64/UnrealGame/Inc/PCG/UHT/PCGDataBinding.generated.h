// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/PCGDataBinding.h"

#ifdef PCG_PCGDataBinding_generated_h
#error "PCGDataBinding.generated.h already included, missing '#pragma once' in PCGDataBinding.h"
#endif
#define PCG_PCGDataBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGSpawnerPrimitives *********************************************
struct Z_Construct_UScriptStruct_FPCGSpawnerPrimitives_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGDataBinding_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGSpawnerPrimitives_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGSpawnerPrimitives;
// ********** End ScriptStruct FPCGSpawnerPrimitives ***********************************************

// ********** Begin ScriptStruct FPCGDataToDebug ***************************************************
struct Z_Construct_UScriptStruct_FPCGDataToDebug_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGDataBinding_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataToDebug_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGDataToDebug;
// ********** End ScriptStruct FPCGDataToDebug *****************************************************

// ********** Begin Class UPCGDataBinding **********************************************************
struct Z_Construct_UClass_UPCGDataBinding_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDataBinding_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGDataBinding_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDataBinding(); \
	friend struct ::Z_Construct_UClass_UPCGDataBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDataBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDataBinding, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDataBinding_NoRegister) \
	DECLARE_SERIALIZER(UPCGDataBinding)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGDataBinding_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGDataBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDataBinding(UPCGDataBinding&&) = delete; \
	UPCGDataBinding(const UPCGDataBinding&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGDataBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDataBinding); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDataBinding) \
	PCG_API virtual ~UPCGDataBinding();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGDataBinding_h_69_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGDataBinding_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGDataBinding_h_72_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGDataBinding_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDataBinding;

// ********** End Class UPCGDataBinding ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGDataBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
