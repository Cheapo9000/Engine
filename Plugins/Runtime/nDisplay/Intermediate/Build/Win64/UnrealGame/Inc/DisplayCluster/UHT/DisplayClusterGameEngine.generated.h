// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DisplayClusterGameEngine.h"

#ifdef DISPLAYCLUSTER_DisplayClusterGameEngine_generated_h
#error "DisplayClusterGameEngine.generated.h already included, missing '#pragma once' in DisplayClusterGameEngine.h"
#endif
#define DISPLAYCLUSTER_DisplayClusterGameEngine_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDisplayClusterGameEngine ************************************************
struct Z_Construct_UClass_UDisplayClusterGameEngine_Statics;
DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterGameEngine_NoRegister();

#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterGameEngine_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisplayClusterGameEngine(); \
	friend struct ::Z_Construct_UClass_UDisplayClusterGameEngine_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISPLAYCLUSTER_API UClass* ::Z_Construct_UClass_UDisplayClusterGameEngine_NoRegister(); \
public: \
	DECLARE_CLASS2(UDisplayClusterGameEngine, UGameEngine, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/DisplayCluster"), Z_Construct_UClass_UDisplayClusterGameEngine_NoRegister) \
	DECLARE_SERIALIZER(UDisplayClusterGameEngine)


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterGameEngine_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDisplayClusterGameEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDisplayClusterGameEngine(UDisplayClusterGameEngine&&) = delete; \
	UDisplayClusterGameEngine(const UDisplayClusterGameEngine&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayClusterGameEngine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterGameEngine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayClusterGameEngine) \
	NO_API virtual ~UDisplayClusterGameEngine();


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterGameEngine_h_24_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterGameEngine_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterGameEngine_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterGameEngine_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDisplayClusterGameEngine;

// ********** End Class UDisplayClusterGameEngine **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterGameEngine_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
