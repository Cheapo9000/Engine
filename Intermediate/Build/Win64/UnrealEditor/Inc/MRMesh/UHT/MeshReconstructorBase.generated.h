// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshReconstructorBase.h"

#ifdef MRMESH_MeshReconstructorBase_generated_h
#error "MeshReconstructorBase.generated.h already included, missing '#pragma once' in MeshReconstructorBase.h"
#endif
#define MRMESH_MeshReconstructorBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMRMeshComponent;

// ********** Begin ScriptStruct FMRMeshConfiguration **********************************************
struct Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics;
#define FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics; \
	MRMESH_API static class UScriptStruct* StaticStruct();


struct FMRMeshConfiguration;
// ********** End ScriptStruct FMRMeshConfiguration ************************************************

// ********** Begin Class UMeshReconstructorBase ***************************************************
#define FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDisconnectMRMesh); \
	DECLARE_FUNCTION(execConnectMRMesh); \
	DECLARE_FUNCTION(execIsReconstructionPaused); \
	DECLARE_FUNCTION(execIsReconstructionStarted); \
	DECLARE_FUNCTION(execPauseReconstruction); \
	DECLARE_FUNCTION(execStopReconstruction); \
	DECLARE_FUNCTION(execStartReconstruction);


struct Z_Construct_UClass_UMeshReconstructorBase_Statics;
MRMESH_API UClass* Z_Construct_UClass_UMeshReconstructorBase_NoRegister();

#define FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshReconstructorBase(); \
	friend struct ::Z_Construct_UClass_UMeshReconstructorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MRMESH_API UClass* ::Z_Construct_UClass_UMeshReconstructorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshReconstructorBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MRMesh"), Z_Construct_UClass_UMeshReconstructorBase_NoRegister) \
	DECLARE_SERIALIZER(UMeshReconstructorBase)


#define FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MRMESH_API UMeshReconstructorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshReconstructorBase(UMeshReconstructorBase&&) = delete; \
	UMeshReconstructorBase(const UMeshReconstructorBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MRMESH_API, UMeshReconstructorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshReconstructorBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshReconstructorBase) \
	MRMESH_API virtual ~UMeshReconstructorBase();


#define FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_24_PROLOG
#define FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshReconstructorBase;

// ********** End Class UMeshReconstructorBase *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
