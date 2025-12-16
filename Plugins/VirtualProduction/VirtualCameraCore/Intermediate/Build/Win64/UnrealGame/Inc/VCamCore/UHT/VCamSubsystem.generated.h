// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VCamSubsystem.h"

#ifdef VCAMCORE_VCamSubsystem_generated_h
#error "VCamSubsystem.generated.h already included, missing '#pragma once' in VCamSubsystem.h"
#endif
#define VCAMCORE_VCamSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVCamComponent;

// ********** Begin Class UVCamSubsystem ***********************************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetVCamComponent);


struct Z_Construct_UClass_UVCamSubsystem_Statics;
VCAMCORE_API UClass* Z_Construct_UClass_UVCamSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamSubsystem(); \
	friend struct ::Z_Construct_UClass_UVCamSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCORE_API UClass* ::Z_Construct_UClass_UVCamSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UVCamSubsystem, USubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VCamCore"), Z_Construct_UClass_UVCamSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UVCamSubsystem) \
	DECLARE_WITHIN(UVCamComponent)


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVCamSubsystem(UVCamSubsystem&&) = delete; \
	UVCamSubsystem(const UVCamSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UVCamSubsystem) \
	NO_API virtual ~UVCamSubsystem();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVCamSubsystem;

// ********** End Class UVCamSubsystem *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
