// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGGather.h"

#ifdef PCG_PCGGather_generated_h
#error "PCGGather.generated.h already included, missing '#pragma once' in PCGGather.h"
#endif
#define PCG_PCGGather_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGGatherSettings *******************************************************
struct Z_Construct_UClass_UPCGGatherSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGGatherSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGather_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGatherSettings(); \
	friend struct ::Z_Construct_UClass_UPCGGatherSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGGatherSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGatherSettings, UPCGSettingsWithDynamicInputs, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGGatherSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGGatherSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGather_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGGatherSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGatherSettings(UPCGGatherSettings&&) = delete; \
	UPCGGatherSettings(const UPCGGatherSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGGatherSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGatherSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGatherSettings) \
	NO_API virtual ~UPCGGatherSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGather_h_11_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGather_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGather_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGather_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGatherSettings;

// ********** End Class UPCGGatherSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGather_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
