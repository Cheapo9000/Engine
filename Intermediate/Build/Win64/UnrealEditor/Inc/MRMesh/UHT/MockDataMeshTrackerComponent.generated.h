// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MockDataMeshTrackerComponent.h"

#ifdef MRMESH_MockDataMeshTrackerComponent_generated_h
#error "MockDataMeshTrackerComponent.generated.h already included, missing '#pragma once' in MockDataMeshTrackerComponent.h"
#endif
#define MRMESH_MockDataMeshTrackerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMRMeshComponent;

// ********** Begin Delegate FOnMockDataMeshTrackerUpdated *****************************************
#define FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_63_DELEGATE \
static MRMESH_API void FOnMockDataMeshTrackerUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnMockDataMeshTrackerUpdated, int32 Index, TArray<FVector> const& Vertices, TArray<int32> const& Triangles, TArray<FVector> const& Normals, TArray<float> const& Confidence);


// ********** End Delegate FOnMockDataMeshTrackerUpdated *******************************************

// ********** Begin Class UMockDataMeshTrackerComponent ********************************************
#define FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_RPC_WRAPPERS \
	DECLARE_FUNCTION(execDisconnectMRMesh); \
	DECLARE_FUNCTION(execConnectMRMesh);


struct Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics;
MRMESH_API UClass* Z_Construct_UClass_UMockDataMeshTrackerComponent_NoRegister();

#define FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUMockDataMeshTrackerComponent(); \
	friend struct ::Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MRMESH_API UClass* ::Z_Construct_UClass_UMockDataMeshTrackerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMockDataMeshTrackerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MRMesh"), Z_Construct_UClass_UMockDataMeshTrackerComponent_NoRegister) \
	DECLARE_SERIALIZER(UMockDataMeshTrackerComponent)


#define FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MRMESH_API UMockDataMeshTrackerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMockDataMeshTrackerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MRMESH_API, UMockDataMeshTrackerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMockDataMeshTrackerComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMockDataMeshTrackerComponent(UMockDataMeshTrackerComponent&&) = delete; \
	UMockDataMeshTrackerComponent(const UMockDataMeshTrackerComponent&) = delete;


#define FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_31_PROLOG
#define FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_INCLASS \
	FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMockDataMeshTrackerComponent;

// ********** End Class UMockDataMeshTrackerComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h

// ********** Begin Enum EMeshTrackerVertexColorMode ***********************************************
#define FOREACH_ENUM_EMESHTRACKERVERTEXCOLORMODE(op) \
	op(EMeshTrackerVertexColorMode::None) \
	op(EMeshTrackerVertexColorMode::Confidence) \
	op(EMeshTrackerVertexColorMode::Block) 

enum class EMeshTrackerVertexColorMode : uint8;
template<> struct TIsUEnumClass<EMeshTrackerVertexColorMode> { enum { Value = true }; };
template<> MRMESH_NON_ATTRIBUTED_API UEnum* StaticEnum<EMeshTrackerVertexColorMode>();
// ********** End Enum EMeshTrackerVertexColorMode *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
