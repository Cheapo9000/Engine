// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGResetPointCenter.h"

#ifdef PCG_PCGResetPointCenter_generated_h
#error "PCGResetPointCenter.generated.h already included, missing '#pragma once' in PCGResetPointCenter.h"
#endif
#define PCG_PCGResetPointCenter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGResetPointCenterSettings *********************************************
struct Z_Construct_UClass_UPCGResetPointCenterSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGResetPointCenterSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGResetPointCenter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGResetPointCenterSettings(); \
	friend struct ::Z_Construct_UClass_UPCGResetPointCenterSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGResetPointCenterSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGResetPointCenterSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGResetPointCenterSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGResetPointCenterSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGResetPointCenter_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGResetPointCenterSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGResetPointCenterSettings(UPCGResetPointCenterSettings&&) = delete; \
	UPCGResetPointCenterSettings(const UPCGResetPointCenterSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGResetPointCenterSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGResetPointCenterSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGResetPointCenterSettings) \
	NO_API virtual ~UPCGResetPointCenterSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGResetPointCenter_h_13_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGResetPointCenter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGResetPointCenter_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGResetPointCenter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGResetPointCenterSettings;

// ********** End Class UPCGResetPointCenterSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGResetPointCenter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
