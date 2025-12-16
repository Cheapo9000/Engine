// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Output/VCamOutputViewport.h"

#ifdef VCAMCORE_VCamOutputViewport_generated_h
#error "VCamOutputViewport.generated.h already included, missing '#pragma once' in VCamOutputViewport.h"
#endif
#define VCAMCORE_VCamOutputViewport_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVCamOutputViewport ******************************************************
struct Z_Construct_UClass_UVCamOutputViewport_Statics;
VCAMCORE_API UClass* Z_Construct_UClass_UVCamOutputViewport_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputViewport_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamOutputViewport(); \
	friend struct ::Z_Construct_UClass_UVCamOutputViewport_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCORE_API UClass* ::Z_Construct_UClass_UVCamOutputViewport_NoRegister(); \
public: \
	DECLARE_CLASS2(UVCamOutputViewport, UVCamOutputProviderBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VCamCore"), Z_Construct_UClass_UVCamOutputViewport_NoRegister) \
	DECLARE_SERIALIZER(UVCamOutputViewport)


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputViewport_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVCamOutputViewport(UVCamOutputViewport&&) = delete; \
	UVCamOutputViewport(const UVCamOutputViewport&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamOutputViewport); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamOutputViewport); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVCamOutputViewport) \
	NO_API virtual ~UVCamOutputViewport();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputViewport_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputViewport_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputViewport_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputViewport_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVCamOutputViewport;

// ********** End Class UVCamOutputViewport ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputViewport_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
