// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomBindingAsset.h"

#ifdef HAIRSTRANDSCORE_GroomBindingAsset_generated_h
#error "GroomBindingAsset.generated.h already included, missing '#pragma once' in GroomBindingAsset.h"
#endif
#define HAIRSTRANDSCORE_GroomBindingAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGeometryCache;
class UGroomAsset;
class UGroomBindingAsset;
class USkeletalMesh;
enum class EGroomBindingAssetBuildResult : uint8;
enum class EGroomBindingMeshType : uint8;
struct FGoomBindingGroupInfo;

// ********** Begin ScriptStruct FGoomBindingGroupInfo *********************************************
struct Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics; \
	HAIRSTRANDSCORE_API static class UScriptStruct* StaticStruct();


struct FGoomBindingGroupInfo;
// ********** End ScriptStruct FGoomBindingGroupInfo ***********************************************

// ********** Begin Delegate FOnGroomBindingAssetBuildComplete *************************************
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_113_DELEGATE \
HAIRSTRANDSCORE_API void FOnGroomBindingAssetBuildComplete_DelegateWrapper(const FScriptDelegate& OnGroomBindingAssetBuildComplete, UGroomBindingAsset* GroomBinding, EGroomBindingAssetBuildResult Result);


// ********** End Delegate FOnGroomBindingAssetBuildComplete ***************************************

// ********** Begin Class UGroomBindingAsset *******************************************************
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_183_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBuild); \
	DECLARE_FUNCTION(execSetGroupInfos); \
	DECLARE_FUNCTION(execGetGroupInfos); \
	DECLARE_FUNCTION(execSetTargetBindingAttribute); \
	DECLARE_FUNCTION(execGetTargetBindingAttribute); \
	DECLARE_FUNCTION(execSetMatchingSection); \
	DECLARE_FUNCTION(execGetMatchingSection); \
	DECLARE_FUNCTION(execSetNumInterpolationPoints); \
	DECLARE_FUNCTION(execGetNumInterpolationPoints); \
	DECLARE_FUNCTION(execSetTargetGeometryCache); \
	DECLARE_FUNCTION(execGetTargetGeometryCache); \
	DECLARE_FUNCTION(execSetSourceGeometryCache); \
	DECLARE_FUNCTION(execGetSourceGeometryCache); \
	DECLARE_FUNCTION(execGetTargetMeshUsedMinLOD); \
	DECLARE_FUNCTION(execSetTargetMeshUsedMinLOD); \
	DECLARE_FUNCTION(execSetTargetMeshRequestedMinLOD); \
	DECLARE_FUNCTION(execGetTargetMeshRequestedMinLOD); \
	DECLARE_FUNCTION(execSetTargetSkeletalMesh); \
	DECLARE_FUNCTION(execGetTargetSkeletalMesh); \
	DECLARE_FUNCTION(execGetSourceMeshUsedLOD); \
	DECLARE_FUNCTION(execSetSourceMeshUsedLOD); \
	DECLARE_FUNCTION(execSetSourceMeshRequestedLOD); \
	DECLARE_FUNCTION(execGetSourceMeshRequestedLOD); \
	DECLARE_FUNCTION(execSetSourceSkeletalMesh); \
	DECLARE_FUNCTION(execGetSourceSkeletalMesh); \
	DECLARE_FUNCTION(execSetGroom); \
	DECLARE_FUNCTION(execGetGroom); \
	DECLARE_FUNCTION(execSetGroomBindingType); \
	DECLARE_FUNCTION(execGetGroomBindingType);


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_183_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UGroomBindingAsset, HAIRSTRANDSCORE_API)


struct Z_Construct_UClass_UGroomBindingAsset_Statics;
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomBindingAsset_NoRegister();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_183_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGroomBindingAsset(); \
	friend struct ::Z_Construct_UClass_UGroomBindingAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIRSTRANDSCORE_API UClass* ::Z_Construct_UClass_UGroomBindingAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UGroomBindingAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), Z_Construct_UClass_UGroomBindingAsset_NoRegister) \
	DECLARE_SERIALIZER(UGroomBindingAsset) \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_183_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UGroomBindingAsset*>(this); }


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_183_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HAIRSTRANDSCORE_API UGroomBindingAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGroomBindingAsset(UGroomBindingAsset&&) = delete; \
	UGroomBindingAsset(const UGroomBindingAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HAIRSTRANDSCORE_API, UGroomBindingAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroomBindingAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGroomBindingAsset) \
	HAIRSTRANDSCORE_API virtual ~UGroomBindingAsset();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_180_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_183_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_183_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_183_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_183_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGroomBindingAsset;

