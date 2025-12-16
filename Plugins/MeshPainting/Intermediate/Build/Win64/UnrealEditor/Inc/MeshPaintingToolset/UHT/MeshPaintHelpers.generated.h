// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshPaintHelpers.h"

#ifdef MESHPAINTINGTOOLSET_MeshPaintHelpers_generated_h
#error "MeshPaintHelpers.generated.h already included, missing '#pragma once' in MeshPaintHelpers.h"
#endif
#define MESHPAINTINGTOOLSET_MeshPaintHelpers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMeshPaintingSubsystem ***************************************************
struct Z_Construct_UClass_UMeshPaintingSubsystem_Statics;
MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshPaintingSubsystem_NoRegister();

#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintHelpers_h_144_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshPaintingSubsystem(); \
	friend struct ::Z_Construct_UClass_UMeshPaintingSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHPAINTINGTOOLSET_API UClass* ::Z_Construct_UClass_UMeshPaintingSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshPaintingSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshPaintingToolset"), Z_Construct_UClass_UMeshPaintingSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMeshPaintingSubsystem)


#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintHelpers_h_144_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshPaintingSubsystem(UMeshPaintingSubsystem&&) = delete; \
	UMeshPaintingSubsystem(const UMeshPaintingSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHPAINTINGTOOLSET_API, UMeshPaintingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshPaintingSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMeshPaintingSubsystem) \
	MESHPAINTINGTOOLSET_API virtual ~UMeshPaintingSubsystem();


#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintHelpers_h_141_PROLOG
#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintHelpers_h_144_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintHelpers_h_144_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintHelpers_h_144_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshPaintingSubsystem;

// ********** End Class UMeshPaintingSubsystem *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintHelpers_h

// ********** Begin Enum ETexturePaintWeightTypes **************************************************
#define FOREACH_ENUM_ETEXTUREPAINTWEIGHTTYPES(op) \
	op(ETexturePaintWeightTypes::AlphaLerp) \
	op(ETexturePaintWeightTypes::RGB) \
	op(ETexturePaintWeightTypes::ARGB) \
	op(ETexturePaintWeightTypes::OneMinusARGB) 

enum class ETexturePaintWeightTypes : uint8;
template<> struct TIsUEnumClass<ETexturePaintWeightTypes> { enum { Value = true }; };
template<> MESHPAINTINGTOOLSET_NON_ATTRIBUTED_API UEnum* StaticEnum<ETexturePaintWeightTypes>();
// ********** End Enum ETexturePaintWeightTypes ****************************************************

// ********** Begin Enum ETexturePaintWeightIndex **************************************************
#define FOREACH_ENUM_ETEXTUREPAINTWEIGHTINDEX(op) \
	op(ETexturePaintWeightIndex::TextureOne) \
	op(ETexturePaintWeightIndex::TextureTwo) \
	op(ETexturePaintWeightIndex::TextureThree) \
	op(ETexturePaintWeightIndex::TextureFour) \
	op(ETexturePaintWeightIndex::TextureFive) 

enum class ETexturePaintWeightIndex : uint8;
template<> struct TIsUEnumClass<ETexturePaintWeightIndex> { enum { Value = true }; };
template<> MESHPAINTINGTOOLSET_NON_ATTRIBUTED_API UEnum* StaticEnum<ETexturePaintWeightIndex>();
// ********** End Enum ETexturePaintWeightIndex ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
