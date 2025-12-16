// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DisplayClusterICVFXCameraComponent.h"

#ifdef DISPLAYCLUSTER_DisplayClusterICVFXCameraComponent_generated_h
#error "DisplayClusterICVFXCameraComponent.generated.h already included, missing '#pragma once' in DisplayClusterICVFXCameraComponent.h"
#endif
#define DISPLAYCLUSTER_DisplayClusterICVFXCameraComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCineCameraComponent;
struct FDisplayClusterConfigurationICVFX_CameraDepthOfField;

// ********** Begin Class UDisplayClusterICVFXCameraComponent **************************************
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterICVFXCameraComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDepthOfFieldParameters); \
	DECLARE_FUNCTION(execIsICVFXEnabled); \
	DECLARE_FUNCTION(execGetActualCineCameraComponent);


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterICVFXCameraComponent_h_31_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDisplayClusterICVFXCameraComponent, NO_API)


struct Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics;
DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterICVFXCameraComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisplayClusterICVFXCameraComponent(); \
	friend struct ::Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISPLAYCLUSTER_API UClass* ::Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDisplayClusterICVFXCameraComponent, UCineCameraComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DisplayCluster"), Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_NoRegister) \
	DECLARE_SERIALIZER(UDisplayClusterICVFXCameraComponent) \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterICVFXCameraComponent_h_31_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterICVFXCameraComponent_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDisplayClusterICVFXCameraComponent(UDisplayClusterICVFXCameraComponent&&) = delete; \
	UDisplayClusterICVFXCameraComponent(const UDisplayClusterICVFXCameraComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayClusterICVFXCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterICVFXCameraComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayClusterICVFXCameraComponent) \
	NO_API virtual ~UDisplayClusterICVFXCameraComponent();


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterICVFXCameraComponent_h_27_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterICVFXCameraComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterICVFXCameraComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterICVFXCameraComponent_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterICVFXCameraComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDisplayClusterICVFXCameraComponent;

// ********** End Class UDisplayClusterICVFXCameraComponent ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterICVFXCameraComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