// ********** End Class UGroomBindingAsset *********************************************************

// ********** Begin Class UGroomBindingAssetList ***************************************************
struct Z_Construct_UClass_UGroomBindingAssetList_Statics;
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomBindingAssetList_NoRegister();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_596_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGroomBindingAssetList(); \
	friend struct ::Z_Construct_UClass_UGroomBindingAssetList_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIRSTRANDSCORE_API UClass* ::Z_Construct_UClass_UGroomBindingAssetList_NoRegister(); \
public: \
	DECLARE_CLASS2(UGroomBindingAssetList, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), Z_Construct_UClass_UGroomBindingAssetList_NoRegister) \
	DECLARE_SERIALIZER(UGroomBindingAssetList)


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_596_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HAIRSTRANDSCORE_API UGroomBindingAssetList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGroomBindingAssetList(UGroomBindingAssetList&&) = delete; \
	UGroomBindingAssetList(const UGroomBindingAssetList&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HAIRSTRANDSCORE_API, UGroomBindingAssetList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroomBindingAssetList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGroomBindingAssetList) \
	HAIRSTRANDSCORE_API virtual ~UGroomBindingAssetList();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_593_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_596_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_596_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_596_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGroomBindingAssetList;

// ********** End Class UGroomBindingAssetList *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h

// ********** Begin Enum EGroomBindingMeshType *****************************************************
#define FOREACH_ENUM_EGROOMBINDINGMESHTYPE(op) \
	op(EGroomBindingMeshType::SkeletalMesh) \
	op(EGroomBindingMeshType::GeometryCache) 

enum class EGroomBindingMeshType : uint8;
template<> struct TIsUEnumClass<EGroomBindingMeshType> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGroomBindingMeshType>();
// ********** End Enum EGroomBindingMeshType *******************************************************

// ********** Begin Enum EGroomBindingAsyncProperties **********************************************
#define FOREACH_ENUM_EGROOMBINDINGASYNCPROPERTIES(op) \
	op(EGroomBindingAsyncProperties::None) \
	op(EGroomBindingAsyncProperties::GroomBindingType) \
	op(EGroomBindingAsyncProperties::Groom) \
	op(EGroomBindingAsyncProperties::SourceSkeletalMesh) \
	op(EGroomBindingAsyncProperties::SourceMeshRequestedLOD) \
	op(EGroomBindingAsyncProperties::SourceMeshUsedLOD) \
	op(EGroomBindingAsyncProperties::TargetSkeletalMesh) \
	op(EGroomBindingAsyncProperties::TargetMeshRequestedMinLOD) \
	op(EGroomBindingAsyncProperties::TargetMeshUsedMinLOD) \
	op(EGroomBindingAsyncProperties::SourceGeometryCache) \
	op(EGroomBindingAsyncProperties::TargetGeometryCache) \
	op(EGroomBindingAsyncProperties::NumInterpolationPoints) \
	op(EGroomBindingAsyncProperties::MatchingSection) \
	op(EGroomBindingAsyncProperties::GroupInfos) \
	op(EGroomBindingAsyncProperties::HairGroupResources) \
	op(EGroomBindingAsyncProperties::HairGroupPlatformData) \
	op(EGroomBindingAsyncProperties::TargetBindingAttribute) \
	op(EGroomBindingAsyncProperties::All) 

enum class EGroomBindingAsyncProperties : uint64;
template<> struct TIsUEnumClass<EGroomBindingAsyncProperties> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGroomBindingAsyncProperties>();
// ********** End Enum EGroomBindingAsyncProperties ************************************************

// ********** Begin Enum EGroomBindingAssetBuildResult *********************************************
#define FOREACH_ENUM_EGROOMBINDINGASSETBUILDRESULT(op) \
	op(EGroomBindingAssetBuildResult::Succeeded) \
	op(EGroomBindingAssetBuildResult::Failed) 

enum class EGroomBindingAssetBuildResult : uint8;
template<> struct TIsUEnumClass<EGroomBindingAssetBuildResult> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGroomBindingAssetBuildResult>();
// ********** End Enum EGroomBindingAssetBuildResult ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
