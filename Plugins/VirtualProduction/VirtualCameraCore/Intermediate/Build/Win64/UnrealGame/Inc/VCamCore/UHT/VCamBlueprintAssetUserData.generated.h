// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VCamBlueprintAssetUserData.h"

#ifdef VCAMCORE_VCamBlueprintAssetUserData_generated_h
#error "VCamBlueprintAssetUserData.generated.h already included, missing '#pragma once' in VCamBlueprintAssetUserData.h"
#endif
#define VCAMCORE_VCamBlueprintAssetUserData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVCamBlueprintAssetUserData **********************************************
struct Z_Construct_UClass_UVCamBlueprintAssetUserData_Statics;
VCAMCORE_API UClass* Z_Construct_UClass_UVCamBlueprintAssetUserData_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Private_VCamBlueprintAssetUserData_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamBlueprintAssetUserData(); \
	friend struct ::Z_Construct_UClass_UVCamBlueprintAssetUserData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCORE_API UClass* ::Z_Construct_UClass_UVCamBlueprintAssetUserData_NoRegister(); \
public: \
	DECLARE_CLASS2(UVCamBlueprintAssetUserData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VCamCore"), Z_Construct_UClass_UVCamBlueprintAssetUserData_NoRegister) \
	DECLARE_SERIALIZER(UVCamBlueprintAssetUserData) \
	DECLARE_WITHIN(UVCamComponent)


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Private_VCamBlueprintAssetUserData_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamBlueprintAssetUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVCamBlueprintAssetUserData(UVCamBlueprintAssetUserData&&) = delete; \
	UVCamBlueprintAssetUserData(const UVCamBlueprintAssetUserData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamBlueprintAssetUserData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamBlueprintAssetUserData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamBlueprintAssetUserData) \
	NO_API virtual ~UVCamBlueprintAssetUserData();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Private_VCamBlueprintAssetUserData_h_18_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Private_VCamBlueprintAssetUserData_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Private_VCamBlueprintAssetUserData_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Private_VCamBlueprintAssetUserData_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVCamBlueprintAssetUserData;

// ********** End Class UVCamBlueprintAssetUserData ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Private_VCamBlueprintAssetUserData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
