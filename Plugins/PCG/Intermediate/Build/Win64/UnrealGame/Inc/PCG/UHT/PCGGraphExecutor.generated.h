// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/PCGGraphExecutor.h"

#ifdef PCG_PCGGraphExecutor_generated_h
#error "PCGGraphExecutor.generated.h already included, missing '#pragma once' in PCGGraphExecutor.h"
#endif
#define PCG_PCGGraphExecutor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGGridLinkageSettings **************************************************
struct Z_Construct_UClass_UPCGGridLinkageSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGGridLinkageSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGGraphExecutor_h_530_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGridLinkageSettings(); \
	friend struct ::Z_Construct_UClass_UPCGGridLinkageSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGGridLinkageSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGridLinkageSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGGridLinkageSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGGridLinkageSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGGraphExecutor_h_530_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGridLinkageSettings(UPCGGridLinkageSettings&&) = delete; \
	UPCGGridLinkageSettings(const UPCGGridLinkageSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGGridLinkageSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGridLinkageSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGGridLinkageSettings) \
	NO_API virtual ~UPCGGridLinkageSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGGraphExecutor_h_527_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGGraphExecutor_h_530_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGGraphExecutor_h_530_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGGraphExecutor_h_530_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGridLinkageSettings;

// ********** End Class UPCGGridLinkageSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGGraphExecutor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
