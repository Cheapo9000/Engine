// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/ControlFlow/PCGQualitySelect.h"

#ifdef PCG_PCGQualitySelect_generated_h
#error "PCGQualitySelect.generated.h already included, missing '#pragma once' in PCGQualitySelect.h"
#endif
#define PCG_PCGQualitySelect_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGQualitySelectSettings ************************************************
struct Z_Construct_UClass_UPCGQualitySelectSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGQualitySelectSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGQualitySelect_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGQualitySelectSettings(); \
	friend struct ::Z_Construct_UClass_UPCGQualitySelectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGQualitySelectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGQualitySelectSettings, UPCGControlFlowSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGQualitySelectSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGQualitySelectSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGQualitySelect_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGQualitySelectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGQualitySelectSettings(UPCGQualitySelectSettings&&) = delete; \
	UPCGQualitySelectSettings(const UPCGQualitySelectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGQualitySelectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGQualitySelectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGQualitySelectSettings) \
	NO_API virtual ~UPCGQualitySelectSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGQualitySelect_h_12_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGQualitySelect_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGQualitySelect_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGQualitySelect_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGQualitySelectSettings;

// ********** End Class UPCGQualitySelectSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGQualitySelect_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
