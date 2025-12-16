// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGSpatialNoise.h"

#ifdef PCG_PCGSpatialNoise_generated_h
#error "PCGSpatialNoise.generated.h already included, missing '#pragma once' in PCGSpatialNoise.h"
#endif
#define PCG_PCGSpatialNoise_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGSpatialNoiseSettings *************************************************
struct Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSpatialNoiseSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSpatialNoiseSettings(); \
	friend struct ::Z_Construct_UClass_UPCGSpatialNoiseSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSpatialNoiseSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSpatialNoiseSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSpatialNoiseSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGSpatialNoiseSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_61_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSpatialNoiseSettings(UPCGSpatialNoiseSettings&&) = delete; \
	UPCGSpatialNoiseSettings(const UPCGSpatialNoiseSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGSpatialNoiseSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSpatialNoiseSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGSpatialNoiseSettings) \
	NO_API virtual ~UPCGSpatialNoiseSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_58_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSpatialNoiseSettings;

// ********** End Class UPCGSpatialNoiseSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpatialNoise_h

// ********** Begin Enum PCGSpatialNoiseMode *******************************************************
#define FOREACH_ENUM_PCGSPATIALNOISEMODE(op) \
	op(PCGSpatialNoiseMode::Perlin2D) \
	op(PCGSpatialNoiseMode::Caustic2D) \
	op(PCGSpatialNoiseMode::Voronoi2D) \
	op(PCGSpatialNoiseMode::FractionalBrownian2D) \
	op(PCGSpatialNoiseMode::EdgeMask2D) 

enum class PCGSpatialNoiseMode;
template<> struct TIsUEnumClass<PCGSpatialNoiseMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<PCGSpatialNoiseMode>();
// ********** End Enum PCGSpatialNoiseMode *********************************************************

// ********** Begin Enum PCGSpatialNoiseMask2DMode *************************************************
#define FOREACH_ENUM_PCGSPATIALNOISEMASK2DMODE(op) \
	op(PCGSpatialNoiseMask2DMode::Perlin) \
	op(PCGSpatialNoiseMask2DMode::Caustic) \
	op(PCGSpatialNoiseMask2DMode::FractionalBrownian) 

enum class PCGSpatialNoiseMask2DMode;
template<> struct TIsUEnumClass<PCGSpatialNoiseMask2DMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<PCGSpatialNoiseMask2DMode>();
// ********** End Enum PCGSpatialNoiseMask2DMode ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
