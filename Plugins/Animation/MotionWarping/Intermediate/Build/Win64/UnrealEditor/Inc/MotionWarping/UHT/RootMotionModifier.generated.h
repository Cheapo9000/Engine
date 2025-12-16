// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RootMotionModifier.h"

#ifdef MOTIONWARPING_RootMotionModifier_generated_h
#error "RootMotionModifier.generated.h already included, missing '#pragma once' in RootMotionModifier.h"
#endif
#define MOTIONWARPING_RootMotionModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
class UMotionWarpingComponent;
class URootMotionModifier;
class URootMotionModifier_Scale;

// ********** Begin ScriptStruct FMotionWarpingUpdateContext ***************************************
struct Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics;
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics; \
	MOTIONWARPING_API static class UScriptStruct* StaticStruct();


struct FMotionWarpingUpdateContext;
// ********** End ScriptStruct FMotionWarpingUpdateContext *****************************************

// ********** Begin Delegate FOnRootMotionModifierDelegate *****************************************
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_63_DELEGATE \
MOTIONWARPING_API void FOnRootMotionModifierDelegate_DelegateWrapper(const FScriptDelegate& OnRootMotionModifierDelegate, UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* RootMotionModifier);


// ********** End Delegate FOnRootMotionModifierDelegate *******************************************

// ********** Begin Class URootMotionModifier ******************************************************
struct Z_Construct_UClass_URootMotionModifier_Statics;
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_NoRegister();

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURootMotionModifier(); \
	friend struct ::Z_Construct_UClass_URootMotionModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOTIONWARPING_API UClass* ::Z_Construct_UClass_URootMotionModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(URootMotionModifier, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MotionWarping"), Z_Construct_UClass_URootMotionModifier_NoRegister) \
	DECLARE_SERIALIZER(URootMotionModifier)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_71_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URootMotionModifier(URootMotionModifier&&) = delete; \
	URootMotionModifier(const URootMotionModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOTIONWARPING_API, URootMotionModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URootMotionModifier); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URootMotionModifier) \
	MOTIONWARPING_API virtual ~URootMotionModifier();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_68_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_71_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URootMotionModifier;

// ********** End Class URootMotionModifier ********************************************************

// ********** Begin ScriptStruct FMotionWarpingTarget **********************************************
struct Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics;
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_188_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics; \
	MOTIONWARPING_API static class UScriptStruct* StaticStruct();


struct FMotionWarpingTarget;
// ********** End ScriptStruct FMotionWarpingTarget ************************************************

// ********** Begin Class URootMotionModifier_Warp *************************************************
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_321_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URootMotionModifier_Warp, MOTIONWARPING_API)


struct Z_Construct_UClass_URootMotionModifier_Warp_Statics;
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_Warp_NoRegister();

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_321_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURootMotionModifier_Warp(); \
	friend struct ::Z_Construct_UClass_URootMotionModifier_Warp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOTIONWARPING_API UClass* ::Z_Construct_UClass_URootMotionModifier_Warp_NoRegister(); \
public: \
	DECLARE_CLASS2(URootMotionModifier_Warp, URootMotionModifier, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MotionWarping"), Z_Construct_UClass_URootMotionModifier_Warp_NoRegister) \
	DECLARE_SERIALIZER(URootMotionModifier_Warp) \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_321_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_321_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URootMotionModifier_Warp(URootMotionModifier_Warp&&) = delete; \
	URootMotionModifier_Warp(const URootMotionModifier_Warp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOTIONWARPING_API, URootMotionModifier_Warp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URootMotionModifier_Warp); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URootMotionModifier_Warp) \
	MOTIONWARPING_API virtual ~URootMotionModifier_Warp();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_318_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_321_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_321_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_321_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URootMotionModifier_Warp;

// ********** End Class URootMotionModifier_Warp ***************************************************

// ********** Begin Class UDEPRECATED_RootMotionModifier_SimpleWarp ********************************
struct Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp_Statics;
MOTIONWARPING_API UClass* Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp_NoRegister();

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_438_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_RootMotionModifier_SimpleWarp(); \
	friend struct ::Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOTIONWARPING_API UClass* ::Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEPRECATED_RootMotionModifier_SimpleWarp, URootMotionModifier_Warp, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/MotionWarping"), Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp_NoRegister) \
	DECLARE_SERIALIZER(UDEPRECATED_RootMotionModifier_SimpleWarp)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_438_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEPRECATED_RootMotionModifier_SimpleWarp(UDEPRECATED_RootMotionModifier_SimpleWarp&&) = delete; \
	UDEPRECATED_RootMotionModifier_SimpleWarp(const UDEPRECATED_RootMotionModifier_SimpleWarp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOTIONWARPING_API, UDEPRECATED_RootMotionModifier_SimpleWarp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_RootMotionModifier_SimpleWarp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_RootMotionModifier_SimpleWarp) \
	MOTIONWARPING_API virtual ~UDEPRECATED_RootMotionModifier_SimpleWarp();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_435_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_438_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_438_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_438_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEPRECATED_RootMotionModifier_SimpleWarp;

// ********** End Class UDEPRECATED_RootMotionModifier_SimpleWarp **********************************

// ********** Begin Class URootMotionModifier_Scale ************************************************
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_452_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddRootMotionModifierScale);


