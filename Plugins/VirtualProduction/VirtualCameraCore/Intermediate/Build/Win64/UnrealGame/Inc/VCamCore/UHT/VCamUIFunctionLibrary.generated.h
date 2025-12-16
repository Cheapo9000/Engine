// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/VCamUIFunctionLibrary.h"

#ifdef VCAMCORE_VCamUIFunctionLibrary_generated_h
#error "VCamUIFunctionLibrary.generated.h already included, missing '#pragma once' in VCamUIFunctionLibrary.h"
#endif
#define VCAMCORE_VCamUIFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction;
class UVCamModifier;
class UVCamWidget;
struct FVCamConnection;

// ********** Begin Class UVCamUIFunctionLibrary ***************************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetConnectedInputAction_VCamWidget); \
	DECLARE_FUNCTION(execGetConnectedModifier_VCamWidget); \
	DECLARE_FUNCTION(execGetConnectionPointName_VCamWidget); \
	DECLARE_FUNCTION(execIsConnected_VCamWidget); \
	DECLARE_FUNCTION(execGetConnectionByName_VCamWidget); \
	DECLARE_FUNCTION(execGetConnectedInputAction_VCamConnection); \
	DECLARE_FUNCTION(execGetConnectedModifier_VCamConnection); \
	DECLARE_FUNCTION(execGetConnectionPointName_VCamConnection); \
	DECLARE_FUNCTION(execIsConnected_VCamConnection);


struct Z_Construct_UClass_UVCamUIFunctionLibrary_Statics;
VCAMCORE_API UClass* Z_Construct_UClass_UVCamUIFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamUIFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UVCamUIFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCORE_API UClass* ::Z_Construct_UClass_UVCamUIFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UVCamUIFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VCamCore"), Z_Construct_UClass_UVCamUIFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UVCamUIFunctionLibrary)


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamUIFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVCamUIFunctionLibrary(UVCamUIFunctionLibrary&&) = delete; \
	UVCamUIFunctionLibrary(const UVCamUIFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamUIFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamUIFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamUIFunctionLibrary) \
	NO_API virtual ~UVCamUIFunctionLibrary();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_16_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVCamUIFunctionLibrary;

// ********** End Class UVCamUIFunctionLibrary *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
