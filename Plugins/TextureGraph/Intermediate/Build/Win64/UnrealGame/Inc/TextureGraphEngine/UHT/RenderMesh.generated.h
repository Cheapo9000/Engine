// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "3D/RenderMesh.h"

#ifdef TEXTUREGRAPHENGINE_RenderMesh_generated_h
#error "RenderMesh.generated.h already included, missing '#pragma once' in RenderMesh.h"
#endif
#define TEXTUREGRAPHENGINE_RenderMesh_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_3D_RenderMesh_h

// ********** Begin Enum MeshType ******************************************************************
#define FOREACH_ENUM_MESHTYPE(op) \
	op(MeshType::Plane) \
	op(MeshType::LibraryAsset) \
	op(MeshType::ShaderBall) \
	op(MeshType::CustomMesh) \
	op(MeshType::Editor) 

enum class MeshType : uint8;
template<> struct TIsUEnumClass<MeshType> { enum { Value = true }; };
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<MeshType>();
// ********** End Enum MeshType ********************************************************************

// ********** Begin Enum MeshSplitType *************************************************************
#define FOREACH_ENUM_MESHSPLITTYPE(op) \
	op(MeshSplitType::Material) \
	op(MeshSplitType::UDIM) \
	op(MeshSplitType::Single) 

enum class MeshSplitType : uint8;
template<> struct TIsUEnumClass<MeshSplitType> { enum { Value = true }; };
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<MeshSplitType>();
// ********** End Enum MeshSplitType ***************************************************************

// ********** Begin Enum BoundsType ****************************************************************
#define FOREACH_ENUM_BOUNDSTYPE(op) \
	op(BoundsType::Target) \
	op(BoundsType::CombinedTarget) \
	op(BoundsType::Full) 

enum class BoundsType : uint8;
template<> struct TIsUEnumClass<BoundsType> { enum { Value = true }; };
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<BoundsType>();
// ********** End Enum BoundsType ******************************************************************

// ********** Begin Enum WorldTextures *************************************************************
#define FOREACH_ENUM_WORLDTEXTURES(op) \
	op(Normals) \
	op(Tangents) \
	op(Position) \
	op(UVMask) \
	op(WorldTextureCount) 

enum WorldTextures : int;
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<WorldTextures>();
// ********** End Enum WorldTextures ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
