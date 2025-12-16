// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ICVFXTestControllerBase.h"

#ifdef ICVFXTESTING_ICVFXTestControllerBase_generated_h
#error "ICVFXTestControllerBase.generated.h already included, missing '#pragma once' in ICVFXTestControllerBase.h"
#endif
#define ICVFXTESTING_ICVFXTestControllerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;

// ********** Begin Class UICVFXTestControllerBase *************************************************
#define FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMemReportIntervalChanged); \
	DECLARE_FUNCTION(execOnMemReportTimerExpired); \
	DECLARE_FUNCTION(execTryEarlyExec);


struct Z_Construct_UClass_UICVFXTestControllerBase_Statics;
ICVFXTESTING_API UClass* Z_Construct_UClass_UICVFXTestControllerBase_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerBase_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUICVFXTestControllerBase(); \
	friend struct ::Z_Construct_UClass_UICVFXTestControllerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ICVFXTESTING_API UClass* ::Z_Construct_UClass_UICVFXTestControllerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UICVFXTestControllerBase, UGauntletTestController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ICVFXTesting"), Z_Construct_UClass_UICVFXTestControllerBase_NoRegister) \
	DECLARE_SERIALIZER(UICVFXTestControllerBase)


#define FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerBase_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UICVFXTestControllerBase(UICVFXTestControllerBase&&) = delete; \
	UICVFXTestControllerBase(const UICVFXTestControllerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UICVFXTestControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UICVFXTestControllerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UICVFXTestControllerBase) \
	NO_API virtual ~UICVFXTestControllerBase();


#define FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerBase_h_21_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerBase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerBase_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UICVFXTestControllerBase;

// ********** End Class UICVFXTestControllerBase ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
