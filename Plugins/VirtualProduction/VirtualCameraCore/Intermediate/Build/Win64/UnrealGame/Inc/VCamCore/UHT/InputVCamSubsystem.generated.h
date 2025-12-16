// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Input/InputVCamSubsystem.h"

#ifdef VCAMCORE_InputVCamSubsystem_generated_h
#error "InputVCamSubsystem.generated.h already included, missing '#pragma once' in InputVCamSubsystem.h"
#endif
#define VCAMCORE_InputVCamSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInputVCamSubsystem ******************************************************
struct Z_Construct_UClass_UInputVCamSubsystem_Statics;
VCAMCORE_API UClass* Z_Construct_UClass_UInputVCamSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_InputVCamSubsystem_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputVCamSubsystem(); \
	friend struct ::Z_Construct_UClass_UInputVCamSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCORE_API UClass* ::Z_Construct_UClass_UInputVCamSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputVCamSubsystem, UVCamSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VCamCore"), Z_Construct_UClass_UInputVCamSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UInputVCamSubsystem) \
	virtual UObject* _getUObject() const override { return const_cast<UInputVCamSubsystem*>(this); }


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_InputVCamSubsystem_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputVCamSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputVCamSubsystem(UInputVCamSubsystem&&) = delete; \
	UInputVCamSubsystem(const UInputVCamSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputVCamSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputVCamSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputVCamSubsystem) \
	NO_API virtual ~UInputVCamSubsystem();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_InputVCamSubsystem_h_26_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_InputVCamSubsystem_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_InputVCamSubsystem_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_InputVCamSubsystem_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputVCamSubsystem;

// ********** End Class UInputVCamSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_InputVCamSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
