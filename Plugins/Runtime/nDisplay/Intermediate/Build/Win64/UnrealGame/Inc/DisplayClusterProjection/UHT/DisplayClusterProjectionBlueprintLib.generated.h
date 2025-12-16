// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/DisplayClusterProjectionBlueprintLib.h"

#ifdef DISPLAYCLUSTERPROJECTION_DisplayClusterProjectionBlueprintLib_generated_h
#error "DisplayClusterProjectionBlueprintLib.generated.h already included, missing '#pragma once' in DisplayClusterProjectionBlueprintLib.h"
#endif
#define DISPLAYCLUSTERPROJECTION_DisplayClusterProjectionBlueprintLib_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IDisplayClusterProjectionBlueprintAPI;
class UCameraComponent;

// ********** Begin Class UDisplayClusterProjectionBlueprintLib ************************************
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_DisplayClusterProjectionBlueprintLib_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCameraPolicySetCamera); \
	DECLARE_FUNCTION(execGetAPI);


struct Z_Construct_UClass_UDisplayClusterProjectionBlueprintLib_Statics;
DISPLAYCLUSTERPROJECTION_API UClass* Z_Construct_UClass_UDisplayClusterProjectionBlueprintLib_NoRegister();

#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_DisplayClusterProjectionBlueprintLib_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisplayClusterProjectionBlueprintLib(); \
	friend struct ::Z_Construct_UClass_UDisplayClusterProjectionBlueprintLib_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISPLAYCLUSTERPROJECTION_API UClass* ::Z_Construct_UClass_UDisplayClusterProjectionBlueprintLib_NoRegister(); \
public: \
	DECLARE_CLASS2(UDisplayClusterProjectionBlueprintLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DisplayClusterProjection"), Z_Construct_UClass_UDisplayClusterProjectionBlueprintLib_NoRegister) \
	DECLARE_SERIALIZER(UDisplayClusterProjectionBlueprintLib)


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_DisplayClusterProjectionBlueprintLib_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDisplayClusterProjectionBlueprintLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDisplayClusterProjectionBlueprintLib(UDisplayClusterProjectionBlueprintLib&&) = delete; \
	UDisplayClusterProjectionBlueprintLib(const UDisplayClusterProjectionBlueprintLib&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayClusterProjectionBlueprintLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterProjectionBlueprintLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayClusterProjectionBlueprintLib) \
	NO_API virtual ~UDisplayClusterProjectionBlueprintLib();


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_DisplayClusterProjectionBlueprintLib_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_DisplayClusterProjectionBlueprintLib_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_DisplayClusterProjectionBlueprintLib_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_DisplayClusterProjectionBlueprintLib_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_DisplayClusterProjectionBlueprintLib_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDisplayClusterProjectionBlueprintLib;

// ********** End Class UDisplayClusterProjectionBlueprintLib **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_DisplayClusterProjectionBlueprintLib_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
