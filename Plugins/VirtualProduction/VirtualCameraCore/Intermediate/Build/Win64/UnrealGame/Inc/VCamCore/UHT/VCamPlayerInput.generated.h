// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Input/VCamPlayerInput.h"

#ifdef VCAMCORE_VCamPlayerInput_generated_h
#error "VCamPlayerInput.generated.h already included, missing '#pragma once' in VCamPlayerInput.h"
#endif
#define VCAMCORE_VCamPlayerInput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVCamPlayerInput *********************************************************
struct Z_Construct_UClass_UVCamPlayerInput_Statics;
VCAMCORE_API UClass* Z_Construct_UClass_UVCamPlayerInput_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_VCamPlayerInput_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamPlayerInput(); \
	friend struct ::Z_Construct_UClass_UVCamPlayerInput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCORE_API UClass* ::Z_Construct_UClass_UVCamPlayerInput_NoRegister(); \
public: \
	DECLARE_CLASS2(UVCamPlayerInput, UEnhancedPlayerInput, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/VCamCore"), Z_Construct_UClass_UVCamPlayerInput_NoRegister) \
	DECLARE_SERIALIZER(UVCamPlayerInput)


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_VCamPlayerInput_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamPlayerInput(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVCamPlayerInput(UVCamPlayerInput&&) = delete; \
	UVCamPlayerInput(const UVCamPlayerInput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamPlayerInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamPlayerInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVCamPlayerInput) \
	NO_API virtual ~UVCamPlayerInput();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_VCamPlayerInput_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_VCamPlayerInput_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_VCamPlayerInput_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_VCamPlayerInput_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVCamPlayerInput;

// ********** End Class UVCamPlayerInput ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_VCamPlayerInput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
