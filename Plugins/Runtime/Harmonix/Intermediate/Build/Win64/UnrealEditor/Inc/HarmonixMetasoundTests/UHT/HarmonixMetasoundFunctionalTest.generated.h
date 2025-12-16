// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixMetasoundFunctionalTest.h"

#ifdef HARMONIXMETASOUNDTESTS_HarmonixMetasoundFunctionalTest_generated_h
#error "HarmonixMetasoundFunctionalTest.generated.h already included, missing '#pragma once' in HarmonixMetasoundFunctionalTest.h"
#endif
#define HARMONIXMETASOUNDTESTS_HarmonixMetasoundFunctionalTest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMetasoundGeneratorHandle;
enum class EAudioParameterType : uint8;

// ********** Begin Class UHarmonixMetasoundFunctionalTestLibrary **********************************
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixMetasoundFunctionalTest_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddMidiStreamLogger); \
	DECLARE_FUNCTION(execAddOutputLogger);


struct Z_Construct_UClass_UHarmonixMetasoundFunctionalTestLibrary_Statics;
HARMONIXMETASOUNDTESTS_API UClass* Z_Construct_UClass_UHarmonixMetasoundFunctionalTestLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixMetasoundFunctionalTest_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHarmonixMetasoundFunctionalTestLibrary(); \
	friend struct ::Z_Construct_UClass_UHarmonixMetasoundFunctionalTestLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXMETASOUNDTESTS_API UClass* ::Z_Construct_UClass_UHarmonixMetasoundFunctionalTestLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UHarmonixMetasoundFunctionalTestLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HarmonixMetasoundTests"), Z_Construct_UClass_UHarmonixMetasoundFunctionalTestLibrary_NoRegister) \
	DECLARE_SERIALIZER(UHarmonixMetasoundFunctionalTestLibrary)


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixMetasoundFunctionalTest_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHarmonixMetasoundFunctionalTestLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHarmonixMetasoundFunctionalTestLibrary(UHarmonixMetasoundFunctionalTestLibrary&&) = delete; \
	UHarmonixMetasoundFunctionalTestLibrary(const UHarmonixMetasoundFunctionalTestLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHarmonixMetasoundFunctionalTestLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHarmonixMetasoundFunctionalTestLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHarmonixMetasoundFunctionalTestLibrary) \
	NO_API virtual ~UHarmonixMetasoundFunctionalTestLibrary();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixMetasoundFunctionalTest_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixMetasoundFunctionalTest_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixMetasoundFunctionalTest_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixMetasoundFunctionalTest_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixMetasoundFunctionalTest_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHarmonixMetasoundFunctionalTestLibrary;

// ********** End Class UHarmonixMetasoundFunctionalTestLibrary ************************************

// ********** Begin Class AHarmonixMetasoundFunctionalTest *****************************************
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixMetasoundFunctionalTest_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTestFinishedEvent);


struct Z_Construct_UClass_AHarmonixMetasoundFunctionalTest_Statics;
HARMONIXMETASOUNDTESTS_API UClass* Z_Construct_UClass_AHarmonixMetasoundFunctionalTest_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixMetasoundFunctionalTest_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHarmonixMetasoundFunctionalTest(); \
	friend struct ::Z_Construct_UClass_AHarmonixMetasoundFunctionalTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXMETASOUNDTESTS_API UClass* ::Z_Construct_UClass_AHarmonixMetasoundFunctionalTest_NoRegister(); \
public: \
	DECLARE_CLASS2(AHarmonixMetasoundFunctionalTest, AFunctionalTest, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HarmonixMetasoundTests"), Z_Construct_UClass_AHarmonixMetasoundFunctionalTest_NoRegister) \
	DECLARE_SERIALIZER(AHarmonixMetasoundFunctionalTest)


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixMetasoundFunctionalTest_h_47_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHarmonixMetasoundFunctionalTest(AHarmonixMetasoundFunctionalTest&&) = delete; \
	AHarmonixMetasoundFunctionalTest(const AHarmonixMetasoundFunctionalTest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHarmonixMetasoundFunctionalTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHarmonixMetasoundFunctionalTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHarmonixMetasoundFunctionalTest) \
	NO_API virtual ~AHarmonixMetasoundFunctionalTest();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixMetasoundFunctionalTest_h_44_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixMetasoundFunctionalTest_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixMetasoundFunctionalTest_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixMetasoundFunctionalTest_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixMetasoundFunctionalTest_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHarmonixMetasoundFunctionalTest;

// ********** End Class AHarmonixMetasoundFunctionalTest *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixMetasoundFunctionalTest_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
