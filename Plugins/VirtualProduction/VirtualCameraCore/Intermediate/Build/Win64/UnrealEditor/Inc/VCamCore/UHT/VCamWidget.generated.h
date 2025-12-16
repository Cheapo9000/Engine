// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/VCamWidget.h"

#ifdef VCAMCORE_VCamWidget_generated_h
#error "VCamWidget.generated.h already included, missing '#pragma once' in VCamWidget.h"
#endif
#define VCAMCORE_VCamWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction;
class UVCamComponent;
class UVCamModifier;
enum class EConnectionUpdateResult : uint8;
struct FVCamConnectionTargetSettings;

// ********** Begin Delegate FConnectionsReinitializedDelegate_Blueprint ***************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_62_DELEGATE \
static void FConnectionsReinitializedDelegate_Blueprint_DelegateWrapper(const FMulticastScriptDelegate& ConnectionsReinitializedDelegate_Blueprint);


// ********** End Delegate FConnectionsReinitializedDelegate_Blueprint *****************************

// ********** Begin Class UVCamWidget **************************************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnInitializeConnections_Implementation(UVCamComponent* VCam); \
	DECLARE_FUNCTION(execOnInitializeConnections); \
	DECLARE_FUNCTION(execUpdateConnectionTargets); \
	DECLARE_FUNCTION(execReinitializeConnections);


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_29_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UVCamWidget_Statics;
VCAMCORE_API UClass* Z_Construct_UClass_UVCamWidget_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamWidget(); \
	friend struct ::Z_Construct_UClass_UVCamWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCORE_API UClass* ::Z_Construct_UClass_UVCamWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UVCamWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VCamCore"), Z_Construct_UClass_UVCamWidget_NoRegister) \
	DECLARE_SERIALIZER(UVCamWidget)


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVCamWidget(UVCamWidget&&) = delete; \
	UVCamWidget(const UVCamWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamWidget) \
	NO_API virtual ~UVCamWidget();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_26_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_29_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVCamWidget;

// ********** End Class UVCamWidget ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h

// ********** Begin Enum EConnectionUpdateResult ***************************************************
#define FOREACH_ENUM_ECONNECTIONUPDATERESULT(op) \
	op(EConnectionUpdateResult::DidUpdateConnections) \
	op(EConnectionUpdateResult::NoConnectionsUpdated) 

enum class EConnectionUpdateResult : uint8;
template<> struct TIsUEnumClass<EConnectionUpdateResult> { enum { Value = true }; };
template<> VCAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EConnectionUpdateResult>();
// ********** End Enum EConnectionUpdateResult *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
