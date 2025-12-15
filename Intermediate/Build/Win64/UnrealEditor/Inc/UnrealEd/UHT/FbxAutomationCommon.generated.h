// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/FbxAutomationCommon.h"

#ifdef UNREALED_FbxAutomationCommon_generated_h
#error "FbxAutomationCommon.generated.h already included, missing '#pragma once' in FbxAutomationCommon.h"
#endif
#define UNREALED_FbxAutomationCommon_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFbxTestPlanExpectedResult ****************************************
struct Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_117_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FFbxTestPlanExpectedResult;
// ********** End ScriptStruct FFbxTestPlanExpectedResult ******************************************

// ********** Begin Class UFbxTestPlan *************************************************************
struct Z_Construct_UClass_UFbxTestPlan_Statics;
UNREALED_API UClass* Z_Construct_UClass_UFbxTestPlan_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_152_INCLASS \
private: \
	static void StaticRegisterNativesUFbxTestPlan(); \
	friend struct ::Z_Construct_UClass_UFbxTestPlan_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UFbxTestPlan_NoRegister(); \
public: \
	DECLARE_CLASS2(UFbxTestPlan, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UFbxTestPlan_NoRegister) \
	DECLARE_SERIALIZER(UFbxTestPlan)


#define FID_Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_152_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxTestPlan(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxTestPlan) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxTestPlan); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxTestPlan); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFbxTestPlan(UFbxTestPlan&&) = delete; \
	UFbxTestPlan(const UFbxTestPlan&) = delete; \
	UNREALED_API virtual ~UFbxTestPlan();


#define FID_Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_149_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_152_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_152_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_152_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFbxTestPlan;

// ********** End Class UFbxTestPlan ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h

// ********** Begin Enum EFBXExpectedResultPreset **************************************************
#define FOREACH_ENUM_EFBXEXPECTEDRESULTPRESET(op) \
	op(Error_Number) \
	op(Warning_Number) \
	op(Created_Staticmesh_Number) \
	op(Created_Skeletalmesh_Number) \
	op(Materials_Created_Number) \
	op(Material_Slot_Imported_Name) \
	op(Vertex_Number) \
	op(Lod_Number) \
	op(Vertex_Number_Lod) \
	op(Mesh_Materials_Number) \
	op(Mesh_LOD_Section_Number) \
	op(Mesh_LOD_Section_Vertex_Number) \
	op(Mesh_LOD_Section_Triangle_Number) \
	op(Mesh_LOD_Section_Material_Name) \
	op(Mesh_LOD_Section_Material_Index) \
	op(Mesh_LOD_Section_Material_Imported_Name) \
	op(Mesh_LOD_Vertex_Position) \
	op(Mesh_LOD_Vertex_Normal) \
	op(LOD_UV_Channel_Number) \
	op(Bone_Number) \
	op(Bone_Position) \
	op(Animation_Frame_Number) \
	op(Animation_Length) \
	op(Animation_CustomCurve_KeyValue) \
	op(Animation_CustomCurve_KeyArriveTangent) \
	op(Animation_CustomCurve_KeyLeaveTangent) \
	op(Skin_By_Bone_Vertex_Number) \
	op(Animation_CustomCurve_KeyArriveTangentWeight) \
	op(Animation_CustomCurve_KeyLeaveTangentWeight) 

enum EFBXExpectedResultPreset : int;
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EFBXExpectedResultPreset>();
// ********** End Enum EFBXExpectedResultPreset ****************************************************

// ********** Begin Enum EFBXTestPlanActionType ****************************************************
#define FOREACH_ENUM_EFBXTESTPLANACTIONTYPE(op) \
	op(Import) \
	op(Reimport) \
	op(AddLOD) \
	op(ReimportLOD) \
	op(ImportReload) \
	op(AddAlternateSkinnig) 

enum EFBXTestPlanActionType : int;
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EFBXTestPlanActionType>();
// ********** End Enum EFBXTestPlanActionType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
