// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SunPosition.h"

#ifdef SUNPOSITION_SunPosition_generated_h
#error "SunPosition.generated.h already included, missing '#pragma once' in SunPosition.h"
#endif
#define SUNPOSITION_SunPosition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSunPositionData;

// ********** Begin ScriptStruct FSunPositionData **************************************************
struct Z_Construct_UScriptStruct_FSunPositionData_Statics;
#define FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSunPositionData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSunPositionData;
// ********** End ScriptStruct FSunPositionData ****************************************************

// ********** Begin Class USunPositionFunctionLibrary **********************************************
#define FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSunPosition);


struct Z_Construct_UClass_USunPositionFunctionLibrary_Statics;
SUNPOSITION_API UClass* Z_Construct_UClass_USunPositionFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSunPositionFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_USunPositionFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SUNPOSITION_API UClass* ::Z_Construct_UClass_USunPositionFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USunPositionFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SunPosition"), Z_Construct_UClass_USunPositionFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(USunPositionFunctionLibrary)


#define FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USunPositionFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USunPositionFunctionLibrary(USunPositionFunctionLibrary&&) = delete; \
	USunPositionFunctionLibrary(const USunPositionFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USunPositionFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USunPositionFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USunPositionFunctionLibrary) \
	NO_API virtual ~USunPositionFunctionLibrary();


#define FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_46_PROLOG
#define FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USunPositionFunctionLibrary;

// ********** End Class USunPositionFunctionLibrary ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
