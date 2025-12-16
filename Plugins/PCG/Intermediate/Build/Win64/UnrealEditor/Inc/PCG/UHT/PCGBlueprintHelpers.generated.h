// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Helpers/PCGBlueprintHelpers.h"

#ifdef PCG_PCGBlueprintHelpers_generated_h
#error "PCGBlueprintHelpers.generated.h already included, missing '#pragma once' in PCGBlueprintHelpers.h"
#endif
#define PCG_PCGBlueprintHelpers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class UPCGComponent;
class UPCGData;
class UPCGGenerateGraphAsync;
class UPCGGraphInterface;
class UPCGSettings;
class UPCGSpatialData;
enum class EPCGGenerationStatus : uint8;
struct FPCGBlueprintContextHandle;
struct FPCGContext;
struct FPCGLandscapeLayerWeight;
struct FPCGPoint;
struct FRandomStream;

// ********** Begin Delegate FPCGOnGenerateGraphAsyncCompleted *************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_26_DELEGATE \
PCG_API void FPCGOnGenerateGraphAsyncCompleted_DelegateWrapper(const FMulticastScriptDelegate& PCGOnGenerateGraphAsyncCompleted, EPCGGenerationStatus Status);


// ********** End Delegate FPCGOnGenerateGraphAsyncCompleted ***************************************

// ********** Begin Class UPCGGenerateGraphAsync ***************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateGraphAsync);


struct Z_Construct_UClass_UPCGGenerateGraphAsync_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGGenerateGraphAsync_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGenerateGraphAsync(); \
	friend struct ::Z_Construct_UClass_UPCGGenerateGraphAsync_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGGenerateGraphAsync_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGenerateGraphAsync, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGGenerateGraphAsync_NoRegister) \
	DECLARE_SERIALIZER(UPCGGenerateGraphAsync)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGGenerateGraphAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGenerateGraphAsync(UPCGGenerateGraphAsync&&) = delete; \
	UPCGGenerateGraphAsync(const UPCGGenerateGraphAsync&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGGenerateGraphAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGenerateGraphAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGenerateGraphAsync) \
	PCG_API virtual ~UPCGGenerateGraphAsync();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_28_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGenerateGraphAsync;

// ********** End Class UPCGGenerateGraphAsync *****************************************************

// ********** Begin Class UPCGBlueprintHelpers *****************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDuplicateDataWithContext); \
	DECLARE_FUNCTION(execDuplicateData); \
	DECLARE_FUNCTION(execRefreshPCGRuntimeComponent); \
	DECLARE_FUNCTION(execFlushPCGCache); \
	DECLARE_FUNCTION(execGetTaskIdWithContext); \
	DECLARE_FUNCTION(execGetTaskId); \
	DECLARE_FUNCTION(execGetInterpolatedPCGLandscapeLayerWeights); \
	DECLARE_FUNCTION(execCreatePCGDataFromActor); \
	DECLARE_FUNCTION(execGetActorLocalBoundsPCG); \
	DECLARE_FUNCTION(execGetActorBoundsPCG); \
	DECLARE_FUNCTION(execGetTransformedBounds); \
	DECLARE_FUNCTION(execGetLocalCenter); \
	DECLARE_FUNCTION(execSetLocalCenter); \
	DECLARE_FUNCTION(execGetExtents); \
	DECLARE_FUNCTION(execSetExtents); \
	DECLARE_FUNCTION(execGetTargetActorWithContext); \
	DECLARE_FUNCTION(execGetTargetActor); \
	DECLARE_FUNCTION(execGetOriginalComponentWithContext); \
	DECLARE_FUNCTION(execGetOriginalComponent); \
	DECLARE_FUNCTION(execGetComponentWithContext); \
	DECLARE_FUNCTION(execGetComponent); \
	DECLARE_FUNCTION(execGetInputDataWithContext); \
	DECLARE_FUNCTION(execGetInputData); \
	DECLARE_FUNCTION(execGetActorDataWithContext); \
	DECLARE_FUNCTION(execGetActorData); \
	DECLARE_FUNCTION(execGetSettingsWithContext); \
	DECLARE_FUNCTION(execGetSettings); \
	DECLARE_FUNCTION(execGetRandomStreamFromTwoPoints); \
	DECLARE_FUNCTION(execGetRandomStreamFromPoint); \
	DECLARE_FUNCTION(execSetSeedFromPosition); \
	DECLARE_FUNCTION(execComputeSeedFromPosition);


struct Z_Construct_UClass_UPCGBlueprintHelpers_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGBlueprintHelpers_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGBlueprintHelpers(); \
	friend struct ::Z_Construct_UClass_UPCGBlueprintHelpers_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGBlueprintHelpers_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGBlueprintHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGBlueprintHelpers_NoRegister) \
	DECLARE_SERIALIZER(UPCGBlueprintHelpers)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGBlueprintHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGBlueprintHelpers(UPCGBlueprintHelpers&&) = delete; \
	UPCGBlueprintHelpers(const UPCGBlueprintHelpers&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGBlueprintHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGBlueprintHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGBlueprintHelpers) \
	PCG_API virtual ~UPCGBlueprintHelpers();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_60_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_63_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGBlueprintHelpers;

// ********** End Class UPCGBlueprintHelpers *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
