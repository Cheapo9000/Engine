// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicWindSkeletalData.h"

#ifdef DYNAMICWIND_DynamicWindSkeletalData_generated_h
#error "DynamicWindSkeletalData.generated.h already included, missing '#pragma once' in DynamicWindSkeletalData.h"
#endif
#define DYNAMICWIND_DynamicWindSkeletalData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDynamicWindSimulationGroupData ***********************************
struct Z_Construct_UScriptStruct_FDynamicWindSimulationGroupData_Statics;
#define FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSkeletalData_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDynamicWindSimulationGroupData_Statics; \
	DYNAMICWIND_API static class UScriptStruct* StaticStruct();


struct FDynamicWindSimulationGroupData;
// ********** End ScriptStruct FDynamicWindSimulationGroupData *************************************

// ********** Begin ScriptStruct FDynamicWindSimulationGroupBoneLookup *****************************
struct Z_Construct_UScriptStruct_FDynamicWindSimulationGroupBoneLookup_Statics;
#define FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSkeletalData_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDynamicWindSimulationGroupBoneLookup_Statics; \
	DYNAMICWIND_API static class UScriptStruct* StaticStruct();


struct FDynamicWindSimulationGroupBoneLookup;
// ********** End ScriptStruct FDynamicWindSimulationGroupBoneLookup *******************************

// ********** Begin ScriptStruct FDynamicWindBoneChainData *****************************************
struct Z_Construct_UScriptStruct_FDynamicWindBoneChainData_Statics;
#define FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSkeletalData_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDynamicWindBoneChainData_Statics; \
	DYNAMICWIND_API static class UScriptStruct* StaticStruct();


struct FDynamicWindBoneChainData;
// ********** End ScriptStruct FDynamicWindBoneChainData *******************************************

// ********** Begin ScriptStruct FDynamicWindExtraBoneData *****************************************
struct Z_Construct_UScriptStruct_FDynamicWindExtraBoneData_Statics;
#define FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSkeletalData_h_60_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDynamicWindExtraBoneData_Statics; \
	DYNAMICWIND_API static class UScriptStruct* StaticStruct();


struct FDynamicWindExtraBoneData;
// ********** End ScriptStruct FDynamicWindExtraBoneData *******************************************

// ********** Begin Class UDynamicWindSkeletalData *************************************************
struct Z_Construct_UClass_UDynamicWindSkeletalData_Statics;
DYNAMICWIND_API UClass* Z_Construct_UClass_UDynamicWindSkeletalData_NoRegister();

#define FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSkeletalData_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicWindSkeletalData(); \
	friend struct ::Z_Construct_UClass_UDynamicWindSkeletalData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICWIND_API UClass* ::Z_Construct_UClass_UDynamicWindSkeletalData_NoRegister(); \
public: \
	DECLARE_CLASS2(UDynamicWindSkeletalData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicWind"), Z_Construct_UClass_UDynamicWindSkeletalData_NoRegister) \
	DECLARE_SERIALIZER(UDynamicWindSkeletalData)


#define FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSkeletalData_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicWindSkeletalData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicWindSkeletalData(UDynamicWindSkeletalData&&) = delete; \
	UDynamicWindSkeletalData(const UDynamicWindSkeletalData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicWindSkeletalData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicWindSkeletalData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicWindSkeletalData) \
	NO_API virtual ~UDynamicWindSkeletalData();


#define FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSkeletalData_h_69_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSkeletalData_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSkeletalData_h_72_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSkeletalData_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicWindSkeletalData;

// ********** End Class UDynamicWindSkeletalData ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSkeletalData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
