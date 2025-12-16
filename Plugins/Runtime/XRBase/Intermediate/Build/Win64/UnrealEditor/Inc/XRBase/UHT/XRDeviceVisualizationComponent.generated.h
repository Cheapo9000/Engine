// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XRDeviceVisualizationComponent.h"

#ifdef XRBASE_XRDeviceVisualizationComponent_generated_h
#error "XRDeviceVisualizationComponent.generated.h already included, missing '#pragma once' in XRDeviceVisualizationComponent.h"
#endif
#define XRBASE_XRDeviceVisualizationComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;

// ********** Begin Class UXRDeviceVisualizationComponent ******************************************
#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetIsRenderingActive); \
	DECLARE_FUNCTION(execSetCustomDisplayMesh); \
	DECLARE_FUNCTION(execSetDisplayModelSource); \
	DECLARE_FUNCTION(execSetIsVisualizationActive);


struct Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics;
XRBASE_API UClass* Z_Construct_UClass_UXRDeviceVisualizationComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUXRDeviceVisualizationComponent(); \
	friend struct ::Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XRBASE_API UClass* ::Z_Construct_UClass_UXRDeviceVisualizationComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UXRDeviceVisualizationComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XRBase"), Z_Construct_UClass_UXRDeviceVisualizationComponent_NoRegister) \
	DECLARE_SERIALIZER(UXRDeviceVisualizationComponent)


#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	XRBASE_API UXRDeviceVisualizationComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXRDeviceVisualizationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(XRBASE_API, UXRDeviceVisualizationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRDeviceVisualizationComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UXRDeviceVisualizationComponent(UXRDeviceVisualizationComponent&&) = delete; \
	UXRDeviceVisualizationComponent(const UXRDeviceVisualizationComponent&) = delete; \
	XRBASE_API virtual ~UXRDeviceVisualizationComponent();


#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h_20_INCLASS \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UXRDeviceVisualizationComponent;

// ********** End Class UXRDeviceVisualizationComponent ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