struct Z_Construct_UClass_URootMotionModifier_Scale_Statics;
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_Scale_NoRegister();

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_452_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURootMotionModifier_Scale(); \
	friend struct ::Z_Construct_UClass_URootMotionModifier_Scale_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOTIONWARPING_API UClass* ::Z_Construct_UClass_URootMotionModifier_Scale_NoRegister(); \
public: \
	DECLARE_CLASS2(URootMotionModifier_Scale, URootMotionModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionWarping"), Z_Construct_UClass_URootMotionModifier_Scale_NoRegister) \
	DECLARE_SERIALIZER(URootMotionModifier_Scale)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_452_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URootMotionModifier_Scale(URootMotionModifier_Scale&&) = delete; \
	URootMotionModifier_Scale(const URootMotionModifier_Scale&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOTIONWARPING_API, URootMotionModifier_Scale); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URootMotionModifier_Scale); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URootMotionModifier_Scale) \
	MOTIONWARPING_API virtual ~URootMotionModifier_Scale();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_449_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_452_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_452_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_452_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_452_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URootMotionModifier_Scale;

// ********** End Class URootMotionModifier_Scale **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h

// ********** Begin Enum ERootMotionModifierState **************************************************
#define FOREACH_ENUM_EROOTMOTIONMODIFIERSTATE(op) \
	op(ERootMotionModifierState::Waiting) \
	op(ERootMotionModifierState::Active) \
	op(ERootMotionModifierState::MarkedForRemoval) \
	op(ERootMotionModifierState::Disabled) 

enum class ERootMotionModifierState : uint8;
template<> struct TIsUEnumClass<ERootMotionModifierState> { enum { Value = true }; };
template<> MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<ERootMotionModifierState>();
// ********** End Enum ERootMotionModifierState ****************************************************

// ********** Begin Enum EWarpTargetLocationOffsetDirection ****************************************
#define FOREACH_ENUM_EWARPTARGETLOCATIONOFFSETDIRECTION(op) \
	op(EWarpTargetLocationOffsetDirection::TargetsForwardVector) \
	op(EWarpTargetLocationOffsetDirection::VectorFromTargetToOwner) \
	op(EWarpTargetLocationOffsetDirection::WorldSpace) 

enum class EWarpTargetLocationOffsetDirection : uint8;
template<> struct TIsUEnumClass<EWarpTargetLocationOffsetDirection> { enum { Value = true }; };
template<> MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<EWarpTargetLocationOffsetDirection>();
// ********** End Enum EWarpTargetLocationOffsetDirection ******************************************

// ********** Begin Enum EMotionWarpRotationType ***************************************************
#define FOREACH_ENUM_EMOTIONWARPROTATIONTYPE(op) \
	op(EMotionWarpRotationType::Default) \
	op(EMotionWarpRotationType::Facing) \
	op(EMotionWarpRotationType::OppositeDefault) \
	op(EMotionWarpRotationType::OppositeFacing) 

enum class EMotionWarpRotationType : uint8;
template<> struct TIsUEnumClass<EMotionWarpRotationType> { enum { Value = true }; };
template<> MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<EMotionWarpRotationType>();
// ********** End Enum EMotionWarpRotationType *****************************************************

// ********** Begin Enum EMotionWarpRotationMethod *************************************************
#define FOREACH_ENUM_EMOTIONWARPROTATIONMETHOD(op) \
	op(EMotionWarpRotationMethod::Slerp) \
	op(EMotionWarpRotationMethod::SlerpWithClampedRate) \
	op(EMotionWarpRotationMethod::ConstantRate) \
	op(EMotionWarpRotationMethod::Scale) 

enum class EMotionWarpRotationMethod : uint8;
template<> struct TIsUEnumClass<EMotionWarpRotationMethod> { enum { Value = true }; };
template<> MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<EMotionWarpRotationMethod>();
// ********** End Enum EMotionWarpRotationMethod ***************************************************

// ********** Begin Enum EWarpPointAnimProvider ****************************************************
#define FOREACH_ENUM_EWARPPOINTANIMPROVIDER(op) \
	op(EWarpPointAnimProvider::None) \
	op(EWarpPointAnimProvider::Static) \
	op(EWarpPointAnimProvider::Bone) 

enum class EWarpPointAnimProvider : uint8;
template<> struct TIsUEnumClass<EWarpPointAnimProvider> { enum { Value = true }; };
template<> MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<EWarpPointAnimProvider>();
// ********** End Enum EWarpPointAnimProvider ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
