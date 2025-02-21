// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AttributeBasedRootMotionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOTIONWARPING_AttributeBasedRootMotionComponent_generated_h
#error "AttributeBasedRootMotionComponent.generated.h already included, missing '#pragma once' in AttributeBasedRootMotionComponent.h"
#endif
#define MOTIONWARPING_AttributeBasedRootMotionComponent_generated_h

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AttributeBasedRootMotionComponent_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction_Statics; \
	MOTIONWARPING_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


template<> MOTIONWARPING_API UScriptStruct* StaticStruct<struct FAttributeBasedRootMotionComponentPrePhysicsTickFunction>();

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AttributeBasedRootMotionComponent_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttributeBasedRootMotionComponent(); \
	friend struct Z_Construct_UClass_UAttributeBasedRootMotionComponent_Statics; \
public: \
	DECLARE_CLASS(UAttributeBasedRootMotionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(UAttributeBasedRootMotionComponent)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AttributeBasedRootMotionComponent_h_56_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAttributeBasedRootMotionComponent(UAttributeBasedRootMotionComponent&&); \
	UAttributeBasedRootMotionComponent(const UAttributeBasedRootMotionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeBasedRootMotionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeBasedRootMotionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttributeBasedRootMotionComponent) \
	NO_API virtual ~UAttributeBasedRootMotionComponent();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AttributeBasedRootMotionComponent_h_53_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AttributeBasedRootMotionComponent_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AttributeBasedRootMotionComponent_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AttributeBasedRootMotionComponent_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONWARPING_API UClass* StaticClass<class UAttributeBasedRootMotionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AttributeBasedRootMotionComponent_h


#define FOREACH_ENUM_EATTRIBUTEBASEDROOTMOTIONMODE(op) \
	op(EAttributeBasedRootMotionMode::ApplyDelta) \
	op(EAttributeBasedRootMotionMode::ApplyVelocity) 

enum class EAttributeBasedRootMotionMode;
template<> struct TIsUEnumClass<EAttributeBasedRootMotionMode> { enum { Value = true }; };
template<> MOTIONWARPING_API UEnum* StaticEnum<EAttributeBasedRootMotionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
