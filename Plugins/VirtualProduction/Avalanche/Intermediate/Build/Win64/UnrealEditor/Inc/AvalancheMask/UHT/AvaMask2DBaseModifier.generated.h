// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mask2D/AvaMask2DBaseModifier.h"

#ifdef AVALANCHEMASK_AvaMask2DBaseModifier_generated_h
#error "AvaMask2DBaseModifier.generated.h already included, missing '#pragma once' in AvaMask2DBaseModifier.h"
#endif
#define AVALANCHEMASK_AvaMask2DBaseModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAvaMask2DActorData ***********************************************
struct Z_Construct_UScriptStruct_FAvaMask2DActorData_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DBaseModifier_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaMask2DActorData_Statics; \
	AVALANCHEMASK_API static class UScriptStruct* StaticStruct();


struct FAvaMask2DActorData;
// ********** End ScriptStruct FAvaMask2DActorData *************************************************

// ********** Begin Class UAvaMask2DBaseModifier ***************************************************
#if WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DBaseModifier_h_60_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execVisualizeMask);
#else // WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DBaseModifier_h_60_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DBaseModifier_h_60_ACCESSORS \
static void GetbUseParentChannel_WrapperImpl(const void* Object, void* OutValue); \
static void SetbUseParentChannel_WrapperImpl(void* Object, const void* InValue); \
static void GetChannel_WrapperImpl(const void* Object, void* OutValue); \
static void SetChannel_WrapperImpl(void* Object, const void* InValue); \
static void GetbInverted_WrapperImpl(const void* Object, void* OutValue); \
static void SetbInverted_WrapperImpl(void* Object, const void* InValue); \
static void GetbUseBlur_WrapperImpl(const void* Object, void* OutValue); \
static void SetbUseBlur_WrapperImpl(void* Object, const void* InValue); \
static void GetBlurStrength_WrapperImpl(const void* Object, void* OutValue); \
static void SetBlurStrength_WrapperImpl(void* Object, const void* InValue); \
static void GetbUseFeathering_WrapperImpl(const void* Object, void* OutValue); \
static void SetbUseFeathering_WrapperImpl(void* Object, const void* InValue); \
static void GetOuterFeatherRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetOuterFeatherRadius_WrapperImpl(void* Object, const void* InValue); \
static void GetInnerFeatherRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetInnerFeatherRadius_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAvaMask2DBaseModifier_Statics;
AVALANCHEMASK_API UClass* Z_Construct_UClass_UAvaMask2DBaseModifier_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DBaseModifier_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaMask2DBaseModifier(); \
	friend struct ::Z_Construct_UClass_UAvaMask2DBaseModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMASK_API UClass* ::Z_Construct_UClass_UAvaMask2DBaseModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaMask2DBaseModifier, UActorModifierArrangeBaseModifier, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AvalancheMask"), Z_Construct_UClass_UAvaMask2DBaseModifier_NoRegister) \
	DECLARE_SERIALIZER(UAvaMask2DBaseModifier)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DBaseModifier_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaMask2DBaseModifier(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaMask2DBaseModifier(UAvaMask2DBaseModifier&&) = delete; \
	UAvaMask2DBaseModifier(const UAvaMask2DBaseModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaMask2DBaseModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaMask2DBaseModifier); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAvaMask2DBaseModifier) \
	NO_API virtual ~UAvaMask2DBaseModifier();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DBaseModifier_h_56_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DBaseModifier_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DBaseModifier_h_60_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DBaseModifier_h_60_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DBaseModifier_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DBaseModifier_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaMask2DBaseModifier;

// ********** End Class UAvaMask2DBaseModifier *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DBaseModifier_h

// ********** Begin Enum EAvaMask2DMode ************************************************************
#define FOREACH_ENUM_EAVAMASK2DMODE(op) \
	op(EAvaMask2DMode::Read) \
	op(EAvaMask2DMode::Write) 

enum class EAvaMask2DMode : uint8;
template<> struct TIsUEnumClass<EAvaMask2DMode> { enum { Value = true }; };
template<> AVALANCHEMASK_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaMask2DMode>();
// ********** End Enum EAvaMask2DMode **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
