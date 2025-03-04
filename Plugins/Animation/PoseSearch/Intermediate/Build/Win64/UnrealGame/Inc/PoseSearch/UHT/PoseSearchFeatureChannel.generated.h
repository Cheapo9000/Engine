// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchFeatureChannel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POSESEARCH_PoseSearchFeatureChannel_generated_h
#error "PoseSearchFeatureChannel.generated.h already included, missing '#pragma once' in PoseSearchFeatureChannel.h"
#endif
#define POSESEARCH_PoseSearchFeatureChannel_generated_h

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchFeatureChannel(); \
	friend struct Z_Construct_UClass_UPoseSearchFeatureChannel_Statics; \
public: \
	DECLARE_CLASS(UPoseSearchFeatureChannel, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PoseSearch"), NO_API) \
	DECLARE_SERIALIZER(UPoseSearchFeatureChannel) \
	virtual UObject* _getUObject() const override { return const_cast<UPoseSearchFeatureChannel*>(this); }


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_117_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseSearchFeatureChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPoseSearchFeatureChannel(UPoseSearchFeatureChannel&&); \
	UPoseSearchFeatureChannel(const UPoseSearchFeatureChannel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseSearchFeatureChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchFeatureChannel); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchFeatureChannel) \
	NO_API virtual ~UPoseSearchFeatureChannel();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_114_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_117_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POSESEARCH_API UClass* StaticClass<class UPoseSearchFeatureChannel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h


#define FOREACH_ENUM_ECOMPONENTSTRIPPINGVECTOR(op) \
	op(EComponentStrippingVector::None) \
	op(EComponentStrippingVector::StripXY) \
	op(EComponentStrippingVector::StripZ) 

enum class EComponentStrippingVector : uint8;
template<> struct TIsUEnumClass<EComponentStrippingVector> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EComponentStrippingVector>();

#define FOREACH_ENUM_EINPUTQUERYPOSE(op) \
	op(EInputQueryPose::UseCharacterPose) \
	op(EInputQueryPose::UseContinuingPose) 

enum class EInputQueryPose : uint8;
template<> struct TIsUEnumClass<EInputQueryPose> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EInputQueryPose>();

#define FOREACH_ENUM_EPERMUTATIONTIMETYPE(op) \
	op(EPermutationTimeType::UseSampleTime) \
	op(EPermutationTimeType::UsePermutationTime) \
	op(EPermutationTimeType::UseSampleToPermutationTime) 

enum class EPermutationTimeType : uint8;
template<> struct TIsUEnumClass<EPermutationTimeType> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EPermutationTimeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
