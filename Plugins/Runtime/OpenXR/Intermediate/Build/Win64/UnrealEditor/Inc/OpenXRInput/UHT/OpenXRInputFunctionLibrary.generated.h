// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenXRInputFunctionLibrary.h"

#ifdef OPENXRINPUT_OpenXRInputFunctionLibrary_generated_h
#error "OpenXRInputFunctionLibrary.generated.h already included, missing '#pragma once' in OpenXRInputFunctionLibrary.h"
#endif
#define OPENXRINPUT_OpenXRInputFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputMappingContext;

// ********** Begin Class UOpenXRInputFunctionLibrary **********************************************
#define FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Public_OpenXRInputFunctionLibrary_h_13_RPC_WRAPPERS \
	DECLARE_FUNCTION(execEndXRSession); \
	DECLARE_FUNCTION(execBeginXRSession);


struct Z_Construct_UClass_UOpenXRInputFunctionLibrary_Statics;
OPENXRINPUT_API UClass* Z_Construct_UClass_UOpenXRInputFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Public_OpenXRInputFunctionLibrary_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUOpenXRInputFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UOpenXRInputFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPENXRINPUT_API UClass* ::Z_Construct_UClass_UOpenXRInputFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UOpenXRInputFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenXRInput"), Z_Construct_UClass_UOpenXRInputFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UOpenXRInputFunctionLibrary)


#define FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Public_OpenXRInputFunctionLibrary_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenXRInputFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenXRInputFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenXRInputFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenXRInputFunctionLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOpenXRInputFunctionLibrary(UOpenXRInputFunctionLibrary&&) = delete; \
	UOpenXRInputFunctionLibrary(const UOpenXRInputFunctionLibrary&) = delete; \
	NO_API virtual ~UOpenXRInputFunctionLibrary();


#define FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Public_OpenXRInputFunctionLibrary_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Public_OpenXRInputFunctionLibrary_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Public_OpenXRInputFunctionLibrary_h_13_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Public_OpenXRInputFunctionLibrary_h_13_INCLASS \
	FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Public_OpenXRInputFunctionLibrary_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOpenXRInputFunctionLibrary;

// ********** End Class UOpenXRInputFunctionLibrary ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Public_OpenXRInputFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
