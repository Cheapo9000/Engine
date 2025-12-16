// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGSurfaceSampler.h"

#ifdef PCG_PCGSurfaceSampler_generated_h
#error "PCGSurfaceSampler.generated.h already included, missing '#pragma once' in PCGSurfaceSampler.h"
#endif
#define PCG_PCGSurfaceSampler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGSurfaceSamplerSettings ***********************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSurfaceSampler_h_104_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPCGSurfaceSamplerSettings, PCG_API)


struct Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSurfaceSamplerSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSurfaceSampler_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSurfaceSamplerSettings(); \
	friend struct ::Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSurfaceSamplerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSurfaceSamplerSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSurfaceSamplerSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGSurfaceSamplerSettings) \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSurfaceSampler_h_104_ARCHIVESERIALIZER


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSurfaceSampler_h_104_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSurfaceSamplerSettings(UPCGSurfaceSamplerSettings&&) = delete; \
	UPCGSurfaceSamplerSettings(const UPCGSurfaceSamplerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSurfaceSamplerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSurfaceSamplerSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGSurfaceSamplerSettings) \
	PCG_API virtual ~UPCGSurfaceSamplerSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSurfaceSampler_h_101_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSurfaceSampler_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSurfaceSampler_h_104_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSurfaceSampler_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSurfaceSamplerSettings;

// ********** End Class UPCGSurfaceSamplerSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSurfaceSampler_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
