// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FoliageType_InstancedStaticMesh.h"

#ifdef FOLIAGE_FoliageType_InstancedStaticMesh_generated_h
#error "FoliageType_InstancedStaticMesh.generated.h already included, missing '#pragma once' in FoliageType_InstancedStaticMesh.h"
#endif
#define FOLIAGE_FoliageType_InstancedStaticMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFoliageType_InstancedStaticMesh *****************************************
struct Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics;
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister();

#define FID_Engine_Source_Runtime_Foliage_Public_FoliageType_InstancedStaticMesh_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFoliageType_InstancedStaticMesh(); \
	friend struct ::Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FOLIAGE_API UClass* ::Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UFoliageType_InstancedStaticMesh, UFoliageType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foliage"), Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister) \
	DECLARE_SERIALIZER(UFoliageType_InstancedStaticMesh)


#define FID_Engine_Source_Runtime_Foliage_Public_FoliageType_InstancedStaticMesh_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOLIAGE_API UFoliageType_InstancedStaticMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFoliageType_InstancedStaticMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOLIAGE_API, UFoliageType_InstancedStaticMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFoliageType_InstancedStaticMesh); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFoliageType_InstancedStaticMesh(UFoliageType_InstancedStaticMesh&&) = delete; \
	UFoliageType_InstancedStaticMesh(const UFoliageType_InstancedStaticMesh&) = delete; \
	FOLIAGE_API virtual ~UFoliageType_InstancedStaticMesh();


#define FID_Engine_Source_Runtime_Foliage_Public_FoliageType_InstancedStaticMesh_h_12_PROLOG
#define FID_Engine_Source_Runtime_Foliage_Public_FoliageType_InstancedStaticMesh_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageType_InstancedStaticMesh_h_15_INCLASS \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageType_InstancedStaticMesh_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFoliageType_InstancedStaticMesh;

// ********** End Class UFoliageType_InstancedStaticMesh *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Foliage_Public_FoliageType_InstancedStaticMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
