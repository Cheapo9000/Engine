// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/ActorModifierRadialArrangeModifier.h"

#ifdef ACTORMODIFIERLAYOUT_ActorModifierRadialArrangeModifier_generated_h
#error "ActorModifierRadialArrangeModifier.generated.h already included, missing '#pragma once' in ActorModifierRadialArrangeModifier.h"
#endif
#define ACTORMODIFIERLAYOUT_ActorModifierRadialArrangeModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EActorModifierAxis : uint8;
enum class EActorModifierRadialArrangeMode : uint8;

// ********** Begin Class UActorModifierRadialArrangeModifier **************************************
#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierRadialArrangeModifier_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFlipOrient); \
	DECLARE_FUNCTION(execSetFlipOrient); \
	DECLARE_FUNCTION(execGetBaseOrientation); \
	DECLARE_FUNCTION(execSetBaseOrientation); \
	DECLARE_FUNCTION(execGetOrientationAxis); \
	DECLARE_FUNCTION(execSetOrientationAxis); \
	DECLARE_FUNCTION(execGetOrient); \
	DECLARE_FUNCTION(execSetOrient); \
	DECLARE_FUNCTION(execGetStartFromOuterRadius); \
	DECLARE_FUNCTION(execSetStartFromOuterRadius); \
	DECLARE_FUNCTION(execGetArrangement); \
	DECLARE_FUNCTION(execSetArrangement); \
	DECLARE_FUNCTION(execGetEndAngle); \
	DECLARE_FUNCTION(execSetEndAngle); \
	DECLARE_FUNCTION(execGetStartAngle); \
	DECLARE_FUNCTION(execSetStartAngle); \
	DECLARE_FUNCTION(execGetOuterRadius); \
	DECLARE_FUNCTION(execSetOuterRadius); \
	DECLARE_FUNCTION(execGetInnerRadius); \
	DECLARE_FUNCTION(execSetInnerRadius); \
	DECLARE_FUNCTION(execGetRings); \
	DECLARE_FUNCTION(execSetRings); \
	DECLARE_FUNCTION(execGetCount); \
	DECLARE_FUNCTION(execSetCount);


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierRadialArrangeModifier_h_40_ACCESSORS \
static void GetCount_WrapperImpl(const void* Object, void* OutValue); \
static void SetCount_WrapperImpl(void* Object, const void* InValue); \
static void GetRings_WrapperImpl(const void* Object, void* OutValue); \
static void SetRings_WrapperImpl(void* Object, const void* InValue); \
static void GetInnerRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetInnerRadius_WrapperImpl(void* Object, const void* InValue); \
static void GetOuterRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetOuterRadius_WrapperImpl(void* Object, const void* InValue); \
static void GetStartAngle_WrapperImpl(const void* Object, void* OutValue); \
static void SetStartAngle_WrapperImpl(void* Object, const void* InValue); \
static void GetEndAngle_WrapperImpl(const void* Object, void* OutValue); \
static void SetEndAngle_WrapperImpl(void* Object, const void* InValue); \
static void GetArrangement_WrapperImpl(const void* Object, void* OutValue); \
static void SetArrangement_WrapperImpl(void* Object, const void* InValue); \
static void GetbStartFromOuterRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetbStartFromOuterRadius_WrapperImpl(void* Object, const void* InValue); \
static void GetbOrient_WrapperImpl(const void* Object, void* OutValue); \
static void SetbOrient_WrapperImpl(void* Object, const void* InValue); \
static void GetOrientationAxis_WrapperImpl(const void* Object, void* OutValue); \
static void SetOrientationAxis_WrapperImpl(void* Object, const void* InValue); \
static void GetBaseOrientation_WrapperImpl(const void* Object, void* OutValue); \
static void SetBaseOrientation_WrapperImpl(void* Object, const void* InValue); \
static void GetbFlipOrient_WrapperImpl(const void* Object, void* OutValue); \
static void SetbFlipOrient_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UActorModifierRadialArrangeModifier_Statics;
ACTORMODIFIERLAYOUT_API UClass* Z_Construct_UClass_UActorModifierRadialArrangeModifier_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierRadialArrangeModifier_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorModifierRadialArrangeModifier(); \
	friend struct ::Z_Construct_UClass_UActorModifierRadialArrangeModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORMODIFIERLAYOUT_API UClass* ::Z_Construct_UClass_UActorModifierRadialArrangeModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorModifierRadialArrangeModifier, UActorModifierArrangeBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorModifierLayout"), Z_Construct_UClass_UActorModifierRadialArrangeModifier_NoRegister) \
	DECLARE_SERIALIZER(UActorModifierRadialArrangeModifier)


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierRadialArrangeModifier_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTORMODIFIERLAYOUT_API UActorModifierRadialArrangeModifier(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorModifierRadialArrangeModifier(UActorModifierRadialArrangeModifier&&) = delete; \
	UActorModifierRadialArrangeModifier(const UActorModifierRadialArrangeModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTORMODIFIERLAYOUT_API, UActorModifierRadialArrangeModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorModifierRadialArrangeModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorModifierRadialArrangeModifier) \
	ACTORMODIFIERLAYOUT_API virtual ~UActorModifierRadialArrangeModifier();


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierRadialArrangeModifier_h_37_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierRadialArrangeModifier_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierRadialArrangeModifier_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierRadialArrangeModifier_h_40_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierRadialArrangeModifier_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierRadialArrangeModifier_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorModifierRadialArrangeModifier;

// ********** End Class UActorModifierRadialArrangeModifier ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierRadialArrangeModifier_h

// ********** Begin Enum EActorModifierRadialArrangeMode *******************************************
#define FOREACH_ENUM_EACTORMODIFIERRADIALARRANGEMODE(op) \
	op(EActorModifierRadialArrangeMode::Monospace) \
	op(EActorModifierRadialArrangeMode::Equal) 

enum class EActorModifierRadialArrangeMode : uint8;
template<> struct TIsUEnumClass<EActorModifierRadialArrangeMode> { enum { Value = true }; };
template<> ACTORMODIFIERLAYOUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EActorModifierRadialArrangeMode>();
// ********** End Enum EActorModifierRadialArrangeMode *********************************************

// ********** Begin Enum EActorModifierRadialArrangePlane ******************************************
#define FOREACH_ENUM_EACTORMODIFIERRADIALARRANGEPLANE(op) \
	op(EActorModifierRadialArrangePlane::XY) \
	op(EActorModifierRadialArrangePlane::YZ) \
	op(EActorModifierRadialArrangePlane::XZ) 

enum class EActorModifierRadialArrangePlane : uint8;
template<> struct TIsUEnumClass<EActorModifierRadialArrangePlane> { enum { Value = true }; };
template<> ACTORMODIFIERLAYOUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EActorModifierRadialArrangePlane>();
// ********** End Enum EActorModifierRadialArrangePlane ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
