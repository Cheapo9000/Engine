// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/BlueprintGeneratedClass.h"

#ifdef ENGINE_BlueprintGeneratedClass_generated_h
#error "BlueprintGeneratedClass.generated.h already included, missing '#pragma once' in BlueprintGeneratedClass.h"
#endif
#define ENGINE_BlueprintGeneratedClass_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNodeToCodeAssociation ********************************************
struct Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FNodeToCodeAssociation;
// ********** End ScriptStruct FNodeToCodeAssociation **********************************************

// ********** Begin ScriptStruct FDebuggingInfoForSingleFunction ***********************************
struct Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FDebuggingInfoForSingleFunction;
// ********** End ScriptStruct FDebuggingInfoForSingleFunction *************************************

// ********** Begin ScriptStruct FPointerToUberGraphFrame ******************************************
struct Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_87_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPointerToUberGraphFrame;
// ********** End ScriptStruct FPointerToUberGraphFrame ********************************************

// ********** Begin ScriptStruct FBlueprintDebugData ***********************************************
struct Z_Construct_UScriptStruct_FBlueprintDebugData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_202_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlueprintDebugData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBlueprintDebugData;
// ********** End ScriptStruct FBlueprintDebugData *************************************************

// ********** Begin ScriptStruct FEventGraphFastCallPair *******************************************
struct Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_307_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FEventGraphFastCallPair;
// ********** End ScriptStruct FEventGraphFastCallPair *********************************************

// ********** Begin ScriptStruct FBlueprintComponentChangedPropertyInfo ****************************
struct Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_320_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBlueprintComponentChangedPropertyInfo;
// ********** End ScriptStruct FBlueprintComponentChangedPropertyInfo ******************************

// ********** Begin ScriptStruct FBlueprintCookedComponentInstancingData ***************************
struct Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_346_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBlueprintCookedComponentInstancingData;
// ********** End ScriptStruct FBlueprintCookedComponentInstancingData *****************************

// ********** Begin ScriptStruct FBPComponentClassOverride *****************************************
struct Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_404_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBPComponentClassOverride;
// ********** End ScriptStruct FBPComponentClassOverride *******************************************

// ********** Begin Class UBlueprintGeneratedClass *************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_434_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UBlueprintGeneratedClass, ENGINE_API)


struct Z_Construct_UClass_UBlueprintGeneratedClass_Statics;
ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_434_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintGeneratedClass(); \
	friend struct ::Z_Construct_UClass_UBlueprintGeneratedClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintGeneratedClass, UClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintGeneratedClass) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_434_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_434_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlueprintGeneratedClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintGeneratedClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlueprintGeneratedClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintGeneratedClass); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintGeneratedClass(UBlueprintGeneratedClass&&) = delete; \
	UBlueprintGeneratedClass(const UBlueprintGeneratedClass&) = delete; \
	ENGINE_API virtual ~UBlueprintGeneratedClass();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_431_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_434_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_434_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_434_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintGeneratedClass;

// ********** End Class UBlueprintGeneratedClass ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
