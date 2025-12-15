// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolWidgetsSlateTypes.h"

#ifdef TOOLWIDGETS_ToolWidgetsSlateTypes_generated_h
#error "ToolWidgetsSlateTypes.generated.h already included, missing '#pragma once' in ToolWidgetsSlateTypes.h"
#endif
#define TOOLWIDGETS_ToolWidgetsSlateTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FActionButtonStyle ************************************************
struct Z_Construct_UScriptStruct_FActionButtonStyle_Statics;
#define FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActionButtonStyle_Statics; \
	TOOLWIDGETS_API static class UScriptStruct* StaticStruct(); \
	typedef FSlateWidgetStyle Super;


struct FActionButtonStyle;
// ********** End ScriptStruct FActionButtonStyle **************************************************

// ********** Begin Class UToolSlateWidgetTypesFunctionLibrary *************************************
#if WITH_EDITOR
#define FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h_157_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetActionButtonTypeNames);
#else // WITH_EDITOR
#define FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h_157_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UToolSlateWidgetTypesFunctionLibrary_Statics;
TOOLWIDGETS_API UClass* Z_Construct_UClass_UToolSlateWidgetTypesFunctionLibrary_NoRegister();

#define FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h_157_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolSlateWidgetTypesFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UToolSlateWidgetTypesFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOOLWIDGETS_API UClass* ::Z_Construct_UClass_UToolSlateWidgetTypesFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UToolSlateWidgetTypesFunctionLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolWidgets"), Z_Construct_UClass_UToolSlateWidgetTypesFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UToolSlateWidgetTypesFunctionLibrary)


#define FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h_157_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TOOLWIDGETS_API UToolSlateWidgetTypesFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UToolSlateWidgetTypesFunctionLibrary(UToolSlateWidgetTypesFunctionLibrary&&) = delete; \
	UToolSlateWidgetTypesFunctionLibrary(const UToolSlateWidgetTypesFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOOLWIDGETS_API, UToolSlateWidgetTypesFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolSlateWidgetTypesFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolSlateWidgetTypesFunctionLibrary) \
	TOOLWIDGETS_API virtual ~UToolSlateWidgetTypesFunctionLibrary();


#define FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h_153_PROLOG
#define FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h_157_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h_157_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h_157_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h_157_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UToolSlateWidgetTypesFunctionLibrary;

// ********** End Class UToolSlateWidgetTypesFunctionLibrary ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
