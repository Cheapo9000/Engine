// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaveFunctionCollapseSubsystem.h"

#ifdef WAVEFUNCTIONCOLLAPSE_WaveFunctionCollapseSubsystem_generated_h
#error "WaveFunctionCollapseSubsystem.generated.h already included, missing '#pragma once' in WaveFunctionCollapseSubsystem.h"
#endif
#define WAVEFUNCTIONCOLLAPSE_WaveFunctionCollapseSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FWaveFunctionCollapseQueueElement;
struct FWaveFunctionCollapseTile;

// ********** Begin Class UWaveFunctionCollapseSubsystem *******************************************
#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeriveGridFromTransforms); \
	DECLARE_FUNCTION(execDeriveGridFromTransformBounds); \
	DECLARE_FUNCTION(execObservationPropagation); \
	DECLARE_FUNCTION(execPropagate); \
	DECLARE_FUNCTION(execObserve); \
	DECLARE_FUNCTION(execInitializeWFC); \
	DECLARE_FUNCTION(execCollapse);


struct Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics;
WAVEFUNCTIONCOLLAPSE_API UClass* Z_Construct_UClass_UWaveFunctionCollapseSubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaveFunctionCollapseSubsystem(); \
	friend struct ::Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WAVEFUNCTIONCOLLAPSE_API UClass* ::Z_Construct_UClass_UWaveFunctionCollapseSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaveFunctionCollapseSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WaveFunctionCollapse"), Z_Construct_UClass_UWaveFunctionCollapseSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UWaveFunctionCollapseSubsystem)


#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaveFunctionCollapseSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaveFunctionCollapseSubsystem(UWaveFunctionCollapseSubsystem&&) = delete; \
	UWaveFunctionCollapseSubsystem(const UWaveFunctionCollapseSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaveFunctionCollapseSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveFunctionCollapseSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWaveFunctionCollapseSubsystem) \
	NO_API virtual ~UWaveFunctionCollapseSubsystem();


#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaveFunctionCollapseSubsystem;

// ********** End Class UWaveFunctionCollapseSubsystem *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
