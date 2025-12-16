// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/ActorModifierSplinePathModifier.h"

#ifdef ACTORMODIFIERLAYOUT_ActorModifierSplinePathModifier_generated_h
#error "ActorModifierSplinePathModifier.generated.h already included, missing '#pragma once' in ActorModifierSplinePathModifier.h"
#endif
#define ACTORMODIFIERLAYOUT_ActorModifierSplinePathModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EActorModifierLayoutSplinePathSampleMode : uint8;

// ********** Begin Class UActorModifierSplinePathModifier *****************************************
#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierSplinePathModifier_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetScale); \
	DECLARE_FUNCTION(execSetScale); \
	DECLARE_FUNCTION(execGetBaseOrientation); \
	DECLARE_FUNCTION(execSetBaseOrientation); \
	DECLARE_FUNCTION(execGetOrient); \
	DECLARE_FUNCTION(execSetOrient); \
	DECLARE_FUNCTION(execGetPointIndex); \
	DECLARE_FUNCTION(execSetPointIndex); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execSetTime); \
	DECLARE_FUNCTION(execGetDistance); \
	DECLARE_FUNCTION(execSetDistance); \
	DECLARE_FUNCTION(execGetProgress); \
	DECLARE_FUNCTION(execSetProgress); \
	DECLARE_FUNCTION(execGetSampleMode); \
	DECLARE_FUNCTION(execSetSampleMode); \
	DECLARE_FUNCTION(execGetSplineActor); \
	DECLARE_FUNCTION(execSetSplineActor);


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierSplinePathModifier_h_30_ACCESSORS \
static void GetSplineActorWeak_WrapperImpl(const void* Object, void* OutValue); \
static void SetSplineActorWeak_WrapperImpl(void* Object, const void* InValue); \
static void GetSampleMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetSampleMode_WrapperImpl(void* Object, const void* InValue); \
static void GetProgress_WrapperImpl(const void* Object, void* OutValue); \
static void SetProgress_WrapperImpl(void* Object, const void* InValue); \
static void GetDistance_WrapperImpl(const void* Object, void* OutValue); \
static void SetDistance_WrapperImpl(void* Object, const void* InValue); \
static void GetTime_WrapperImpl(const void* Object, void* OutValue); \
static void SetTime_WrapperImpl(void* Object, const void* InValue); \
static void GetPointIndex_WrapperImpl(const void* Object, void* OutValue); \
static void SetPointIndex_WrapperImpl(void* Object, const void* InValue); \
static void GetbOrient_WrapperImpl(const void* Object, void* OutValue); \
static void SetbOrient_WrapperImpl(void* Object, const void* InValue); \
static void GetBaseOrientation_WrapperImpl(const void* Object, void* OutValue); \
static void SetBaseOrientation_WrapperImpl(void* Object, const void* InValue); \
static void GetbScale_WrapperImpl(const void* Object, void* OutValue); \
static void SetbScale_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UActorModifierSplinePathModifier_Statics;
ACTORMODIFIERLAYOUT_API UClass* Z_Construct_UClass_UActorModifierSplinePathModifier_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierSplinePathModifier_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorModifierSplinePathModifier(); \
	friend struct ::Z_Construct_UClass_UActorModifierSplinePathModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORMODIFIERLAYOUT_API UClass* ::Z_Construct_UClass_UActorModifierSplinePathModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorModifierSplinePathModifier, UActorModifierCoreBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorModifierLayout"), Z_Construct_UClass_UActorModifierSplinePathModifier_NoRegister) \
	DECLARE_SERIALIZER(UActorModifierSplinePathModifier) \
	virtual UObject* _getUObject() const override { return const_cast<UActorModifierSplinePathModifier*>(this); }


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierSplinePathModifier_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTORMODIFIERLAYOUT_API UActorModifierSplinePathModifier(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorModifierSplinePathModifier(UActorModifierSplinePathModifier&&) = delete; \
	UActorModifierSplinePathModifier(const UActorModifierSplinePathModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTORMODIFIERLAYOUT_API, UActorModifierSplinePathModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorModifierSplinePathModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorModifierSplinePathModifier) \
	ACTORMODIFIERLAYOUT_API virtual ~UActorModifierSplinePathModifier();


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierSplinePathModifier_h_25_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierSplinePathModifier_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierSplinePathModifier_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierSplinePathModifier_h_30_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierSplinePathModifier_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierSplinePathModifier_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorModifierSplinePathModifier;

// ********** End Class UActorModifierSplinePathModifier *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierSplinePathModifier_h

// ********** Begin Enum EActorModifierLayoutSplinePathSampleMode **********************************
#define FOREACH_ENUM_EACTORMODIFIERLAYOUTSPLINEPATHSAMPLEMODE(op) \
	op(EActorModifierLayoutSplinePathSampleMode::Percentage) \
	op(EActorModifierLayoutSplinePathSampleMode::Distance) \
	op(EActorModifierLayoutSplinePathSampleMode::Time) \
	op(EActorModifierLayoutSplinePathSampleMode::Point) 

enum class EActorModifierLayoutSplinePathSampleMode : uint8;
template<> struct TIsUEnumClass<EActorModifierLayoutSplinePathSampleMode> { enum { Value = true }; };
template<> ACTORMODIFIERLAYOUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EActorModifierLayoutSplinePathSampleMode>();
// ********** End Enum EActorModifierLayoutSplinePathSampleMode ************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
