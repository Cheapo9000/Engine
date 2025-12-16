// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VirtualHeightfieldMeshComponent.h"

#ifdef VIRTUALHEIGHTFIELDMESH_VirtualHeightfieldMeshComponent_generated_h
#error "VirtualHeightfieldMeshComponent.generated.h already included, missing '#pragma once' in VirtualHeightfieldMeshComponent.h"
#endif
#define VIRTUALHEIGHTFIELDMESH_VirtualHeightfieldMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVirtualHeightfieldMeshComponent *****************************************
#define FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_VirtualHeightfieldMeshComponent_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGatherHideFlags);


struct Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics;
VIRTUALHEIGHTFIELDMESH_API UClass* Z_Construct_UClass_UVirtualHeightfieldMeshComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_VirtualHeightfieldMeshComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUVirtualHeightfieldMeshComponent(); \
	friend struct ::Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIRTUALHEIGHTFIELDMESH_API UClass* ::Z_Construct_UClass_UVirtualHeightfieldMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UVirtualHeightfieldMeshComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VirtualHeightfieldMesh"), Z_Construct_UClass_UVirtualHeightfieldMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UVirtualHeightfieldMeshComponent)


#define FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_VirtualHeightfieldMeshComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VIRTUALHEIGHTFIELDMESH_API UVirtualHeightfieldMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualHeightfieldMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VIRTUALHEIGHTFIELDMESH_API, UVirtualHeightfieldMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualHeightfieldMeshComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVirtualHeightfieldMeshComponent(UVirtualHeightfieldMeshComponent&&) = delete; \
	UVirtualHeightfieldMeshComponent(const UVirtualHeightfieldMeshComponent&) = delete; \
	VIRTUALHEIGHTFIELDMESH_API virtual ~UVirtualHeightfieldMeshComponent();


#define FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_VirtualHeightfieldMeshComponent_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_VirtualHeightfieldMeshComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_VirtualHeightfieldMeshComponent_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_VirtualHeightfieldMeshComponent_h_20_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_VirtualHeightfieldMeshComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVirtualHeightfieldMeshComponent;

// ********** End Class UVirtualHeightfieldMeshComponent *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_VirtualHeightfieldMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
