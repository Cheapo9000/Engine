// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/ControlFlow/PCGQualityBranch.h"

#ifdef PCG_PCGQualityBranch_generated_h
#error "PCGQualityBranch.generated.h already included, missing '#pragma once' in PCGQualityBranch.h"
#endif
#define PCG_PCGQualityBranch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGQualityBranchSettings ************************************************
struct Z_Construct_UClass_UPCGQualityBranchSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGQualityBranchSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGQualityBranch_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGQualityBranchSettings(); \
	friend struct ::Z_Construct_UClass_UPCGQualityBranchSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGQualityBranchSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGQualityBranchSettings, UPCGControlFlowSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGQualityBranchSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGQualityBranchSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGQualityBranch_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGQualityBranchSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGQualityBranchSettings(UPCGQualityBranchSettings&&) = delete; \
	UPCGQualityBranchSettings(const UPCGQualityBranchSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGQualityBranchSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGQualityBranchSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGQualityBranchSettings) \
	NO_API virtual ~UPCGQualityBranchSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGQualityBranch_h_12_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGQualityBranch_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGQualityBranch_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGQualityBranch_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGQualityBranchSettings;

// ********** End Class UPCGQualityBranchSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGQualityBranch_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
