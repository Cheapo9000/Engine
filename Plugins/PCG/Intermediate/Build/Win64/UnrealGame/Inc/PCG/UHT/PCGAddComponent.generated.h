// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGAddComponent.h"

#ifdef PCG_PCGAddComponent_generated_h
#error "PCGAddComponent.generated.h already included, missing '#pragma once' in PCGAddComponent.h"
#endif
#define PCG_PCGAddComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGAddComponentSettings *************************************************
#if WITH_EDITOR
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAddComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execCanEditActorReference);
#else // WITH_EDITOR
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAddComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UPCGAddComponentSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGAddComponentSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAddComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGAddComponentSettings(); \
	friend struct ::Z_Construct_UClass_UPCGAddComponentSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGAddComponentSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGAddComponentSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGAddComponentSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGAddComponentSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAddComponent_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGAddComponentSettings(UPCGAddComponentSettings&&) = delete; \
	UPCGAddComponentSettings(const UPCGAddComponentSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGAddComponentSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGAddComponentSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGAddComponentSettings) \
	PCG_API virtual ~UPCGAddComponentSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAddComponent_h_25_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAddComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAddComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAddComponent_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAddComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGAddComponentSettings;

// ********** End Class UPCGAddComponentSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAddComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
