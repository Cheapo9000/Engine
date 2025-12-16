// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Output/VCamOutputMediaOutput.h"

#ifdef VCAMCORE_VCamOutputMediaOutput_generated_h
#error "VCamOutputMediaOutput.generated.h already included, missing '#pragma once' in VCamOutputMediaOutput.h"
#endif
#define VCAMCORE_VCamOutputMediaOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVCamOutputMediaOutput ***************************************************
struct Z_Construct_UClass_UVCamOutputMediaOutput_Statics;
VCAMCORE_API UClass* Z_Construct_UClass_UVCamOutputMediaOutput_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputMediaOutput_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamOutputMediaOutput(); \
	friend struct ::Z_Construct_UClass_UVCamOutputMediaOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCORE_API UClass* ::Z_Construct_UClass_UVCamOutputMediaOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UVCamOutputMediaOutput, UVCamOutputProviderBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VCamCore"), Z_Construct_UClass_UVCamOutputMediaOutput_NoRegister) \
	DECLARE_SERIALIZER(UVCamOutputMediaOutput)


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputMediaOutput_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVCamOutputMediaOutput(UVCamOutputMediaOutput&&) = delete; \
	UVCamOutputMediaOutput(const UVCamOutputMediaOutput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamOutputMediaOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamOutputMediaOutput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVCamOutputMediaOutput) \
	NO_API virtual ~UVCamOutputMediaOutput();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputMediaOutput_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputMediaOutput_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputMediaOutput_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputMediaOutput_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVCamOutputMediaOutput;

// ********** End Class UVCamOutputMediaOutput *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputMediaOutput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
