// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptionalMobileFeaturesBPLibrary.h"

#ifdef OPTIONALMOBILEFEATURESBPLIBRARY_OptionalMobileFeaturesBPLibrary_generated_h
#error "OptionalMobileFeaturesBPLibrary.generated.h already included, missing '#pragma once' in OptionalMobileFeaturesBPLibrary.h"
#endif
#define OPTIONALMOBILEFEATURESBPLIBRARY_OptionalMobileFeaturesBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOptionalMobileFeaturesBPLibrary *****************************************
#define FID_Engine_Plugins_Runtime_OptionalMobileFeaturesBPLibrary_Source_OptionalMobileFeaturesBPLibrary_Classes_OptionalMobileFeaturesBPLibrary_h_12_RPC_WRAPPERS \
	DECLARE_FUNCTION(execAreHeadphonesPluggedIn); \
	DECLARE_FUNCTION(execGetBatteryTemperature); \
	DECLARE_FUNCTION(execGetBatteryLevel); \
	DECLARE_FUNCTION(execGetVolumeState);


struct Z_Construct_UClass_UOptionalMobileFeaturesBPLibrary_Statics;
OPTIONALMOBILEFEATURESBPLIBRARY_API UClass* Z_Construct_UClass_UOptionalMobileFeaturesBPLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_OptionalMobileFeaturesBPLibrary_Source_OptionalMobileFeaturesBPLibrary_Classes_OptionalMobileFeaturesBPLibrary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUOptionalMobileFeaturesBPLibrary(); \
	friend struct ::Z_Construct_UClass_UOptionalMobileFeaturesBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIONALMOBILEFEATURESBPLIBRARY_API UClass* ::Z_Construct_UClass_UOptionalMobileFeaturesBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptionalMobileFeaturesBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptionalMobileFeaturesBPLibrary"), Z_Construct_UClass_UOptionalMobileFeaturesBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(UOptionalMobileFeaturesBPLibrary)


#define FID_Engine_Plugins_Runtime_OptionalMobileFeaturesBPLibrary_Source_OptionalMobileFeaturesBPLibrary_Classes_OptionalMobileFeaturesBPLibrary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptionalMobileFeaturesBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptionalMobileFeaturesBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptionalMobileFeaturesBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptionalMobileFeaturesBPLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptionalMobileFeaturesBPLibrary(UOptionalMobileFeaturesBPLibrary&&) = delete; \
	UOptionalMobileFeaturesBPLibrary(const UOptionalMobileFeaturesBPLibrary&) = delete; \
	NO_API virtual ~UOptionalMobileFeaturesBPLibrary();


#define FID_Engine_Plugins_Runtime_OptionalMobileFeaturesBPLibrary_Source_OptionalMobileFeaturesBPLibrary_Classes_OptionalMobileFeaturesBPLibrary_h_8_PROLOG
#define FID_Engine_Plugins_Runtime_OptionalMobileFeaturesBPLibrary_Source_OptionalMobileFeaturesBPLibrary_Classes_OptionalMobileFeaturesBPLibrary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OptionalMobileFeaturesBPLibrary_Source_OptionalMobileFeaturesBPLibrary_Classes_OptionalMobileFeaturesBPLibrary_h_12_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_OptionalMobileFeaturesBPLibrary_Source_OptionalMobileFeaturesBPLibrary_Classes_OptionalMobileFeaturesBPLibrary_h_12_INCLASS \
	FID_Engine_Plugins_Runtime_OptionalMobileFeaturesBPLibrary_Source_OptionalMobileFeaturesBPLibrary_Classes_OptionalMobileFeaturesBPLibrary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptionalMobileFeaturesBPLibrary;

// ********** End Class UOptionalMobileFeaturesBPLibrary *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_OptionalMobileFeaturesBPLibrary_Source_OptionalMobileFeaturesBPLibrary_Classes_OptionalMobileFeaturesBPLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
