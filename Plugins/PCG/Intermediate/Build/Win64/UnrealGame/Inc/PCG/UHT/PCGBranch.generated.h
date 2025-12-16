// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/ControlFlow/PCGBranch.h"

#ifdef PCG_PCGBranch_generated_h
#error "PCGBranch.generated.h already included, missing '#pragma once' in PCGBranch.h"
#endif
#define PCG_PCGBranch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGBranchSettings *******************************************************
struct Z_Construct_UClass_UPCGBranchSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGBranchSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGBranch_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGBranchSettings(); \
	friend struct ::Z_Construct_UClass_UPCGBranchSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGBranchSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGBranchSettings, UPCGControlFlowSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGBranchSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGBranchSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGBranch_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGBranchSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGBranchSettings(UPCGBranchSettings&&) = delete; \
	UPCGBranchSettings(const UPCGBranchSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGBranchSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGBranchSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGBranchSettings) \
	NO_API virtual ~UPCGBranchSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGBranch_h_11_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGBranch_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGBranch_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGBranch_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGBranchSettings;

// ********** End Class UPCGBranchSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGBranch_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
