// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XRVisualizationFunctionLibrary.h"

#ifdef XRVISUALIZATION_XRVisualizationFunctionLibrary_generated_h
#error "XRVisualizationFunctionLibrary.generated.h already included, missing '#pragma once' in XRVisualizationFunctionLibrary.h"
#endif
#define XRVISUALIZATION_XRVisualizationFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FXRHandTrackingState;
struct FXRHMDData;
struct FXRMotionControllerState;

// ********** Begin Class UXRVisualizationLoadHelper ***********************************************
struct Z_Construct_UClass_UXRVisualizationLoadHelper_Statics;
XRVISUALIZATION_API UClass* Z_Construct_UClass_UXRVisualizationLoadHelper_NoRegister();

#define FID_Engine_Plugins_Runtime_XR_XRVisualization_Source_XRVisualization_Public_XRVisualizationFunctionLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXRVisualizationLoadHelper(); \
	friend struct ::Z_Construct_UClass_UXRVisualizationLoadHelper_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XRVISUALIZATION_API UClass* ::Z_Construct_UClass_UXRVisualizationLoadHelper_NoRegister(); \
public: \
	DECLARE_CLASS2(UXRVisualizationLoadHelper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XRVisualization"), Z_Construct_UClass_UXRVisualizationLoadHelper_NoRegister) \
	DECLARE_SERIALIZER(UXRVisualizationLoadHelper)


#define FID_Engine_Plugins_Runtime_XR_XRVisualization_Source_XRVisualization_Public_XRVisualizationFunctionLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UXRVisualizationLoadHelper(UXRVisualizationLoadHelper&&) = delete; \
	UXRVisualizationLoadHelper(const UXRVisualizationLoadHelper&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRVisualizationLoadHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRVisualizationLoadHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXRVisualizationLoadHelper) \
	NO_API virtual ~UXRVisualizationLoadHelper();


#define FID_Engine_Plugins_Runtime_XR_XRVisualization_Source_XRVisualization_Public_XRVisualizationFunctionLibrary_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_XR_XRVisualization_Source_XRVisualization_Public_XRVisualizationFunctionLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_XR_XRVisualization_Source_XRVisualization_Public_XRVisualizationFunctionLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_XR_XRVisualization_Source_XRVisualization_Public_XRVisualizationFunctionLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UXRVisualizationLoadHelper;

// ********** End Class UXRVisualizationLoadHelper *************************************************

// ********** Begin Class UXRVisualizationFunctionLibrary ******************************************
#define FID_Engine_Plugins_Runtime_XR_XRVisualization_Source_XRVisualization_Public_XRVisualizationFunctionLibrary_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRenderHandTracking); \
	DECLARE_FUNCTION(execRenderMotionController2); \
	DECLARE_FUNCTION(execRenderHMD);


struct Z_Construct_UClass_UXRVisualizationFunctionLibrary_Statics;
XRVISUALIZATION_API UClass* Z_Construct_UClass_UXRVisualizationFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_XR_XRVisualization_Source_XRVisualization_Public_XRVisualizationFunctionLibrary_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXRVisualizationFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UXRVisualizationFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XRVISUALIZATION_API UClass* ::Z_Construct_UClass_UXRVisualizationFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UXRVisualizationFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XRVisualization"), Z_Construct_UClass_UXRVisualizationFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UXRVisualizationFunctionLibrary)


#define FID_Engine_Plugins_Runtime_XR_XRVisualization_Source_XRVisualization_Public_XRVisualizationFunctionLibrary_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXRVisualizationFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UXRVisualizationFunctionLibrary(UXRVisualizationFunctionLibrary&&) = delete; \
	UXRVisualizationFunctionLibrary(const UXRVisualizationFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRVisualizationFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRVisualizationFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXRVisualizationFunctionLibrary)


#define FID_Engine_Plugins_Runtime_XR_XRVisualization_Source_XRVisualization_Public_XRVisualizationFunctionLibrary_h_30_PROLOG
#define FID_Engine_Plugins_Runtime_XR_XRVisualization_Source_XRVisualization_Public_XRVisualizationFunctionLibrary_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_XR_XRVisualization_Source_XRVisualization_Public_XRVisualizationFunctionLibrary_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_XR_XRVisualization_Source_XRVisualization_Public_XRVisualizationFunctionLibrary_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_XR_XRVisualization_Source_XRVisualization_Public_XRVisualizationFunctionLibrary_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UXRVisualizationFunctionLibrary;

// ********** End Class UXRVisualizationFunctionLibrary ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_XR_XRVisualization_Source_XRVisualization_Public_XRVisualizationFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
