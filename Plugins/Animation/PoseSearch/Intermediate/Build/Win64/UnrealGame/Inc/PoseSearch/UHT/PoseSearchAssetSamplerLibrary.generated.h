// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchAssetSamplerLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimInstance;
enum class EPoseSearchAssetSamplerSpace : uint8;
struct FPoseSearchAssetSamplerInput;
struct FPoseSearchAssetSamplerPose;
#ifdef POSESEARCH_PoseSearchAssetSamplerLibrary_generated_h
#error "PoseSearchAssetSamplerLibrary.generated.h already included, missing '#pragma once' in PoseSearchAssetSamplerLibrary.h"
#endif
#define POSESEARCH_PoseSearchAssetSamplerLibrary_generated_h

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchAssetSamplerInput_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchAssetSamplerInput>();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchAssetSamplerPose_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchAssetSamplerPose>();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDraw); \
	DECLARE_FUNCTION(execGetTransformByName); \
	DECLARE_FUNCTION(execGetTransform); \
	DECLARE_FUNCTION(execSamplePose);


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchAssetSamplerLibrary(); \
	friend struct Z_Construct_UClass_UPoseSearchAssetSamplerLibrary_Statics; \
public: \
	DECLARE_CLASS(UPoseSearchAssetSamplerLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), NO_API) \
	DECLARE_SERIALIZER(UPoseSearchAssetSamplerLibrary)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseSearchAssetSamplerLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPoseSearchAssetSamplerLibrary(UPoseSearchAssetSamplerLibrary&&); \
	UPoseSearchAssetSamplerLibrary(const UPoseSearchAssetSamplerLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseSearchAssetSamplerLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchAssetSamplerLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchAssetSamplerLibrary) \
	NO_API virtual ~UPoseSearchAssetSamplerLibrary();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h_64_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POSESEARCH_API UClass* StaticClass<class UPoseSearchAssetSamplerLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h


#define FOREACH_ENUM_EPOSESEARCHASSETSAMPLERSPACE(op) \
	op(EPoseSearchAssetSamplerSpace::Local) \
	op(EPoseSearchAssetSamplerSpace::Component) \
	op(EPoseSearchAssetSamplerSpace::World) 

enum class EPoseSearchAssetSamplerSpace : uint8;
template<> struct TIsUEnumClass<EPoseSearchAssetSamplerSpace> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchAssetSamplerSpace>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
