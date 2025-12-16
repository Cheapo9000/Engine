// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/ControlFlow/PCGWait.h"

#ifdef PCG_PCGWait_generated_h
#error "PCGWait.generated.h already included, missing '#pragma once' in PCGWait.h"
#endif
#define PCG_PCGWait_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGWaitSettings *********************************************************
struct Z_Construct_UClass_UPCGWaitSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGWaitSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGWait_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGWaitSettings(); \
	friend struct ::Z_Construct_UClass_UPCGWaitSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGWaitSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGWaitSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGWaitSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGWaitSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGWait_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGWaitSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGWaitSettings(UPCGWaitSettings&&) = delete; \
	UPCGWaitSettings(const UPCGWaitSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGWaitSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGWaitSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGWaitSettings) \
	NO_API virtual ~UPCGWaitSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGWait_h_14_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGWait_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGWait_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGWait_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGWaitSettings;

// ********** End Class UPCGWaitSettings ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGWait_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
