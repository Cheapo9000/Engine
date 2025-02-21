// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mask2D/AvaMask2DWriteModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMASK_AvaMask2DWriteModifier_generated_h
#error "AvaMask2DWriteModifier.generated.h already included, missing '#pragma once' in AvaMask2DWriteModifier.h"
#endif
#define AVALANCHEMASK_AvaMask2DWriteModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DWriteModifier_h_38_ACCESSORS \
static void GetWriteOperation_WrapperImpl(const void* Object, void* OutValue); \
static void SetWriteOperation_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DWriteModifier_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaMask2DWriteModifier(); \
	friend struct Z_Construct_UClass_UAvaMask2DWriteModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaMask2DWriteModifier, UAvaMask2DBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheMask"), NO_API) \
	DECLARE_SERIALIZER(UAvaMask2DWriteModifier)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DWriteModifier_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaMask2DWriteModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaMask2DWriteModifier(UAvaMask2DWriteModifier&&); \
	UAvaMask2DWriteModifier(const UAvaMask2DWriteModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaMask2DWriteModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaMask2DWriteModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaMask2DWriteModifier) \
	NO_API virtual ~UAvaMask2DWriteModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DWriteModifier_h_34_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DWriteModifier_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DWriteModifier_h_38_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DWriteModifier_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DWriteModifier_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMASK_API UClass* StaticClass<class UAvaMask2DWriteModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMask_Public_Mask2D_AvaMask2DWriteModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
