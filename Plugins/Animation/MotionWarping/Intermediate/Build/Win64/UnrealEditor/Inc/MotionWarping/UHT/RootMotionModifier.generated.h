// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RootMotionModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
class UMotionWarpingComponent;
class URootMotionModifier;
class URootMotionModifier_Scale;
#ifdef MOTIONWARPING_RootMotionModifier_generated_h
#error "RootMotionModifier.generated.h already included, missing '#pragma once' in RootMotionModifier.h"
#endif
#define MOTIONWARPING_RootMotionModifier_generated_h

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics; \
	MOTIONWARPING_API static class UScriptStruct* StaticStruct();


template<> MOTIONWARPING_API UScriptStruct* StaticStruct<struct FMotionWarpingUpdateContext>();

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_61_DELEGATE \
MOTIONWARPING_API void FOnRootMotionModifierDelegate_DelegateWrapper(const FScriptDelegate& OnRootMotionModifierDelegate, UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* RootMotionModifier);


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURootMotionModifier(); \
	friend struct Z_Construct_UClass_URootMotionModifier_Statics; \
public: \
	DECLARE_CLASS(URootMotionModifier, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(URootMotionModifier)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_69_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URootMotionModifier(URootMotionModifier&&); \
	URootMotionModifier(const URootMotionModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URootMotionModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URootMotionModifier); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URootMotionModifier) \
	NO_API virtual ~URootMotionModifier();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_66_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONWARPING_API UClass* StaticClass<class URootMotionModifier>();

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_171_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOTIONWARPING_API UScriptStruct* StaticStruct<struct FMotionWarpingTarget>();

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_273_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURootMotionModifier_Warp(); \
	friend struct Z_Construct_UClass_URootMotionModifier_Warp_Statics; \
public: \
	DECLARE_CLASS(URootMotionModifier_Warp, URootMotionModifier, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(URootMotionModifier_Warp)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_273_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URootMotionModifier_Warp(URootMotionModifier_Warp&&); \
	URootMotionModifier_Warp(const URootMotionModifier_Warp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URootMotionModifier_Warp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URootMotionModifier_Warp); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URootMotionModifier_Warp) \
	NO_API virtual ~URootMotionModifier_Warp();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_270_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_273_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_273_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_273_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONWARPING_API UClass* StaticClass<class URootMotionModifier_Warp>();

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_366_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_RootMotionModifier_SimpleWarp(); \
	friend struct Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_RootMotionModifier_SimpleWarp, URootMotionModifier_Warp, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_RootMotionModifier_SimpleWarp)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_366_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDEPRECATED_RootMotionModifier_SimpleWarp(UDEPRECATED_RootMotionModifier_SimpleWarp&&); \
	UDEPRECATED_RootMotionModifier_SimpleWarp(const UDEPRECATED_RootMotionModifier_SimpleWarp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_RootMotionModifier_SimpleWarp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_RootMotionModifier_SimpleWarp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_RootMotionModifier_SimpleWarp) \
	NO_API virtual ~UDEPRECATED_RootMotionModifier_SimpleWarp();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_363_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_366_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_366_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_366_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONWARPING_API UClass* StaticClass<class UDEPRECATED_RootMotionModifier_SimpleWarp>();

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_380_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddRootMotionModifierScale);


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_380_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURootMotionModifier_Scale(); \
	friend struct Z_Construct_UClass_URootMotionModifier_Scale_Statics; \
public: \
	DECLARE_CLASS(URootMotionModifier_Scale, URootMotionModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(URootMotionModifier_Scale)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_380_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URootMotionModifier_Scale(URootMotionModifier_Scale&&); \
	URootMotionModifier_Scale(const URootMotionModifier_Scale&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URootMotionModifier_Scale); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URootMotionModifier_Scale); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URootMotionModifier_Scale) \
	NO_API virtual ~URootMotionModifier_Scale();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_377_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_380_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_380_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_380_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_380_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONWARPING_API UClass* StaticClass<class URootMotionModifier_Scale>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h


#define FOREACH_ENUM_EROOTMOTIONMODIFIERSTATE(op) \
	op(ERootMotionModifierState::Waiting) \
	op(ERootMotionModifierState::Active) \
	op(ERootMotionModifierState::MarkedForRemoval) \
	op(ERootMotionModifierState::Disabled) 

enum class ERootMotionModifierState : uint8;
template<> struct TIsUEnumClass<ERootMotionModifierState> { enum { Value = true }; };
template<> MOTIONWARPING_API UEnum* StaticEnum<ERootMotionModifierState>();

#define FOREACH_ENUM_EMOTIONWARPROTATIONTYPE(op) \
	op(EMotionWarpRotationType::Default) \
	op(EMotionWarpRotationType::Facing) 

enum class EMotionWarpRotationType : uint8;
template<> struct TIsUEnumClass<EMotionWarpRotationType> { enum { Value = true }; };
template<> MOTIONWARPING_API UEnum* StaticEnum<EMotionWarpRotationType>();

#define FOREACH_ENUM_EMOTIONWARPROTATIONMETHOD(op) \
	op(EMotionWarpRotationMethod::Slerp) \
	op(EMotionWarpRotationMethod::SlerpWithClampedRate) \
	op(EMotionWarpRotationMethod::ConstantRate) 

enum class EMotionWarpRotationMethod : uint8;
template<> struct TIsUEnumClass<EMotionWarpRotationMethod> { enum { Value = true }; };
template<> MOTIONWARPING_API UEnum* StaticEnum<EMotionWarpRotationMethod>();

#define FOREACH_ENUM_EWARPPOINTANIMPROVIDER(op) \
	op(EWarpPointAnimProvider::None) \
	op(EWarpPointAnimProvider::Static) \
	op(EWarpPointAnimProvider::Bone) 

enum class EWarpPointAnimProvider : uint8;
template<> struct TIsUEnumClass<EWarpPointAnimProvider> { enum { Value = true }; };
template<> MOTIONWARPING_API UEnum* StaticEnum<EWarpPointAnimProvider>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
