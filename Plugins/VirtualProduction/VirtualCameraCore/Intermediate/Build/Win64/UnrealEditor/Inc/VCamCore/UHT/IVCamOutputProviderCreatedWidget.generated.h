// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/IVCamOutputProviderCreatedWidget.h"

#ifdef VCAMCORE_IVCamOutputProviderCreatedWidget_generated_h
#error "IVCamOutputProviderCreatedWidget.generated.h already included, missing '#pragma once' in IVCamOutputProviderCreatedWidget.h"
#endif
#define VCAMCORE_IVCamOutputProviderCreatedWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVCamReceiveOutputProviderData;

// ********** Begin ScriptStruct FVCamReceiveOutputProviderData ************************************
struct Z_Construct_UScriptStruct_FVCamReceiveOutputProviderData_Statics;
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Interface_IVCamOutputProviderCreatedWidget_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVCamReceiveOutputProviderData_Statics; \
	VCAMCORE_API static class UScriptStruct* StaticStruct();


struct FVCamReceiveOutputProviderData;
// ********** End ScriptStruct FVCamReceiveOutputProviderData **************************************

// ********** Begin Interface UVCamOutputProviderCreatedWidget *************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Interface_IVCamOutputProviderCreatedWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ReceiveOutputProvider_Implementation(FVCamReceiveOutputProviderData const& Data) {}; \
	DECLARE_FUNCTION(execReceiveOutputProvider);


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Interface_IVCamOutputProviderCreatedWidget_h_23_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UVCamOutputProviderCreatedWidget_Statics;
VCAMCORE_API UClass* Z_Construct_UClass_UVCamOutputProviderCreatedWidget_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Interface_IVCamOutputProviderCreatedWidget_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VCAMCORE_API UVCamOutputProviderCreatedWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVCamOutputProviderCreatedWidget(UVCamOutputProviderCreatedWidget&&) = delete; \
	UVCamOutputProviderCreatedWidget(const UVCamOutputProviderCreatedWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VCAMCORE_API, UVCamOutputProviderCreatedWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamOutputProviderCreatedWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamOutputProviderCreatedWidget) \
	virtual ~UVCamOutputProviderCreatedWidget() = default;


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Interface_IVCamOutputProviderCreatedWidget_h_23_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVCamOutputProviderCreatedWidget(); \
	friend struct ::Z_Construct_UClass_UVCamOutputProviderCreatedWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCORE_API UClass* ::Z_Construct_UClass_UVCamOutputProviderCreatedWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UVCamOutputProviderCreatedWidget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/VCamCore"), Z_Construct_UClass_UVCamOutputProviderCreatedWidget_NoRegister) \
	DECLARE_SERIALIZER(UVCamOutputProviderCreatedWidget)


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Interface_IVCamOutputProviderCreatedWidget_h_23_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Interface_IVCamOutputProviderCreatedWidget_h_23_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Interface_IVCamOutputProviderCreatedWidget_h_23_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Interface_IVCamOutputProviderCreatedWidget_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVCamOutputProviderCreatedWidget() {} \
public: \
	typedef UVCamOutputProviderCreatedWidget UClassType; \
	typedef IVCamOutputProviderCreatedWidget ThisClass; \
	static void Execute_ReceiveOutputProvider(UObject* O, FVCamReceiveOutputProviderData const& Data); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Interface_IVCamOutputProviderCreatedWidget_h_20_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Interface_IVCamOutputProviderCreatedWidget_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Interface_IVCamOutputProviderCreatedWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Interface_IVCamOutputProviderCreatedWidget_h_23_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Interface_IVCamOutputProviderCreatedWidget_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVCamOutputProviderCreatedWidget;

// ********** End Interface UVCamOutputProviderCreatedWidget ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Interface_IVCamOutputProviderCreatedWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
