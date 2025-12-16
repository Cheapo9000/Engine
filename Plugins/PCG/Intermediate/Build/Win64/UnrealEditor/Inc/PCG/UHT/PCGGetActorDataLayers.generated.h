// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGGetActorDataLayers.h"

#ifdef PCG_PCGGetActorDataLayers_generated_h
#error "PCGGetActorDataLayers.generated.h already included, missing '#pragma once' in PCGGetActorDataLayers.h"
#endif
#define PCG_PCGGetActorDataLayers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGGetActorDataLayersSettings *******************************************
struct Z_Construct_UClass_UPCGGetActorDataLayersSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGGetActorDataLayersSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetActorDataLayers_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGetActorDataLayersSettings(); \
	friend struct ::Z_Construct_UClass_UPCGGetActorDataLayersSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGGetActorDataLayersSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGetActorDataLayersSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGGetActorDataLayersSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGGetActorDataLayersSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetActorDataLayers_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGetActorDataLayersSettings(UPCGGetActorDataLayersSettings&&) = delete; \
	UPCGGetActorDataLayersSettings(const UPCGGetActorDataLayersSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGGetActorDataLayersSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGetActorDataLayersSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGGetActorDataLayersSettings) \
	PCG_API virtual ~UPCGGetActorDataLayersSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetActorDataLayers_h_9_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetActorDataLayers_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetActorDataLayers_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetActorDataLayers_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGetActorDataLayersSettings;

// ********** End Class UPCGGetActorDataLayersSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetActorDataLayers_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
