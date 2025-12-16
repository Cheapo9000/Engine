// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/ControlFlow/PCGBooleanSelect.h"

#ifdef PCG_PCGBooleanSelect_generated_h
#error "PCGBooleanSelect.generated.h already included, missing '#pragma once' in PCGBooleanSelect.h"
#endif
#define PCG_PCGBooleanSelect_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGBooleanSelectSettings ************************************************
struct Z_Construct_UClass_UPCGBooleanSelectSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGBooleanSelectSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGBooleanSelect_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGBooleanSelectSettings(); \
	friend struct ::Z_Construct_UClass_UPCGBooleanSelectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGBooleanSelectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGBooleanSelectSettings, UPCGControlFlowSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGBooleanSelectSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGBooleanSelectSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGBooleanSelect_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGBooleanSelectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGBooleanSelectSettings(UPCGBooleanSelectSettings&&) = delete; \
	UPCGBooleanSelectSettings(const UPCGBooleanSelectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGBooleanSelectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGBooleanSelectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGBooleanSelectSettings) \
	NO_API virtual ~UPCGBooleanSelectSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGBooleanSelect_h_11_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGBooleanSelect_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGBooleanSelect_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGBooleanSelect_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGBooleanSelectSettings;

// ********** End Class UPCGBooleanSelectSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGBooleanSelect_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
