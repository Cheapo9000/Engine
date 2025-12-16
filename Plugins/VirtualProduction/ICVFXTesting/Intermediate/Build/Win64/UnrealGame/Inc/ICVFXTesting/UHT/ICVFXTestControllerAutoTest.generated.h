// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ICVFXTestControllerAutoTest.h"

#ifdef ICVFXTESTING_ICVFXTestControllerAutoTest_generated_h
#error "ICVFXTestControllerAutoTest.generated.h already included, missing '#pragma once' in ICVFXTestControllerAutoTest.h"
#endif
#define ICVFXTESTING_ICVFXTestControllerAutoTest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameStateBase;

// ********** Begin Class UICVFXTestControllerAutoTest *********************************************
#define FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSoakTimeChanged); \
	DECLARE_FUNCTION(execOnGameStateSet); \
	DECLARE_FUNCTION(execOnWorldBeginPlay);


struct Z_Construct_UClass_UICVFXTestControllerAutoTest_Statics;
ICVFXTESTING_API UClass* Z_Construct_UClass_UICVFXTestControllerAutoTest_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUICVFXTestControllerAutoTest(); \
	friend struct ::Z_Construct_UClass_UICVFXTestControllerAutoTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ICVFXTESTING_API UClass* ::Z_Construct_UClass_UICVFXTestControllerAutoTest_NoRegister(); \
public: \
	DECLARE_CLASS2(UICVFXTestControllerAutoTest, UICVFXTestControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ICVFXTesting"), Z_Construct_UClass_UICVFXTestControllerAutoTest_NoRegister) \
	DECLARE_SERIALIZER(UICVFXTestControllerAutoTest)


#define FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UICVFXTestControllerAutoTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UICVFXTestControllerAutoTest(UICVFXTestControllerAutoTest&&) = delete; \
	UICVFXTestControllerAutoTest(const UICVFXTestControllerAutoTest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UICVFXTestControllerAutoTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UICVFXTestControllerAutoTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UICVFXTestControllerAutoTest) \
	NO_API virtual ~UICVFXTestControllerAutoTest();


#define FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_63_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UICVFXTestControllerAutoTest;

// ********** End Class UICVFXTestControllerAutoTest ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h

// ********** Begin Enum EICVFXAutoTestState *******************************************************
#define FOREACH_ENUM_EICVFXAUTOTESTSTATE(op) \
	op(EICVFXAutoTestState::InitialLoad) \
	op(EICVFXAutoTestState::Soak) \
	op(EICVFXAutoTestState::TraverseTestLocations) \
	op(EICVFXAutoTestState::Finished) \
	op(EICVFXAutoTestState::Shutdown) 

enum class EICVFXAutoTestState : uint8;
template<> struct TIsUEnumClass<EICVFXAutoTestState> { enum { Value = true }; };
template<> ICVFXTESTING_NON_ATTRIBUTED_API UEnum* StaticEnum<EICVFXAutoTestState>();
// ********** End Enum EICVFXAutoTestState *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
