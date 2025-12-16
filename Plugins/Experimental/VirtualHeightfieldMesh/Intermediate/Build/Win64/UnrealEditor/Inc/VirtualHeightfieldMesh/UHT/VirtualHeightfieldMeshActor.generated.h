// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VirtualHeightfieldMeshActor.h"

#ifdef VIRTUALHEIGHTFIELDMESH_VirtualHeightfieldMeshActor_generated_h
#error "VirtualHeightfieldMeshActor.generated.h already included, missing '#pragma once' in VirtualHeightfieldMeshActor.h"
#endif
#define VIRTUALHEIGHTFIELDMESH_VirtualHeightfieldMeshActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AVirtualHeightfieldMesh **************************************************
struct Z_Construct_UClass_AVirtualHeightfieldMesh_Statics;
VIRTUALHEIGHTFIELDMESH_API UClass* Z_Construct_UClass_AVirtualHeightfieldMesh_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_VirtualHeightfieldMeshActor_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAVirtualHeightfieldMesh(); \
	friend struct ::Z_Construct_UClass_AVirtualHeightfieldMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIRTUALHEIGHTFIELDMESH_API UClass* ::Z_Construct_UClass_AVirtualHeightfieldMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(AVirtualHeightfieldMesh, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VirtualHeightfieldMesh"), Z_Construct_UClass_AVirtualHeightfieldMesh_NoRegister) \
	DECLARE_SERIALIZER(AVirtualHeightfieldMesh)


#define FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_VirtualHeightfieldMeshActor_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VIRTUALHEIGHTFIELDMESH_API AVirtualHeightfieldMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVirtualHeightfieldMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VIRTUALHEIGHTFIELDMESH_API, AVirtualHeightfieldMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVirtualHeightfieldMesh); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVirtualHeightfieldMesh(AVirtualHeightfieldMesh&&) = delete; \
	AVirtualHeightfieldMesh(const AVirtualHeightfieldMesh&) = delete; \
	VIRTUALHEIGHTFIELDMESH_API virtual ~AVirtualHeightfieldMesh();


#define FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_VirtualHeightfieldMeshActor_h_8_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_VirtualHeightfieldMeshActor_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_VirtualHeightfieldMeshActor_h_11_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_VirtualHeightfieldMeshActor_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVirtualHeightfieldMesh;

// ********** End Class AVirtualHeightfieldMesh ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_VirtualHeightfieldMeshActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
