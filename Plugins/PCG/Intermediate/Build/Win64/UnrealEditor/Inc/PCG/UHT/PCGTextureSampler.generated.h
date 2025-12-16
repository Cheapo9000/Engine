// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGTextureSampler.h"

#ifdef PCG_PCGTextureSampler_generated_h
#error "PCGTextureSampler.generated.h already included, missing '#pragma once' in PCGTextureSampler.h"
#endif
#define PCG_PCGTextureSampler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPCGTextureDensityFunction : uint8;

// ********** Begin Class UPCGTextureSamplerSettings ***********************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGTextureSampler_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDensityFunctionEquivalent); \
	DECLARE_FUNCTION(execGetDensityFunctionEquivalent);


struct Z_Construct_UClass_UPCGTextureSamplerSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGTextureSamplerSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGTextureSampler_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGTextureSamplerSettings(); \
	friend struct ::Z_Construct_UClass_UPCGTextureSamplerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGTextureSamplerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGTextureSamplerSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGTextureSamplerSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGTextureSamplerSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGTextureSampler_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGTextureSamplerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGTextureSamplerSettings(UPCGTextureSamplerSettings&&) = delete; \
	UPCGTextureSamplerSettings(const UPCGTextureSamplerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGTextureSamplerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGTextureSamplerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGTextureSamplerSettings) \
	PCG_API virtual ~UPCGTextureSamplerSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGTextureSampler_h_14_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGTextureSampler_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGTextureSampler_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGTextureSampler_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGTextureSampler_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGTextureSamplerSettings;

// ********** End Class UPCGTextureSamplerSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGTextureSampler_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
