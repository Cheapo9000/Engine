// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FunctionLibraries/MultiUserTakesVCamFunctionLibrary.h"

#ifdef VIRTUALCAMERA_MultiUserTakesVCamFunctionLibrary_generated_h
#error "MultiUserTakesVCamFunctionLibrary.generated.h already included, missing '#pragma once' in MultiUserTakesVCamFunctionLibrary.h"
#endif
#define VIRTUALCAMERA_MultiUserTakesVCamFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;

// ********** Begin Class UMultiUserTakesVCamFunctionLibrary ***************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_MultiUserTakesVCamFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSynchronizeTakeRecorderTransactionsLocal); \
	DECLARE_FUNCTION(execGetSynchronizeTakeRecorderTransactions); \
	DECLARE_FUNCTION(execGetSynchronizeTakeRecorderTransactionsLocal); \
	DECLARE_FUNCTION(execSetRecordOnClient); \
	DECLARE_FUNCTION(execGetRecordOnClient); \
	DECLARE_FUNCTION(execSetRecordOnClientLocal); \
	DECLARE_FUNCTION(execGetRecordOnClientLocal);


struct Z_Construct_UClass_UMultiUserTakesVCamFunctionLibrary_Statics;
VIRTUALCAMERA_API UClass* Z_Construct_UClass_UMultiUserTakesVCamFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_MultiUserTakesVCamFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiUserTakesVCamFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UMultiUserTakesVCamFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIRTUALCAMERA_API UClass* ::Z_Construct_UClass_UMultiUserTakesVCamFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMultiUserTakesVCamFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VirtualCamera"), Z_Construct_UClass_UMultiUserTakesVCamFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMultiUserTakesVCamFunctionLibrary)


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_MultiUserTakesVCamFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiUserTakesVCamFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMultiUserTakesVCamFunctionLibrary(UMultiUserTakesVCamFunctionLibrary&&) = delete; \
	UMultiUserTakesVCamFunctionLibrary(const UMultiUserTakesVCamFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiUserTakesVCamFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiUserTakesVCamFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiUserTakesVCamFunctionLibrary) \
	NO_API virtual ~UMultiUserTakesVCamFunctionLibrary();


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_MultiUserTakesVCamFunctionLibrary_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_MultiUserTakesVCamFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_MultiUserTakesVCamFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_MultiUserTakesVCamFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_MultiUserTakesVCamFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMultiUserTakesVCamFunctionLibrary;

// ********** End Class UMultiUserTakesVCamFunctionLibrary *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_MultiUserTakesVCamFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
