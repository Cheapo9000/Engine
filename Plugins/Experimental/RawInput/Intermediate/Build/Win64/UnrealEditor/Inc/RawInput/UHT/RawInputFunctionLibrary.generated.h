// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RawInputFunctionLibrary.h"

#ifdef RAWINPUT_RawInputFunctionLibrary_generated_h
#error "RawInputFunctionLibrary.generated.h already included, missing '#pragma once' in RawInputFunctionLibrary.h"
#endif
#define RAWINPUT_RawInputFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRegisteredDeviceInfo;

// ********** Begin ScriptStruct FRegisteredDeviceInfo *********************************************
struct Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics;
#define FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_265_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRegisteredDeviceInfo;
// ********** End ScriptStruct FRegisteredDeviceInfo ***********************************************

// ********** Begin Class URawInputFunctionLibrary *************************************************
#define FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_286_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRegisteredDevices);


struct Z_Construct_UClass_URawInputFunctionLibrary_Statics;
RAWINPUT_API UClass* Z_Construct_UClass_URawInputFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_286_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURawInputFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_URawInputFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RAWINPUT_API UClass* ::Z_Construct_UClass_URawInputFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(URawInputFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RawInput"), Z_Construct_UClass_URawInputFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(URawInputFunctionLibrary)


#define FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_286_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URawInputFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URawInputFunctionLibrary(URawInputFunctionLibrary&&) = delete; \
	URawInputFunctionLibrary(const URawInputFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URawInputFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URawInputFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URawInputFunctionLibrary) \
	NO_API virtual ~URawInputFunctionLibrary();


#define FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_283_PROLOG
#define FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_286_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_286_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_286_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_286_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URawInputFunctionLibrary;

// ********** End Class URawInputFunctionLibrary ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
