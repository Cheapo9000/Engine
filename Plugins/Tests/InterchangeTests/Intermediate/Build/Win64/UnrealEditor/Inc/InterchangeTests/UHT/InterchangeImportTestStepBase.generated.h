// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeImportTestStepBase.h"

#ifdef INTERCHANGETESTS_InterchangeImportTestStepBase_generated_h
#error "InterchangeImportTestStepBase.generated.h already included, missing '#pragma once' in InterchangeImportTestStepBase.h"
#endif
#define INTERCHANGETESTS_InterchangeImportTestStepBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FInterchangeTestScreenshotParameters ******************************
struct Z_Construct_UScriptStruct_FInterchangeTestScreenshotParameters_Statics;
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestStepBase_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInterchangeTestScreenshotParameters_Statics; \
	INTERCHANGETESTS_API static class UScriptStruct* StaticStruct();


struct FInterchangeTestScreenshotParameters;
// ********** End ScriptStruct FInterchangeTestScreenshotParameters ********************************

// ********** Begin Class UInterchangeImportTestStepBase *******************************************
struct Z_Construct_UClass_UInterchangeImportTestStepBase_Statics;
INTERCHANGETESTS_API UClass* Z_Construct_UClass_UInterchangeImportTestStepBase_NoRegister();

#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestStepBase_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeImportTestStepBase(); \
	friend struct ::Z_Construct_UClass_UInterchangeImportTestStepBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGETESTS_API UClass* ::Z_Construct_UClass_UInterchangeImportTestStepBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeImportTestStepBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeTests"), Z_Construct_UClass_UInterchangeImportTestStepBase_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeImportTestStepBase)


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestStepBase_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGETESTS_API UInterchangeImportTestStepBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeImportTestStepBase(UInterchangeImportTestStepBase&&) = delete; \
	UInterchangeImportTestStepBase(const UInterchangeImportTestStepBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGETESTS_API, UInterchangeImportTestStepBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeImportTestStepBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeImportTestStepBase) \
	INTERCHANGETESTS_API virtual ~UInterchangeImportTestStepBase();


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestStepBase_h_58_PROLOG
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestStepBase_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestStepBase_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestStepBase_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeImportTestStepBase;

// ********** End Class UInterchangeImportTestStepBase *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestStepBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
