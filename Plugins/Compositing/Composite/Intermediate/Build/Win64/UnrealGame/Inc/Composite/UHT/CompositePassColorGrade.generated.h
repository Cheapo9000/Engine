// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Passes/CompositePassColorGrade.h"

#ifdef COMPOSITE_CompositePassColorGrade_generated_h
#error "CompositePassColorGrade.generated.h already included, missing '#pragma once' in CompositePassColorGrade.h"
#endif
#define COMPOSITE_CompositePassColorGrade_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCompositeTemperatureSettings *************************************
struct Z_Construct_UScriptStruct_FCompositeTemperatureSettings_Statics;
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassColorGrade_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCompositeTemperatureSettings_Statics; \
	COMPOSITE_API static class UScriptStruct* StaticStruct();


struct FCompositeTemperatureSettings;
// ********** End ScriptStruct FCompositeTemperatureSettings ***************************************

// ********** Begin Class UCompositePassColorGrade *************************************************
struct Z_Construct_UClass_UCompositePassColorGrade_Statics;
COMPOSITE_API UClass* Z_Construct_UClass_UCompositePassColorGrade_NoRegister();

#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassColorGrade_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositePassColorGrade(); \
	friend struct ::Z_Construct_UClass_UCompositePassColorGrade_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITE_API UClass* ::Z_Construct_UClass_UCompositePassColorGrade_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositePassColorGrade, UCompositePassBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composite"), Z_Construct_UClass_UCompositePassColorGrade_NoRegister) \
	DECLARE_SERIALIZER(UCompositePassColorGrade)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassColorGrade_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositePassColorGrade(UCompositePassColorGrade&&) = delete; \
	UCompositePassColorGrade(const UCompositePassColorGrade&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSITE_API, UCompositePassColorGrade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositePassColorGrade); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositePassColorGrade)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassColorGrade_h_41_PROLOG
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassColorGrade_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassColorGrade_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassColorGrade_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositePassColorGrade;

// ********** End Class UCompositePassColorGrade ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassColorGrade_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
