// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGApplyScaleToBounds.h"

#ifdef PCG_PCGApplyScaleToBounds_generated_h
#error "PCGApplyScaleToBounds.generated.h already included, missing '#pragma once' in PCGApplyScaleToBounds.h"
#endif
#define PCG_PCGApplyScaleToBounds_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGApplyScaleToBoundsSettings *******************************************
struct Z_Construct_UClass_UPCGApplyScaleToBoundsSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGApplyScaleToBoundsSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGApplyScaleToBounds_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGApplyScaleToBoundsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGApplyScaleToBoundsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGApplyScaleToBoundsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGApplyScaleToBoundsSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGApplyScaleToBoundsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGApplyScaleToBoundsSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGApplyScaleToBounds_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGApplyScaleToBoundsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGApplyScaleToBoundsSettings(UPCGApplyScaleToBoundsSettings&&) = delete; \
	UPCGApplyScaleToBoundsSettings(const UPCGApplyScaleToBoundsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGApplyScaleToBoundsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGApplyScaleToBoundsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGApplyScaleToBoundsSettings) \
	NO_API virtual ~UPCGApplyScaleToBoundsSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGApplyScaleToBounds_h_12_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGApplyScaleToBounds_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGApplyScaleToBounds_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGApplyScaleToBounds_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGApplyScaleToBoundsSettings;

// ********** End Class UPCGApplyScaleToBoundsSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGApplyScaleToBounds_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
