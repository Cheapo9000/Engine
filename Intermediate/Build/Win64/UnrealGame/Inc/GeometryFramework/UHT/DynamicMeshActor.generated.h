// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicMeshActor.h"

#ifdef GEOMETRYFRAMEWORK_DynamicMeshActor_generated_h
#error "DynamicMeshActor.generated.h already included, missing '#pragma once' in DynamicMeshActor.h"
#endif
#define GEOMETRYFRAMEWORK_DynamicMeshActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UDynamicMeshComponent;
class UDynamicMeshPool;

// ********** Begin Class ADynamicMeshActor ********************************************************
#define FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execFreeAllComputeMeshes); \
	DECLARE_FUNCTION(execReleaseAllComputeMeshes); \
	DECLARE_FUNCTION(execReleaseComputeMesh); \
	DECLARE_FUNCTION(execAllocateComputeMesh); \
	DECLARE_FUNCTION(execGetComputeMeshPool); \
	DECLARE_FUNCTION(execGetDynamicMeshComponent);


struct Z_Construct_UClass_ADynamicMeshActor_Statics;
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_ADynamicMeshActor_NoRegister();

#define FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesADynamicMeshActor(); \
	friend struct ::Z_Construct_UClass_ADynamicMeshActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYFRAMEWORK_API UClass* ::Z_Construct_UClass_ADynamicMeshActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ADynamicMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryFramework"), Z_Construct_UClass_ADynamicMeshActor_NoRegister) \
	DECLARE_SERIALIZER(ADynamicMeshActor)


#define FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYFRAMEWORK_API ADynamicMeshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADynamicMeshActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYFRAMEWORK_API, ADynamicMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADynamicMeshActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADynamicMeshActor(ADynamicMeshActor&&) = delete; \
	ADynamicMeshActor(const ADynamicMeshActor&) = delete; \
	GEOMETRYFRAMEWORK_API virtual ~ADynamicMeshActor();


#define FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_15_PROLOG
#define FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_INCLASS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADynamicMeshActor;

// ********** End Class ADynamicMeshActor **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
