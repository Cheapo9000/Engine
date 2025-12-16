// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GauntletTestControllerBootTest.h"

#ifdef GAUNTLET_GauntletTestControllerBootTest_generated_h
#error "GauntletTestControllerBootTest.generated.h already included, missing '#pragma once' in GauntletTestControllerBootTest.h"
#endif
#define GAUNTLET_GauntletTestControllerBootTest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGauntletTestControllerBootTest ******************************************
struct Z_Construct_UClass_UGauntletTestControllerBootTest_Statics;
GAUNTLET_API UClass* Z_Construct_UClass_UGauntletTestControllerBootTest_NoRegister();

#define FID_Engine_Plugins_Experimental_Gauntlet_Source_Gauntlet_Public_GauntletTestControllerBootTest_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGauntletTestControllerBootTest(); \
	friend struct ::Z_Construct_UClass_UGauntletTestControllerBootTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAUNTLET_API UClass* ::Z_Construct_UClass_UGauntletTestControllerBootTest_NoRegister(); \
public: \
	DECLARE_CLASS2(UGauntletTestControllerBootTest, UGauntletTestController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Gauntlet"), Z_Construct_UClass_UGauntletTestControllerBootTest_NoRegister) \
	DECLARE_SERIALIZER(UGauntletTestControllerBootTest)


#define FID_Engine_Plugins_Experimental_Gauntlet_Source_Gauntlet_Public_GauntletTestControllerBootTest_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAUNTLET_API UGauntletTestControllerBootTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGauntletTestControllerBootTest(UGauntletTestControllerBootTest&&) = delete; \
	UGauntletTestControllerBootTest(const UGauntletTestControllerBootTest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAUNTLET_API, UGauntletTestControllerBootTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGauntletTestControllerBootTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGauntletTestControllerBootTest) \
	GAUNTLET_API virtual ~UGauntletTestControllerBootTest();


#define FID_Engine_Plugins_Experimental_Gauntlet_Source_Gauntlet_Public_GauntletTestControllerBootTest_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_Gauntlet_Source_Gauntlet_Public_GauntletTestControllerBootTest_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Gauntlet_Source_Gauntlet_Public_GauntletTestControllerBootTest_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Gauntlet_Source_Gauntlet_Public_GauntletTestControllerBootTest_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGauntletTestControllerBootTest;

// ********** End Class UGauntletTestControllerBootTest ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Gauntlet_Source_Gauntlet_Public_GauntletTestControllerBootTest_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
