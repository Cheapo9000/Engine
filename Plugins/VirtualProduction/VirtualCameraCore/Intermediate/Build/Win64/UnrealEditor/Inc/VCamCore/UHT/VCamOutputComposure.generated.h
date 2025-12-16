// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Output/VCamOutputComposure.h"

#ifdef VCAMCORE_VCamOutputComposure_generated_h
#error "VCamOutputComposure.generated.h already included, missing '#pragma once' in VCamOutputComposure.h"
#endif
#define VCAMCORE_VCamOutputComposure_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVCamOutputComposure *****************************************************
struct Z_Construct_UClass_UVCamOutputComposure_Statics;
VCAMCORE_API UClass* Z_Construct_UClass_UVCamOutputComposure_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputComposure_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamOutputComposure(); \
	friend struct ::Z_Construct_UClass_UVCamOutputComposure_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCORE_API UClass* ::Z_Construct_UClass_UVCamOutputComposure_NoRegister(); \
public: \
	DECLARE_CLASS2(UVCamOutputComposure, UVCamOutputProviderBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VCamCore"), Z_Construct_UClass_UVCamOutputComposure_NoRegister) \
	DECLARE_SERIALIZER(UVCamOutputComposure)


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputComposure_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVCamOutputComposure(UVCamOutputComposure&&) = delete; \
	UVCamOutputComposure(const UVCamOutputComposure&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamOutputComposure); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamOutputComposure); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVCamOutputComposure) \
	NO_API virtual ~UVCamOutputComposure();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputComposure_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputComposure_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputComposure_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputComposure_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVCamOutputComposure;

// ********** End Class UVCamOutputComposure *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputComposure_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
