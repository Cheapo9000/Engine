// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProfilingDebugging/HealthSnapshot.h"

#ifdef ENGINE_HealthSnapshot_generated_h
#error "HealthSnapshot.generated.h already included, missing '#pragma once' in HealthSnapshot.h"
#endif
#define ENGINE_HealthSnapshot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHealthSnapshotBlueprintLibrary ******************************************
#define FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_RPC_WRAPPERS \
	DECLARE_FUNCTION(execLogPerformanceSnapshot); \
	DECLARE_FUNCTION(execStopPerformanceSnapshots); \
	DECLARE_FUNCTION(execStartPerformanceSnapshots);


struct Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_Statics;
ENGINE_API UClass* Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHealthSnapshotBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UHealthSnapshotBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UHealthSnapshotBlueprintLibrary)


#define FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UHealthSnapshotBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthSnapshotBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UHealthSnapshotBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthSnapshotBlueprintLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHealthSnapshotBlueprintLibrary(UHealthSnapshotBlueprintLibrary&&) = delete; \
	UHealthSnapshotBlueprintLibrary(const UHealthSnapshotBlueprintLibrary&) = delete; \
	ENGINE_API virtual ~UHealthSnapshotBlueprintLibrary();


#define FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHealthSnapshotBlueprintLibrary;

// ********** End Class UHealthSnapshotBlueprintLibrary ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
