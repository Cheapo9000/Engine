// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StaticMeshEditorSubsystemHelpers.h"

#ifdef STATICMESHEDITOR_StaticMeshEditorSubsystemHelpers_generated_h
#error "StaticMeshEditorSubsystemHelpers.generated.h already included, missing '#pragma once' in StaticMeshEditorSubsystemHelpers.h"
#endif
#define STATICMESHEDITOR_StaticMeshEditorSubsystemHelpers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FStaticMeshReductionSettings **************************************
struct Z_Construct_UScriptStruct_FStaticMeshReductionSettings_Statics;
#define FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystemHelpers_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStaticMeshReductionSettings_Statics; \
	STATICMESHEDITOR_API static class UScriptStruct* StaticStruct();


struct FStaticMeshReductionSettings;
// ********** End ScriptStruct FStaticMeshReductionSettings ****************************************

// ********** Begin ScriptStruct FStaticMeshReductionOptions ***************************************
struct Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics;
#define FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystemHelpers_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics; \
	STATICMESHEDITOR_API static class UScriptStruct* StaticStruct();


struct FStaticMeshReductionOptions;
// ********** End ScriptStruct FStaticMeshReductionOptions *****************************************

// ********** Begin ScriptStruct FJoinStaticMeshActorsOptions **************************************
struct Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics;
#define FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystemHelpers_h_73_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics; \
	STATICMESHEDITOR_API static class UScriptStruct* StaticStruct();


struct FJoinStaticMeshActorsOptions;
// ********** End ScriptStruct FJoinStaticMeshActorsOptions ****************************************

// ********** Begin ScriptStruct FMergeStaticMeshActorsOptions *************************************
struct Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics;
#define FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystemHelpers_h_96_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics; \
	STATICMESHEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FJoinStaticMeshActorsOptions Super;


struct FMergeStaticMeshActorsOptions;
// ********** End ScriptStruct FMergeStaticMeshActorsOptions ***************************************

// ********** Begin ScriptStruct FCreateProxyMeshActorOptions **************************************
struct Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics;
#define FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystemHelpers_h_117_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics; \
	STATICMESHEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FJoinStaticMeshActorsOptions Super;


struct FCreateProxyMeshActorOptions;
// ********** End ScriptStruct FCreateProxyMeshActorOptions ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystemHelpers_h

// ********** Begin Enum EScriptCollisionShapeType *************************************************
#define FOREACH_ENUM_ESCRIPTCOLLISIONSHAPETYPE(op) \
	op(EScriptCollisionShapeType::Box) \
	op(EScriptCollisionShapeType::Sphere) \
	op(EScriptCollisionShapeType::Capsule) \
	op(EScriptCollisionShapeType::NDOP10_X) \
	op(EScriptCollisionShapeType::NDOP10_Y) \
	op(EScriptCollisionShapeType::NDOP10_Z) \
	op(EScriptCollisionShapeType::NDOP18) \
	op(EScriptCollisionShapeType::NDOP26) 

enum class EScriptCollisionShapeType : uint8;
template<> struct TIsUEnumClass<EScriptCollisionShapeType> { enum { Value = true }; };
template<> STATICMESHEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EScriptCollisionShapeType>();
// ********** End Enum EScriptCollisionShapeType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
