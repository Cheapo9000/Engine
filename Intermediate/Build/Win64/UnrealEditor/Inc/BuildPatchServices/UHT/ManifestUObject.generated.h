// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/ManifestUObject.h"

#ifdef BUILDPATCHSERVICES_ManifestUObject_generated_h
#error "ManifestUObject.generated.h already included, missing '#pragma once' in ManifestUObject.h"
#endif
#define BUILDPATCHSERVICES_ManifestUObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCustomFieldData **************************************************
struct Z_Construct_UScriptStruct_FCustomFieldData_Statics;
#define FID_Engine_Source_Runtime_Online_BuildPatchServices_Private_Data_ManifestUObject_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomFieldData_Statics; \
	BUILDPATCHSERVICES_API static class UScriptStruct* StaticStruct();


struct FCustomFieldData;
// ********** End ScriptStruct FCustomFieldData ****************************************************

// ********** Begin ScriptStruct FSHAHashData ******************************************************
struct Z_Construct_UScriptStruct_FSHAHashData_Statics;
#define FID_Engine_Source_Runtime_Online_BuildPatchServices_Private_Data_ManifestUObject_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSHAHashData_Statics; \
	BUILDPATCHSERVICES_API static class UScriptStruct* StaticStruct();


struct FSHAHashData;
// ********** End ScriptStruct FSHAHashData ********************************************************

// ********** Begin ScriptStruct FChunkInfoData ****************************************************
struct Z_Construct_UScriptStruct_FChunkInfoData_Statics;
#define FID_Engine_Source_Runtime_Online_BuildPatchServices_Private_Data_ManifestUObject_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChunkInfoData_Statics; \
	BUILDPATCHSERVICES_API static class UScriptStruct* StaticStruct();


struct FChunkInfoData;
// ********** End ScriptStruct FChunkInfoData ******************************************************

// ********** Begin ScriptStruct FChunkPartData ****************************************************
struct Z_Construct_UScriptStruct_FChunkPartData_Statics;
#define FID_Engine_Source_Runtime_Online_BuildPatchServices_Private_Data_ManifestUObject_h_80_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChunkPartData_Statics; \
	BUILDPATCHSERVICES_API static class UScriptStruct* StaticStruct();


struct FChunkPartData;
// ********** End ScriptStruct FChunkPartData ******************************************************

// ********** Begin ScriptStruct FFileManifestData *************************************************
struct Z_Construct_UScriptStruct_FFileManifestData_Statics;
#define FID_Engine_Source_Runtime_Online_BuildPatchServices_Private_Data_ManifestUObject_h_98_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFileManifestData_Statics; \
	BUILDPATCHSERVICES_API static class UScriptStruct* StaticStruct();


struct FFileManifestData;
// ********** End ScriptStruct FFileManifestData ***************************************************

// ********** Begin Class UBuildPatchManifest ******************************************************
struct Z_Construct_UClass_UBuildPatchManifest_Statics;
BUILDPATCHSERVICES_API UClass* Z_Construct_UClass_UBuildPatchManifest_NoRegister();

#define FID_Engine_Source_Runtime_Online_BuildPatchServices_Private_Data_ManifestUObject_h_131_INCLASS \
private: \
	static void StaticRegisterNativesUBuildPatchManifest(); \
	friend struct ::Z_Construct_UClass_UBuildPatchManifest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BUILDPATCHSERVICES_API UClass* ::Z_Construct_UClass_UBuildPatchManifest_NoRegister(); \
public: \
	DECLARE_CLASS2(UBuildPatchManifest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BuildPatchServices"), Z_Construct_UClass_UBuildPatchManifest_NoRegister) \
	DECLARE_SERIALIZER(UBuildPatchManifest)


#define FID_Engine_Source_Runtime_Online_BuildPatchServices_Private_Data_ManifestUObject_h_131_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBuildPatchManifest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuildPatchManifest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuildPatchManifest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuildPatchManifest); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBuildPatchManifest(UBuildPatchManifest&&) = delete; \
	UBuildPatchManifest(const UBuildPatchManifest&) = delete;


#define FID_Engine_Source_Runtime_Online_BuildPatchServices_Private_Data_ManifestUObject_h_127_PROLOG
#define FID_Engine_Source_Runtime_Online_BuildPatchServices_Private_Data_ManifestUObject_h_131_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Online_BuildPatchServices_Private_Data_ManifestUObject_h_131_INCLASS \
	FID_Engine_Source_Runtime_Online_BuildPatchServices_Private_Data_ManifestUObject_h_131_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBuildPatchManifest;

// ********** End Class UBuildPatchManifest ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Online_BuildPatchServices_Private_Data_ManifestUObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
