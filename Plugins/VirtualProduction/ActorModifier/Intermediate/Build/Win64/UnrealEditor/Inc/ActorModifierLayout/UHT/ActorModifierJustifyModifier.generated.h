// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/ActorModifierJustifyModifier.h"

#ifdef ACTORMODIFIERLAYOUT_ActorModifierJustifyModifier_generated_h
#error "ActorModifierJustifyModifier.generated.h already included, missing '#pragma once' in ActorModifierJustifyModifier.h"
#endif
#define ACTORMODIFIERLAYOUT_ActorModifierJustifyModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EActorModifierJustifyDepth : uint8;
enum class EActorModifierJustifyHorizontal : uint8;
enum class EActorModifierJustifyVertical : uint8;

// ********** Begin Class UActorModifierJustifyModifier ********************************************
#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierJustifyModifier_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDepthAnchor); \
	DECLARE_FUNCTION(execSetDepthAnchor); \
	DECLARE_FUNCTION(execGetVerticalAnchor); \
	DECLARE_FUNCTION(execSetVerticalAnchor); \
	DECLARE_FUNCTION(execGetHorizontalAnchor); \
	DECLARE_FUNCTION(execSetHorizontalAnchor); \
	DECLARE_FUNCTION(execGetDepthAlignment); \
	DECLARE_FUNCTION(execSetDepthAlignment); \
	DECLARE_FUNCTION(execGetVerticalAlignment); \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execGetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment);


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierJustifyModifier_h_44_ACCESSORS \
static void GetHorizontalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetVerticalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetDepthAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetDepthAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetHorizontalAnchor_WrapperImpl(const void* Object, void* OutValue); \
static void SetHorizontalAnchor_WrapperImpl(void* Object, const void* InValue); \
static void GetVerticalAnchor_WrapperImpl(const void* Object, void* OutValue); \
static void SetVerticalAnchor_WrapperImpl(void* Object, const void* InValue); \
static void GetDepthAnchor_WrapperImpl(const void* Object, void* OutValue); \
static void SetDepthAnchor_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UActorModifierJustifyModifier_Statics;
ACTORMODIFIERLAYOUT_API UClass* Z_Construct_UClass_UActorModifierJustifyModifier_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierJustifyModifier_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorModifierJustifyModifier(); \
	friend struct ::Z_Construct_UClass_UActorModifierJustifyModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORMODIFIERLAYOUT_API UClass* ::Z_Construct_UClass_UActorModifierJustifyModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorModifierJustifyModifier, UActorModifierArrangeBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorModifierLayout"), Z_Construct_UClass_UActorModifierJustifyModifier_NoRegister) \
	DECLARE_SERIALIZER(UActorModifierJustifyModifier)


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierJustifyModifier_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTORMODIFIERLAYOUT_API UActorModifierJustifyModifier(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorModifierJustifyModifier(UActorModifierJustifyModifier&&) = delete; \
	UActorModifierJustifyModifier(const UActorModifierJustifyModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTORMODIFIERLAYOUT_API, UActorModifierJustifyModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorModifierJustifyModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorModifierJustifyModifier) \
	ACTORMODIFIERLAYOUT_API virtual ~UActorModifierJustifyModifier();


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierJustifyModifier_h_41_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierJustifyModifier_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierJustifyModifier_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierJustifyModifier_h_44_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierJustifyModifier_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierJustifyModifier_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorModifierJustifyModifier;

// ********** End Class UActorModifierJustifyModifier **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierJustifyModifier_h

// ********** Begin Enum EActorModifierJustifyVertical *********************************************
#define FOREACH_ENUM_EACTORMODIFIERJUSTIFYVERTICAL(op) \
	op(EActorModifierJustifyVertical::None) \
	op(EActorModifierJustifyVertical::Top) \
	op(EActorModifierJustifyVertical::Center) \
	op(EActorModifierJustifyVertical::Bottom) 

enum class EActorModifierJustifyVertical : uint8;
template<> struct TIsUEnumClass<EActorModifierJustifyVertical> { enum { Value = true }; };
template<> ACTORMODIFIERLAYOUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EActorModifierJustifyVertical>();
// ********** End Enum EActorModifierJustifyVertical ***********************************************

// ********** Begin Enum EActorModifierJustifyHorizontal *******************************************
#define FOREACH_ENUM_EACTORMODIFIERJUSTIFYHORIZONTAL(op) \
	op(EActorModifierJustifyHorizontal::None) \
	op(EActorModifierJustifyHorizontal::Left) \
	op(EActorModifierJustifyHorizontal::Center) \
	op(EActorModifierJustifyHorizontal::Right) 

enum class EActorModifierJustifyHorizontal : uint8;
template<> struct TIsUEnumClass<EActorModifierJustifyHorizontal> { enum { Value = true }; };
template<> ACTORMODIFIERLAYOUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EActorModifierJustifyHorizontal>();
// ********** End Enum EActorModifierJustifyHorizontal *********************************************

// ********** Begin Enum EActorModifierJustifyDepth ************************************************
#define FOREACH_ENUM_EACTORMODIFIERJUSTIFYDEPTH(op) \
	op(EActorModifierJustifyDepth::None) \
	op(EActorModifierJustifyDepth::Front) \
	op(EActorModifierJustifyDepth::Center) \
	op(EActorModifierJustifyDepth::Back) 

enum class EActorModifierJustifyDepth : uint8;
template<> struct TIsUEnumClass<EActorModifierJustifyDepth> { enum { Value = true }; };
template<> ACTORMODIFIERLAYOUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EActorModifierJustifyDepth>();
// ********** End Enum EActorModifierJustifyDepth **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
