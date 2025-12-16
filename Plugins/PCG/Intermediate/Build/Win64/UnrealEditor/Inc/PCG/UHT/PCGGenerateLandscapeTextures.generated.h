// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGGenerateLandscapeTextures.h"

#ifdef PCG_PCGGenerateLandscapeTextures_generated_h
#error "PCGGenerateLandscapeTextures.generated.h already included, missing '#pragma once' in PCGGenerateLandscapeTextures.h"
#endif
#define PCG_PCGGenerateLandscapeTextures_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGGenerateLandscapeTexturesSettings ************************************
struct Z_Construct_UClass_UPCGGenerateLandscapeTexturesSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGGenerateLandscapeTexturesSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGenerateLandscapeTextures_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGenerateLandscapeTexturesSettings(); \
	friend struct ::Z_Construct_UClass_UPCGGenerateLandscapeTexturesSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGGenerateLandscapeTexturesSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGenerateLandscapeTexturesSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGGenerateLandscapeTexturesSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGGenerateLandscapeTexturesSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGenerateLandscapeTextures_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGenerateLandscapeTexturesSettings(UPCGGenerateLandscapeTexturesSettings&&) = delete; \
	UPCGGenerateLandscapeTexturesSettings(const UPCGGenerateLandscapeTexturesSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGGenerateLandscapeTexturesSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGenerateLandscapeTexturesSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGGenerateLandscapeTexturesSettings) \
	PCG_API virtual ~UPCGGenerateLandscapeTexturesSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGenerateLandscapeTextures_h_20_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGenerateLandscapeTextures_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGenerateLandscapeTextures_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGenerateLandscapeTextures_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGenerateLandscapeTexturesSettings;

// ********** End Class UPCGGenerateLandscapeTexturesSettings **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGenerateLandscapeTextures_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
