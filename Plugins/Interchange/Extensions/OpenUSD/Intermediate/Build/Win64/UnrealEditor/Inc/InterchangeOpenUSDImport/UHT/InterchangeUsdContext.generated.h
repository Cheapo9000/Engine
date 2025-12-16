// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeUsdContext.h"

#ifdef INTERCHANGEOPENUSDIMPORT_InterchangeUsdContext_generated_h
#error "InterchangeUsdContext.generated.h already included, missing '#pragma once' in InterchangeUsdContext.h"
#endif
#define INTERCHANGEOPENUSDIMPORT_InterchangeUsdContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeUsdContext ***************************************************
#define FID_Engine_Plugins_Interchange_Extensions_OpenUSD_Source_Import_Public_InterchangeUsdContext_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetStageId); \
	DECLARE_FUNCTION(execGetStageId);


struct Z_Construct_UClass_UInterchangeUsdContext_Statics;
INTERCHANGEOPENUSDIMPORT_API UClass* Z_Construct_UClass_UInterchangeUsdContext_NoRegister();

#define FID_Engine_Plugins_Interchange_Extensions_OpenUSD_Source_Import_Public_InterchangeUsdContext_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeUsdContext(); \
	friend struct ::Z_Construct_UClass_UInterchangeUsdContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEOPENUSDIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeUsdContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeUsdContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeOpenUSDImport"), Z_Construct_UClass_UInterchangeUsdContext_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeUsdContext)


#define FID_Engine_Plugins_Interchange_Extensions_OpenUSD_Source_Import_Public_InterchangeUsdContext_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeUsdContext(UInterchangeUsdContext&&) = delete; \
	UInterchangeUsdContext(const UInterchangeUsdContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeUsdContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeUsdContext); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeUsdContext) \
	NO_API virtual ~UInterchangeUsdContext();


#define FID_Engine_Plugins_Interchange_Extensions_OpenUSD_Source_Import_Public_InterchangeUsdContext_h_13_PROLOG
#define FID_Engine_Plugins_Interchange_Extensions_OpenUSD_Source_Import_Public_InterchangeUsdContext_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Extensions_OpenUSD_Source_Import_Public_InterchangeUsdContext_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Extensions_OpenUSD_Source_Import_Public_InterchangeUsdContext_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Extensions_OpenUSD_Source_Import_Public_InterchangeUsdContext_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeUsdContext;

// ********** End Class UInterchangeUsdContext *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Extensions_OpenUSD_Source_Import_Public_InterchangeUsdContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
