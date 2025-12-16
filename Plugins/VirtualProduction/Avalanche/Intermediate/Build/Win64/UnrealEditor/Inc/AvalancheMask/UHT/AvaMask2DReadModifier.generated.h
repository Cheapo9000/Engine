// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mask2D/AvaMask2DReadModifier.h"

#ifdef AVALANCHEMASK_AvaMask2DReadModifier_generated_h
#error "AvaMask2DReadModifier.generated.h already included, missing '#pragma once' in AvaMask2DReadModifier.h"
#endif
#define AVALANCHEMASK_AvaMask2DReadModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaMask2DReadModifier ***************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DReadModifier_h_38_ACCESSORS \
static void GetBaseOpacity_WrapperImpl(const void* Object, void* OutValue); \
static void SetBaseOpacity_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAvaMask2DReadModifier_Statics;
AVALANCHEMASK_API UClass* Z_Construct_UClass_UAvaMask2DReadModifier_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DReadModifier_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaMask2DReadModifier(); \
	friend struct ::Z_Construct_UClass_UAvaMask2DReadModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMASK_API UClass* ::Z_Construct_UClass_UAvaMask2DReadModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaMask2DReadModifier, UAvaMask2DBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheMask"), Z_Construct_UClass_UAvaMask2DReadModifier_NoRegister) \
	DECLARE_SERIALIZER(UAvaMask2DReadModifier)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DReadModifier_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaMask2DReadModifier(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaMask2DReadModifier(UAvaMask2DReadModifier&&) = delete; \
	UAvaMask2DReadModifier(const UAvaMask2DReadModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaMask2DReadModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaMask2DReadModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaMask2DReadModifier) \
	NO_API virtual ~UAvaMask2DReadModifier();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DReadModifier_h_34_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DReadModifier_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DReadModifier_h_38_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DReadModifier_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DReadModifier_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaMask2DReadModifier;

// ********** End Class UAvaMask2DReadModifier *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DReadModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
