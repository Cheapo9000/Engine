// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavMesh/NavMeshBoundsVolume.h"

#ifdef NAVIGATIONSYSTEM_NavMeshBoundsVolume_generated_h
#error "NavMeshBoundsVolume.generated.h already included, missing '#pragma once' in NavMeshBoundsVolume.h"
#endif
#define NAVIGATIONSYSTEM_NavMeshBoundsVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ANavMeshBoundsVolume *****************************************************
struct Z_Construct_UClass_ANavMeshBoundsVolume_Statics;
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavMeshBoundsVolume_NoRegister();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_25_INCLASS \
private: \
	static void StaticRegisterNativesANavMeshBoundsVolume(); \
	friend struct ::Z_Construct_UClass_ANavMeshBoundsVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NAVIGATIONSYSTEM_API UClass* ::Z_Construct_UClass_ANavMeshBoundsVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(ANavMeshBoundsVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), Z_Construct_UClass_ANavMeshBoundsVolume_NoRegister) \
	DECLARE_SERIALIZER(ANavMeshBoundsVolume)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API ANavMeshBoundsVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavMeshBoundsVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, ANavMeshBoundsVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavMeshBoundsVolume); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANavMeshBoundsVolume(ANavMeshBoundsVolume&&) = delete; \
	ANavMeshBoundsVolume(const ANavMeshBoundsVolume&) = delete; \
	NAVIGATIONSYSTEM_API virtual ~ANavMeshBoundsVolume();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_22_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_25_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANavMeshBoundsVolume;

// ********** End Class ANavMeshBoundsVolume *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
