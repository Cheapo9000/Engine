// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TargetDeviceServicesBPFunctionLibrary.h"

#ifdef TARGETDEVICESERVICESSCRIPTING_TargetDeviceServicesBPFunctionLibrary_generated_h
#error "TargetDeviceServicesBPFunctionLibrary.generated.h already included, missing '#pragma once' in TargetDeviceServicesBPFunctionLibrary.h"
#endif
#define TARGETDEVICESERVICESSCRIPTING_TargetDeviceServicesBPFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDeviceSnapshots;

// ********** Begin ScriptStruct FDeviceSnapshot ***************************************************
struct Z_Construct_UScriptStruct_FDeviceSnapshot_Statics;
#define FID_Engine_Plugins_Experimental_TargetDeviceServicesScripting_Source_TargetDeviceServicesScripting_Public_TargetDeviceServicesBPFunctionLibrary_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDeviceSnapshot_Statics; \
	TARGETDEVICESERVICESSCRIPTING_API static class UScriptStruct* StaticStruct();


struct FDeviceSnapshot;
// ********** End ScriptStruct FDeviceSnapshot *****************************************************

// ********** Begin ScriptStruct FDeviceSnapshots **************************************************
struct Z_Construct_UScriptStruct_FDeviceSnapshots_Statics;
#define FID_Engine_Plugins_Experimental_TargetDeviceServicesScripting_Source_TargetDeviceServicesScripting_Public_TargetDeviceServicesBPFunctionLibrary_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDeviceSnapshots_Statics; \
	TARGETDEVICESERVICESSCRIPTING_API static class UScriptStruct* StaticStruct();


struct FDeviceSnapshots;
// ********** End ScriptStruct FDeviceSnapshots ****************************************************

// ********** Begin Class UTargetDeviceServicesBPFunctionLibrary ***********************************
#define FID_Engine_Plugins_Experimental_TargetDeviceServicesScripting_Source_TargetDeviceServicesScripting_Public_TargetDeviceServicesBPFunctionLibrary_h_77_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetDeviceSnapshots);


struct Z_Construct_UClass_UTargetDeviceServicesBPFunctionLibrary_Statics;
TARGETDEVICESERVICESSCRIPTING_API UClass* Z_Construct_UClass_UTargetDeviceServicesBPFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_TargetDeviceServicesScripting_Source_TargetDeviceServicesScripting_Public_TargetDeviceServicesBPFunctionLibrary_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUTargetDeviceServicesBPFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UTargetDeviceServicesBPFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TARGETDEVICESERVICESSCRIPTING_API UClass* ::Z_Construct_UClass_UTargetDeviceServicesBPFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UTargetDeviceServicesBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TargetDeviceServicesScripting"), Z_Construct_UClass_UTargetDeviceServicesBPFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UTargetDeviceServicesBPFunctionLibrary)


#define FID_Engine_Plugins_Experimental_TargetDeviceServicesScripting_Source_TargetDeviceServicesScripting_Public_TargetDeviceServicesBPFunctionLibrary_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTargetDeviceServicesBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetDeviceServicesBPFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetDeviceServicesBPFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetDeviceServicesBPFunctionLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTargetDeviceServicesBPFunctionLibrary(UTargetDeviceServicesBPFunctionLibrary&&) = delete; \
	UTargetDeviceServicesBPFunctionLibrary(const UTargetDeviceServicesBPFunctionLibrary&) = delete; \
	NO_API virtual ~UTargetDeviceServicesBPFunctionLibrary();


#define FID_Engine_Plugins_Experimental_TargetDeviceServicesScripting_Source_TargetDeviceServicesScripting_Public_TargetDeviceServicesBPFunctionLibrary_h_74_PROLOG
#define FID_Engine_Plugins_Experimental_TargetDeviceServicesScripting_Source_TargetDeviceServicesScripting_Public_TargetDeviceServicesBPFunctionLibrary_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_TargetDeviceServicesScripting_Source_TargetDeviceServicesScripting_Public_TargetDeviceServicesBPFunctionLibrary_h_77_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_TargetDeviceServicesScripting_Source_TargetDeviceServicesScripting_Public_TargetDeviceServicesBPFunctionLibrary_h_77_INCLASS \
	FID_Engine_Plugins_Experimental_TargetDeviceServicesScripting_Source_TargetDeviceServicesScripting_Public_TargetDeviceServicesBPFunctionLibrary_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTargetDeviceServicesBPFunctionLibrary;

// ********** End Class UTargetDeviceServicesBPFunctionLibrary *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_TargetDeviceServicesScripting_Source_TargetDeviceServicesScripting_Public_TargetDeviceServicesBPFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
