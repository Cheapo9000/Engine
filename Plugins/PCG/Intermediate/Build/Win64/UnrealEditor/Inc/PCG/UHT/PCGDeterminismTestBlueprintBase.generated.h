// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/Determinism/PCGDeterminismTestBlueprintBase.h"

#ifdef PCG_PCGDeterminismTestBlueprintBase_generated_h
#error "PCGDeterminismTestBlueprintBase.generated.h already included, missing '#pragma once' in PCGDeterminismTestBlueprintBase.h"
#endif
#define PCG_PCGDeterminismTestBlueprintBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGNode;
struct FDeterminismTestResult;

// ********** Begin Class UPCGDeterminismTestBlueprintBase *****************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestBlueprintBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PCG_API virtual void ExecuteTest_Implementation(const UPCGNode* InPCGNode, FDeterminismTestResult& InOutTestResult); \
	DECLARE_FUNCTION(execExecuteTest);


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestBlueprintBase_h_17_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UPCGDeterminismTestBlueprintBase_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDeterminismTestBlueprintBase_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestBlueprintBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDeterminismTestBlueprintBase(); \
	friend struct ::Z_Construct_UClass_UPCGDeterminismTestBlueprintBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDeterminismTestBlueprintBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDeterminismTestBlueprintBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDeterminismTestBlueprintBase_NoRegister) \
	DECLARE_SERIALIZER(UPCGDeterminismTestBlueprintBase)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestBlueprintBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGDeterminismTestBlueprintBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDeterminismTestBlueprintBase(UPCGDeterminismTestBlueprintBase&&) = delete; \
	UPCGDeterminismTestBlueprintBase(const UPCGDeterminismTestBlueprintBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGDeterminismTestBlueprintBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDeterminismTestBlueprintBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDeterminismTestBlueprintBase) \
	PCG_API virtual ~UPCGDeterminismTestBlueprintBase();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestBlueprintBase_h_14_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestBlueprintBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestBlueprintBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestBlueprintBase_h_17_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestBlueprintBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestBlueprintBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDeterminismTestBlueprintBase;

// ********** End Class UPCGDeterminismTestBlueprintBase *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestBlueprintBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
