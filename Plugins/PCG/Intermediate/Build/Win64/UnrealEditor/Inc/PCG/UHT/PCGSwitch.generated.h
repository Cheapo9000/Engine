// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/ControlFlow/PCGSwitch.h"

#ifdef PCG_PCGSwitch_generated_h
#error "PCGSwitch.generated.h already included, missing '#pragma once' in PCGSwitch.h"
#endif
#define PCG_PCGSwitch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGSwitchSettings *******************************************************
struct Z_Construct_UClass_UPCGSwitchSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSwitchSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGSwitch_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSwitchSettings(); \
	friend struct ::Z_Construct_UClass_UPCGSwitchSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSwitchSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSwitchSettings, UPCGControlFlowSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSwitchSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGSwitchSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGSwitch_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGSwitchSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSwitchSettings(UPCGSwitchSettings&&) = delete; \
	UPCGSwitchSettings(const UPCGSwitchSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGSwitchSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSwitchSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSwitchSettings) \
	NO_API virtual ~UPCGSwitchSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGSwitch_h_14_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGSwitch_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGSwitch_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGSwitch_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSwitchSettings;

// ********** End Class UPCGSwitchSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGSwitch_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
