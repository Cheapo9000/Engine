// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGVolumeSampler.h"

#ifdef PCG_PCGVolumeSampler_generated_h
#error "PCGVolumeSampler.generated.h already included, missing '#pragma once' in PCGVolumeSampler.h"
#endif
#define PCG_PCGVolumeSampler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGVolumeSamplerSettings ************************************************
struct Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGVolumeSamplerSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGVolumeSampler_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGVolumeSamplerSettings(); \
	friend struct ::Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGVolumeSamplerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGVolumeSamplerSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGVolumeSamplerSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGVolumeSamplerSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGVolumeSampler_h_68_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGVolumeSamplerSettings(UPCGVolumeSamplerSettings&&) = delete; \
	UPCGVolumeSamplerSettings(const UPCGVolumeSamplerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGVolumeSamplerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGVolumeSamplerSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGVolumeSamplerSettings) \
	PCG_API virtual ~UPCGVolumeSamplerSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGVolumeSampler_h_65_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGVolumeSampler_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGVolumeSampler_h_68_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGVolumeSampler_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGVolumeSamplerSettings;

// ********** End Class UPCGVolumeSamplerSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGVolumeSampler_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
