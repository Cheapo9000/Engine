// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Landscape/PCGWaitLandscapeReady.h"

#ifdef PCG_PCGWaitLandscapeReady_generated_h
#error "PCGWaitLandscapeReady.generated.h already included, missing '#pragma once' in PCGWaitLandscapeReady.h"
#endif
#define PCG_PCGWaitLandscapeReady_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGWaitLandscapeReadySettings *******************************************
struct Z_Construct_UClass_UPCGWaitLandscapeReadySettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGWaitLandscapeReadySettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Landscape_PCGWaitLandscapeReady_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGWaitLandscapeReadySettings(); \
	friend struct ::Z_Construct_UClass_UPCGWaitLandscapeReadySettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGWaitLandscapeReadySettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGWaitLandscapeReadySettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGWaitLandscapeReadySettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGWaitLandscapeReadySettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Landscape_PCGWaitLandscapeReady_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGWaitLandscapeReadySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGWaitLandscapeReadySettings(UPCGWaitLandscapeReadySettings&&) = delete; \
	UPCGWaitLandscapeReadySettings(const UPCGWaitLandscapeReadySettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGWaitLandscapeReadySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGWaitLandscapeReadySettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGWaitLandscapeReadySettings) \
	NO_API virtual ~UPCGWaitLandscapeReadySettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Landscape_PCGWaitLandscapeReady_h_14_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Landscape_PCGWaitLandscapeReady_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Landscape_PCGWaitLandscapeReady_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Landscape_PCGWaitLandscapeReady_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGWaitLandscapeReadySettings;

// ********** End Class UPCGWaitLandscapeReadySettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Landscape_PCGWaitLandscapeReady_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
