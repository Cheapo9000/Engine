// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Drawing/ScriptableToolLine.h"

#ifdef SCRIPTABLETOOLSFRAMEWORK_ScriptableToolLine_generated_h
#error "ScriptableToolLine.generated.h already included, missing '#pragma once' in ScriptableToolLine.h"
#endif
#define SCRIPTABLETOOLSFRAMEWORK_ScriptableToolLine_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;

// ********** Begin Class UScriptableToolLine ******************************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolLine_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetLineDepthBias); \
	DECLARE_FUNCTION(execSetLineThickness); \
	DECLARE_FUNCTION(execSetLineColor); \
	DECLARE_FUNCTION(execSetLineEndPoints); \
	DECLARE_FUNCTION(execSetLineEnd); \
	DECLARE_FUNCTION(execSetLineStart);


struct Z_Construct_UClass_UScriptableToolLine_Statics;
SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableToolLine_NoRegister();

#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolLine_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptableToolLine(); \
	friend struct ::Z_Construct_UClass_UScriptableToolLine_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UScriptableToolLine_NoRegister(); \
public: \
	DECLARE_CLASS2(UScriptableToolLine, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), Z_Construct_UClass_UScriptableToolLine_NoRegister) \
	DECLARE_SERIALIZER(UScriptableToolLine)


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolLine_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTABLETOOLSFRAMEWORK_API UScriptableToolLine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScriptableToolLine(UScriptableToolLine&&) = delete; \
	UScriptableToolLine(const UScriptableToolLine&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLETOOLSFRAMEWORK_API, UScriptableToolLine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableToolLine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptableToolLine) \
	SCRIPTABLETOOLSFRAMEWORK_API virtual ~UScriptableToolLine();


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolLine_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolLine_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolLine_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolLine_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolLine_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScriptableToolLine;

// ********** End Class UScriptableToolLine ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolLine_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
