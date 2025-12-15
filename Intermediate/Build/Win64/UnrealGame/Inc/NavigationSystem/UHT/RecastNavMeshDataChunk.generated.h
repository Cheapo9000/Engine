// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavMesh/RecastNavMeshDataChunk.h"

#ifdef NAVIGATIONSYSTEM_RecastNavMeshDataChunk_generated_h
#error "RecastNavMeshDataChunk.generated.h already included, missing '#pragma once' in RecastNavMeshDataChunk.h"
#endif
#define NAVIGATIONSYSTEM_RecastNavMeshDataChunk_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URecastNavMeshDataChunk **************************************************
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMeshDataChunk_h_67_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URecastNavMeshDataChunk, NAVIGATIONSYSTEM_API)


struct Z_Construct_UClass_URecastNavMeshDataChunk_Statics;
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_URecastNavMeshDataChunk_NoRegister();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMeshDataChunk_h_67_INCLASS \
private: \
	static void StaticRegisterNativesURecastNavMeshDataChunk(); \
	friend struct ::Z_Construct_UClass_URecastNavMeshDataChunk_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NAVIGATIONSYSTEM_API UClass* ::Z_Construct_UClass_URecastNavMeshDataChunk_NoRegister(); \
public: \
	DECLARE_CLASS2(URecastNavMeshDataChunk, UNavigationDataChunk, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NavigationSystem"), Z_Construct_UClass_URecastNavMeshDataChunk_NoRegister) \
	DECLARE_SERIALIZER(URecastNavMeshDataChunk) \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMeshDataChunk_h_67_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMeshDataChunk_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API URecastNavMeshDataChunk(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URecastNavMeshDataChunk) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, URecastNavMeshDataChunk); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URecastNavMeshDataChunk); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URecastNavMeshDataChunk(URecastNavMeshDataChunk&&) = delete; \
	URecastNavMeshDataChunk(const URecastNavMeshDataChunk&) = delete; \
	NAVIGATIONSYSTEM_API virtual ~URecastNavMeshDataChunk();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMeshDataChunk_h_64_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMeshDataChunk_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMeshDataChunk_h_67_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMeshDataChunk_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URecastNavMeshDataChunk;

// ********** End Class URecastNavMeshDataChunk ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMeshDataChunk_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
