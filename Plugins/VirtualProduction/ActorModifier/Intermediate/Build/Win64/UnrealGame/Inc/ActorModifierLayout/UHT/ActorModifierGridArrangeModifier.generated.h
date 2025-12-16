// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/ActorModifierGridArrangeModifier.h"

#ifdef ACTORMODIFIERLAYOUT_ActorModifierGridArrangeModifier_generated_h
#error "ActorModifierGridArrangeModifier.generated.h already included, missing '#pragma once' in ActorModifierGridArrangeModifier.h"
#endif
#define ACTORMODIFIERLAYOUT_ActorModifierGridArrangeModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EActorModifierGridArrangeCorner2D : uint8;
enum class EActorModifierGridArrangeDirection : uint8;

// ********** Begin Class UActorModifierGridArrangeModifier ****************************************
#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierGridArrangeModifier_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStartDirection); \
	DECLARE_FUNCTION(execSetStartDirection); \
	DECLARE_FUNCTION(execGetStartCorner); \
	DECLARE_FUNCTION(execSetStartCorner); \
	DECLARE_FUNCTION(execGetSpread); \
	DECLARE_FUNCTION(execSetSpread); \
	DECLARE_FUNCTION(execGetCount); \
	DECLARE_FUNCTION(execSetCount);


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierGridArrangeModifier_h_32_ACCESSORS \
static void GetCount_WrapperImpl(const void* Object, void* OutValue); \
static void SetCount_WrapperImpl(void* Object, const void* InValue); \
static void GetSpread_WrapperImpl(const void* Object, void* OutValue); \
static void SetSpread_WrapperImpl(void* Object, const void* InValue); \
static void GetStartCorner_WrapperImpl(const void* Object, void* OutValue); \
static void SetStartCorner_WrapperImpl(void* Object, const void* InValue); \
static void GetStartDirection_WrapperImpl(const void* Object, void* OutValue); \
static void SetStartDirection_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UActorModifierGridArrangeModifier_Statics;
ACTORMODIFIERLAYOUT_API UClass* Z_Construct_UClass_UActorModifierGridArrangeModifier_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierGridArrangeModifier_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorModifierGridArrangeModifier(); \
	friend struct ::Z_Construct_UClass_UActorModifierGridArrangeModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORMODIFIERLAYOUT_API UClass* ::Z_Construct_UClass_UActorModifierGridArrangeModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorModifierGridArrangeModifier, UActorModifierArrangeBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorModifierLayout"), Z_Construct_UClass_UActorModifierGridArrangeModifier_NoRegister) \
	DECLARE_SERIALIZER(UActorModifierGridArrangeModifier)


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierGridArrangeModifier_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTORMODIFIERLAYOUT_API UActorModifierGridArrangeModifier(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorModifierGridArrangeModifier(UActorModifierGridArrangeModifier&&) = delete; \
	UActorModifierGridArrangeModifier(const UActorModifierGridArrangeModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTORMODIFIERLAYOUT_API, UActorModifierGridArrangeModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorModifierGridArrangeModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorModifierGridArrangeModifier) \
	ACTORMODIFIERLAYOUT_API virtual ~UActorModifierGridArrangeModifier();


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierGridArrangeModifier_h_29_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierGridArrangeModifier_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierGridArrangeModifier_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierGridArrangeModifier_h_32_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierGridArrangeModifier_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierGridArrangeModifier_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorModifierGridArrangeModifier;

// ********** End Class UActorModifierGridArrangeModifier ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierGridArrangeModifier_h

// ********** Begin Enum EActorModifierGridArrangeDirection ****************************************
#define FOREACH_ENUM_EACTORMODIFIERGRIDARRANGEDIRECTION(op) \
	op(EActorModifierGridArrangeDirection::Horizontal) \
	op(EActorModifierGridArrangeDirection::Vertical) 

enum class EActorModifierGridArrangeDirection : uint8;
template<> struct TIsUEnumClass<EActorModifierGridArrangeDirection> { enum { Value = true }; };
template<> ACTORMODIFIERLAYOUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EActorModifierGridArrangeDirection>();
// ********** End Enum EActorModifierGridArrangeDirection ******************************************

// ********** Begin Enum EActorModifierGridArrangeCorner2D *****************************************
#define FOREACH_ENUM_EACTORMODIFIERGRIDARRANGECORNER2D(op) \
	op(EActorModifierGridArrangeCorner2D::TopLeft) \
	op(EActorModifierGridArrangeCorner2D::TopRight) \
	op(EActorModifierGridArrangeCorner2D::BottomLeft) \
	op(EActorModifierGridArrangeCorner2D::BottomRight) 

enum class EActorModifierGridArrangeCorner2D : uint8;
template<> struct TIsUEnumClass<EActorModifierGridArrangeCorner2D> { enum { Value = true }; };
template<> ACTORMODIFIERLAYOUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EActorModifierGridArrangeCorner2D>();
// ********** End Enum EActorModifierGridArrangeCorner2D *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
