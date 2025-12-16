// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaSplineSweepModifier.h"

#ifdef AVALANCHEMODIFIERS_AvaSplineSweepModifier_generated_h
#error "AvaSplineSweepModifier.generated.h already included, missing '#pragma once' in AvaSplineSweepModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaSplineSweepModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EAvaSplineSweepSampleMode : uint8;

// ********** Begin Class UAvaSplineSweepModifier **************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSplineSweepModifier_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLooped); \
	DECLARE_FUNCTION(execSetLooped); \
	DECLARE_FUNCTION(execGetCapped); \
	DECLARE_FUNCTION(execSetCapped); \
	DECLARE_FUNCTION(execGetScaleEnd); \
	DECLARE_FUNCTION(execSetScaleEnd); \
	DECLARE_FUNCTION(execGetScaleStart); \
	DECLARE_FUNCTION(execSetScaleStart); \
	DECLARE_FUNCTION(execGetProgressEnd); \
	DECLARE_FUNCTION(execSetProgressEnd); \
	DECLARE_FUNCTION(execGetProgressStart); \
	DECLARE_FUNCTION(execSetProgressStart); \
	DECLARE_FUNCTION(execGetProgressOffset); \
	DECLARE_FUNCTION(execSetProgressOffset); \
	DECLARE_FUNCTION(execGetSteps); \
	DECLARE_FUNCTION(execSetSteps); \
	DECLARE_FUNCTION(execGetSampleDistance); \
	DECLARE_FUNCTION(execSetSampleDistance); \
	DECLARE_FUNCTION(execGetSampleMode); \
	DECLARE_FUNCTION(execSetSampleMode); \
	DECLARE_FUNCTION(execGetSplineActor); \
	DECLARE_FUNCTION(execSetSplineActor);


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSplineSweepModifier_h_25_ACCESSORS \
static void GetSplineActorWeak_WrapperImpl(const void* Object, void* OutValue); \
static void SetSplineActorWeak_WrapperImpl(void* Object, const void* InValue); \
static void GetSampleMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetSampleMode_WrapperImpl(void* Object, const void* InValue); \
static void GetSampleDistance_WrapperImpl(const void* Object, void* OutValue); \
static void SetSampleDistance_WrapperImpl(void* Object, const void* InValue); \
static void GetSteps_WrapperImpl(const void* Object, void* OutValue); \
static void SetSteps_WrapperImpl(void* Object, const void* InValue); \
static void GetProgressOffset_WrapperImpl(const void* Object, void* OutValue); \
static void SetProgressOffset_WrapperImpl(void* Object, const void* InValue); \
static void GetProgressStart_WrapperImpl(const void* Object, void* OutValue); \
static void SetProgressStart_WrapperImpl(void* Object, const void* InValue); \
static void GetProgressEnd_WrapperImpl(const void* Object, void* OutValue); \
static void SetProgressEnd_WrapperImpl(void* Object, const void* InValue); \
static void GetScaleStart_WrapperImpl(const void* Object, void* OutValue); \
static void SetScaleStart_WrapperImpl(void* Object, const void* InValue); \
static void GetScaleEnd_WrapperImpl(const void* Object, void* OutValue); \
static void SetScaleEnd_WrapperImpl(void* Object, const void* InValue); \
static void GetbCapped_WrapperImpl(const void* Object, void* OutValue); \
static void SetbCapped_WrapperImpl(void* Object, const void* InValue); \
static void GetbLooped_WrapperImpl(const void* Object, void* OutValue); \
static void SetbLooped_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAvaSplineSweepModifier_Statics;
AVALANCHEMODIFIERS_API UClass* Z_Construct_UClass_UAvaSplineSweepModifier_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSplineSweepModifier_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaSplineSweepModifier(); \
	friend struct ::Z_Construct_UClass_UAvaSplineSweepModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMODIFIERS_API UClass* ::Z_Construct_UClass_UAvaSplineSweepModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaSplineSweepModifier, UAvaGeometryBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), Z_Construct_UClass_UAvaSplineSweepModifier_NoRegister) \
	DECLARE_SERIALIZER(UAvaSplineSweepModifier) \
	virtual UObject* _getUObject() const override { return const_cast<UAvaSplineSweepModifier*>(this); }


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSplineSweepModifier_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaSplineSweepModifier(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaSplineSweepModifier(UAvaSplineSweepModifier&&) = delete; \
	UAvaSplineSweepModifier(const UAvaSplineSweepModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaSplineSweepModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaSplineSweepModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaSplineSweepModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaSplineSweepModifier();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSplineSweepModifier_h_21_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSplineSweepModifier_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSplineSweepModifier_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSplineSweepModifier_h_25_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSplineSweepModifier_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSplineSweepModifier_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaSplineSweepModifier;

// ********** End Class UAvaSplineSweepModifier ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSplineSweepModifier_h

// ********** Begin Enum EAvaSplineSweepSampleMode *************************************************
#define FOREACH_ENUM_EAVASPLINESWEEPSAMPLEMODE(op) \
	op(EAvaSplineSweepSampleMode::FullDistance) \
	op(EAvaSplineSweepSampleMode::CustomDistance) 

enum class EAvaSplineSweepSampleMode : uint8;
template<> struct TIsUEnumClass<EAvaSplineSweepSampleMode> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaSplineSweepSampleMode>();
// ********** End Enum EAvaSplineSweepSampleMode ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
