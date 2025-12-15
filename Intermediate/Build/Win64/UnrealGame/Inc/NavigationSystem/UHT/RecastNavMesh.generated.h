// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavMesh/RecastNavMesh.h"

#ifdef NAVIGATIONSYSTEM_RecastNavMesh_generated_h
#error "RecastNavMesh.generated.h already included, missing '#pragma once' in RecastNavMesh.h"
#endif
#define NAVIGATIONSYSTEM_RecastNavMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UNavArea;

// ********** Begin ScriptStruct FRecastNavMeshTileGenerationDebug *********************************
struct Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics;
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_350_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics; \
	NAVIGATIONSYSTEM_API static class UScriptStruct* StaticStruct();


struct FRecastNavMeshTileGenerationDebug;
// ********** End ScriptStruct FRecastNavMeshTileGenerationDebug ***********************************

// ********** Begin ScriptStruct FNavMeshResolutionParam *******************************************
struct Z_Construct_UScriptStruct_FNavMeshResolutionParam_Statics;
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_555_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNavMeshResolutionParam_Statics; \
	NAVIGATIONSYSTEM_API static class UScriptStruct* StaticStruct();


struct FNavMeshResolutionParam;
// ********** End ScriptStruct FNavMeshResolutionParam *********************************************

// ********** Begin Class ARecastNavMesh ***********************************************************
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_575_RPC_WRAPPERS \
	DECLARE_FUNCTION(execK2_ReplaceAreaInTileBounds);


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_575_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ARecastNavMesh, NAVIGATIONSYSTEM_API)


struct Z_Construct_UClass_ARecastNavMesh_Statics;
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ARecastNavMesh_NoRegister();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_575_INCLASS \
private: \
	static void StaticRegisterNativesARecastNavMesh(); \
	friend struct ::Z_Construct_UClass_ARecastNavMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NAVIGATIONSYSTEM_API UClass* ::Z_Construct_UClass_ARecastNavMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(ARecastNavMesh, ANavigationData, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), Z_Construct_UClass_ARecastNavMesh_NoRegister) \
	DECLARE_SERIALIZER(ARecastNavMesh) \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_575_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_575_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API ARecastNavMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARecastNavMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, ARecastNavMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARecastNavMesh); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARecastNavMesh(ARecastNavMesh&&) = delete; \
	ARecastNavMesh(const ARecastNavMesh&) = delete;


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_572_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_575_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_575_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_575_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_575_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARecastNavMesh;

// ********** End Class ARecastNavMesh *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h

// ********** Begin Enum ERecastPartitioning *******************************************************
#define FOREACH_ENUM_ERECASTPARTITIONING(op) \
	op(ERecastPartitioning::Monotone) \
	op(ERecastPartitioning::Watershed) \
	op(ERecastPartitioning::ChunkyMonotone) 

namespace ERecastPartitioning { enum Type : int; }
template<> NAVIGATIONSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<ERecastPartitioning::Type>();
// ********** End Enum ERecastPartitioning *********************************************************

// ********** Begin Enum ENavigationLedgeSlopeFilterMode *******************************************
#define FOREACH_ENUM_ENAVIGATIONLEDGESLOPEFILTERMODE(op) \
	op(ENavigationLedgeSlopeFilterMode::Recast) \
	op(ENavigationLedgeSlopeFilterMode::None) \
	op(ENavigationLedgeSlopeFilterMode::UseStepHeightFromAgentMaxSlope) 

enum class ENavigationLedgeSlopeFilterMode : uint8;
template<> struct TIsUEnumClass<ENavigationLedgeSlopeFilterMode> { enum { Value = true }; };
template<> NAVIGATIONSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<ENavigationLedgeSlopeFilterMode>();
// ********** End Enum ENavigationLedgeSlopeFilterMode *********************************************

// ********** Begin Enum EHeightFieldRenderMode ****************************************************
#define FOREACH_ENUM_EHEIGHTFIELDRENDERMODE(op) \
	op(EHeightFieldRenderMode::Solid) \
	op(EHeightFieldRenderMode::Walkable) 

enum class EHeightFieldRenderMode : uint8;
template<> struct TIsUEnumClass<EHeightFieldRenderMode> { enum { Value = true }; };
template<> NAVIGATIONSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EHeightFieldRenderMode>();
// ********** End Enum EHeightFieldRenderMode ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
