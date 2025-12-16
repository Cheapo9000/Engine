// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FloatDistanceColumn.h"

#ifdef CHOOSER_FloatDistanceColumn_generated_h
#error "FloatDistanceColumn.generated.h already included, missing '#pragma once' in FloatDistanceColumn.h"
#endif
#define CHOOSER_FloatDistanceColumn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChooserFloatDistanceRowData **************************************
struct Z_Construct_UScriptStruct_FChooserFloatDistanceRowData_Statics;
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_FloatDistanceColumn_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChooserFloatDistanceRowData_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct();


struct FChooserFloatDistanceRowData;
// ********** End ScriptStruct FChooserFloatDistanceRowData ****************************************

// ********** Begin Class UFloatAutoPopulator ******************************************************
struct Z_Construct_UClass_UFloatAutoPopulator_Statics;
CHOOSER_API UClass* Z_Construct_UClass_UFloatAutoPopulator_NoRegister();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_FloatDistanceColumn_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFloatAutoPopulator(); \
	friend struct ::Z_Construct_UClass_UFloatAutoPopulator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHOOSER_API UClass* ::Z_Construct_UClass_UFloatAutoPopulator_NoRegister(); \
public: \
	DECLARE_CLASS2(UFloatAutoPopulator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Chooser"), Z_Construct_UClass_UFloatAutoPopulator_NoRegister) \
	DECLARE_SERIALIZER(UFloatAutoPopulator)


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_FloatDistanceColumn_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHOOSER_API UFloatAutoPopulator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFloatAutoPopulator(UFloatAutoPopulator&&) = delete; \
	UFloatAutoPopulator(const UFloatAutoPopulator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHOOSER_API, UFloatAutoPopulator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFloatAutoPopulator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFloatAutoPopulator) \
	CHOOSER_API virtual ~UFloatAutoPopulator();


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_FloatDistanceColumn_h_32_PROLOG
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_FloatDistanceColumn_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_FloatDistanceColumn_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_FloatDistanceColumn_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFloatAutoPopulator;

// ********** End Class UFloatAutoPopulator ********************************************************

// ********** Begin ScriptStruct FFloatDistanceColumn **********************************************
struct Z_Construct_UScriptStruct_FFloatDistanceColumn_Statics;
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_FloatDistanceColumn_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFloatDistanceColumn_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FChooserColumnBase Super;


struct FFloatDistanceColumn;
// ********** End ScriptStruct FFloatDistanceColumn ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_Chooser_Internal_FloatDistanceColumn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
