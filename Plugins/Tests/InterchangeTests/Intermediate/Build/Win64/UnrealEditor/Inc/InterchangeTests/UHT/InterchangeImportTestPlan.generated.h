// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeImportTestPlan.h"

#ifdef INTERCHANGETESTS_InterchangeImportTestPlan_generated_h
#error "InterchangeImportTestPlan.generated.h already included, missing '#pragma once' in InterchangeImportTestPlan.h"
#endif
#define INTERCHANGETESTS_InterchangeImportTestPlan_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeImportTestPlan ***********************************************
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestPlan_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRunThisTest);


struct Z_Construct_UClass_UInterchangeImportTestPlan_Statics;
INTERCHANGETESTS_API UClass* Z_Construct_UClass_UInterchangeImportTestPlan_NoRegister();

#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestPlan_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeImportTestPlan(); \
	friend struct ::Z_Construct_UClass_UInterchangeImportTestPlan_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGETESTS_API UClass* ::Z_Construct_UClass_UInterchangeImportTestPlan_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeImportTestPlan, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeTests"), Z_Construct_UClass_UInterchangeImportTestPlan_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeImportTestPlan)


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestPlan_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeImportTestPlan(UInterchangeImportTestPlan&&) = delete; \
	UInterchangeImportTestPlan(const UInterchangeImportTestPlan&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGETESTS_API, UInterchangeImportTestPlan); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeImportTestPlan); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeImportTestPlan) \
	INTERCHANGETESTS_API virtual ~UInterchangeImportTestPlan();


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestPlan_h_20_PROLOG
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestPlan_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestPlan_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestPlan_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestPlan_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeImportTestPlan;

// ********** End Class UInterchangeImportTestPlan *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestPlan_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
