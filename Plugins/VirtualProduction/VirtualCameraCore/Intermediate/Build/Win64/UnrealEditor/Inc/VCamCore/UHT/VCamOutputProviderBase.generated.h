// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Output/VCamOutputProviderBase.h"

#ifdef VCAMCORE_VCamOutputProviderBase_generated_h
#error "VCamOutputProviderBase.generated.h already included, missing '#pragma once' in VCamOutputProviderBase.h"
#endif
#define VCAMCORE_VCamOutputProviderBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UTextureRenderTarget2D;
class UUserWidget;
class UVCamComponent;
enum class EVCamTargetViewportID : uint8;

// ********** Begin Delegate FActivationDelegate_Blueprint *****************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_56_DELEGATE \
static void FActivationDelegate_Blueprint_DelegateWrapper(const FMulticastScriptDelegate& ActivationDelegate_Blueprint, bool bNewIsActive);


// ********** End Delegate FActivationDelegate_Blueprint *******************************************

// ********** Begin Class UVCamOutputProviderBase **************************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetFinalOutputRenderTarget); \
	DECLARE_FUNCTION(execGetFinalOutputRenderTarget); \
	DECLARE_FUNCTION(execCanToggleActivation); \
	DECLARE_FUNCTION(execGetVCamComponent); \
	DECLARE_FUNCTION(execSetUMGClass); \
	DECLARE_FUNCTION(execGetUMGClass); \
	DECLARE_FUNCTION(execSetTargetViewport); \
	DECLARE_FUNCTION(execGetTargetViewport); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execSetActive);


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_51_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVCamOutputProviderBase, NO_API)


struct Z_Construct_UClass_UVCamOutputProviderBase_Statics;
VCAMCORE_API UClass* Z_Construct_UClass_UVCamOutputProviderBase_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamOutputProviderBase(); \
	friend struct ::Z_Construct_UClass_UVCamOutputProviderBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCORE_API UClass* ::Z_Construct_UClass_UVCamOutputProviderBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UVCamOutputProviderBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VCamCore"), Z_Construct_UClass_UVCamOutputProviderBase_NoRegister) \
	DECLARE_SERIALIZER(UVCamOutputProviderBase) \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_51_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_51_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVCamOutputProviderBase(UVCamOutputProviderBase&&) = delete; \
	UVCamOutputProviderBase(const UVCamOutputProviderBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamOutputProviderBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamOutputProviderBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UVCamOutputProviderBase) \
	NO_API virtual ~UVCamOutputProviderBase();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_48_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVCamOutputProviderBase;

// ********** End Class UVCamOutputProviderBase ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
