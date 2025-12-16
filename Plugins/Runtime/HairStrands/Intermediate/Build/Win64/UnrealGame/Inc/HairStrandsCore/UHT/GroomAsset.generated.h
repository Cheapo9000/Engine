// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomAsset.h"

#ifdef HAIRSTRANDSCORE_GroomAsset_generated_h
#error "GroomAsset.generated.h already included, missing '#pragma once' in GroomAsset.h"
#endif
#define HAIRSTRANDSCORE_GroomAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMesh;
enum class EGroomInterpolationType : uint8;
struct FHairGroupsCardsSourceDescription;
struct FHairGroupsInterpolation;
struct FHairGroupsLOD;
struct FHairGroupsMaterial;
struct FHairGroupsMeshesSourceDescription;
struct FHairGroupsPhysics;
struct FHairGroupsRendering;

// ********** Begin ScriptStruct FHairGroupLODInfo *************************************************
struct Z_Construct_UScriptStruct_FHairGroupLODInfo_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHairGroupLODInfo_Statics; \
	HAIRSTRANDSCORE_API static class UScriptStruct* StaticStruct();


struct FHairGroupLODInfo;
// ********** End ScriptStruct FHairGroupLODInfo ***************************************************

// ********** Begin ScriptStruct FHairGroupInfo ****************************************************
struct Z_Construct_UScriptStruct_FHairGroupInfo_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHairGroupInfo_Statics; \
	HAIRSTRANDSCORE_API static class UScriptStruct* StaticStruct();


struct FHairGroupInfo;
// ********** End ScriptStruct FHairGroupInfo ******************************************************

// ********** Begin ScriptStruct FHairGroupsMaterial ***********************************************
struct Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_98_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics; \
	HAIRSTRANDSCORE_API static class UScriptStruct* StaticStruct();


struct FHairGroupsMaterial;
// ********** End ScriptStruct FHairGroupsMaterial *************************************************

// ********** Begin ScriptStruct FHairGroupInfoWithVisibility **************************************
struct Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_429_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics; \
	HAIRSTRANDSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FHairGroupInfo Super;


struct FHairGroupInfoWithVisibility;
// ********** End ScriptStruct FHairGroupInfoWithVisibility ****************************************

// ********** Begin Class UGroomAsset **************************************************************
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_468_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetDeformedGroupSections); \
	DECLARE_FUNCTION(execGetDeformedGroupSections); \
	DECLARE_FUNCTION(execSetRiggedSkeletalMesh); \
	DECLARE_FUNCTION(execGetRiggedSkeletalMesh); \
	DECLARE_FUNCTION(execSetHairInterpolationType); \
	DECLARE_FUNCTION(execGetHairInterpolationType); \
	DECLARE_FUNCTION(execSetEnableSimulationCache); \
	DECLARE_FUNCTION(execGetEnableSimulationCache); \
	DECLARE_FUNCTION(execSetEnableGlobalInterpolation); \
	DECLARE_FUNCTION(execGetEnableGlobalInterpolation); \
	DECLARE_FUNCTION(execSetHairGroupsMaterials); \
	DECLARE_FUNCTION(execGetHairGroupsMaterials); \
	DECLARE_FUNCTION(execSetHairGroupsMeshes); \
	DECLARE_FUNCTION(execGetHairGroupsMeshes); \
	DECLARE_FUNCTION(execSetHairGroupsCards); \
	DECLARE_FUNCTION(execGetHairGroupsCards); \
	DECLARE_FUNCTION(execSetHairGroupsLOD); \
	DECLARE_FUNCTION(execGetHairGroupsLOD); \
	DECLARE_FUNCTION(execSetHairGroupsInterpolation); \
	DECLARE_FUNCTION(execGetHairGroupsInterpolation); \
	DECLARE_FUNCTION(execSetHairGroupsPhysics); \
	DECLARE_FUNCTION(execGetHairGroupsPhysics); \
	DECLARE_FUNCTION(execSetHairGroupsRendering); \
	DECLARE_FUNCTION(execGetHairGroupsRendering); \
	DECLARE_FUNCTION(execCreateGroomDataflow);


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_468_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UGroomAsset, HAIRSTRANDSCORE_API)


struct Z_Construct_UClass_UGroomAsset_Statics;
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomAsset_NoRegister();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_468_INCLASS \
private: \
	static void StaticRegisterNativesUGroomAsset(); \
	friend struct ::Z_Construct_UClass_UGroomAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIRSTRANDSCORE_API UClass* ::Z_Construct_UClass_UGroomAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UGroomAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), Z_Construct_UClass_UGroomAsset_NoRegister) \
	DECLARE_SERIALIZER(UGroomAsset) \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_468_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UGroomAsset*>(this); }


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_468_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HAIRSTRANDSCORE_API UGroomAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGroomAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HAIRSTRANDSCORE_API, UGroomAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroomAsset); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGroomAsset(UGroomAsset&&) = delete; \
	UGroomAsset(const UGroomAsset&) = delete; \
	HAIRSTRANDSCORE_API virtual ~UGroomAsset();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_465_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_468_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_468_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_468_INCLASS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_468_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGroomAsset;

// ********** End Class UGroomAsset ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h

// ********** Begin Enum EHairAtlasTextureType *****************************************************
#define FOREACH_ENUM_EHAIRATLASTEXTURETYPE(op) \
	op(EHairAtlasTextureType::Depth) \
	op(EHairAtlasTextureType::Tangent) \
	op(EHairAtlasTextureType::Attribute) \
	op(EHairAtlasTextureType::Coverage) \
	op(EHairAtlasTextureType::AuxilaryData) \
	op(EHairAtlasTextureType::Material) 

enum class EHairAtlasTextureType : uint8;
template<> struct TIsUEnumClass<EHairAtlasTextureType> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EHairAtlasTextureType>();
// ********** End Enum EHairAtlasTextureType *******************************************************

// ********** Begin Enum EHairDescriptionType ******************************************************
#define FOREACH_ENUM_EHAIRDESCRIPTIONTYPE(op) \
	op(EHairDescriptionType::Source) \
	op(EHairDescriptionType::Edit) \
	op(EHairDescriptionType::Count) 

enum class EHairDescriptionType : uint8;
template<> struct TIsUEnumClass<EHairDescriptionType> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EHairDescriptionType>();
// ********** End Enum EHairDescriptionType ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
