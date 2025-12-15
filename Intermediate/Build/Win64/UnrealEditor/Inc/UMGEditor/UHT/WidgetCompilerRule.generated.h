// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WidgetCompilerRule.h"

#ifdef UMGEDITOR_WidgetCompilerRule_generated_h
#error "WidgetCompilerRule.generated.h already included, missing '#pragma once' in WidgetCompilerRule.h"
#endif
#define UMGEDITOR_WidgetCompilerRule_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWidgetCompilerRule ******************************************************
struct Z_Construct_UClass_UWidgetCompilerRule_Statics;
UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetCompilerRule_NoRegister();

#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetCompilerRule_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetCompilerRule(); \
	friend struct ::Z_Construct_UClass_UWidgetCompilerRule_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMGEDITOR_API UClass* ::Z_Construct_UClass_UWidgetCompilerRule_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetCompilerRule, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMGEditor"), Z_Construct_UClass_UWidgetCompilerRule_NoRegister) \
	DECLARE_SERIALIZER(UWidgetCompilerRule)


#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetCompilerRule_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetCompilerRule(UWidgetCompilerRule&&) = delete; \
	UWidgetCompilerRule(const UWidgetCompilerRule&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMGEDITOR_API, UWidgetCompilerRule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetCompilerRule); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UWidgetCompilerRule) \
	UMGEDITOR_API virtual ~UWidgetCompilerRule();


#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetCompilerRule_h_21_PROLOG
#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetCompilerRule_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UMGEditor_Public_WidgetCompilerRule_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UMGEditor_Public_WidgetCompilerRule_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetCompilerRule;

// ********** End Class UWidgetCompilerRule ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UMGEditor_Public_WidgetCompilerRule_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
