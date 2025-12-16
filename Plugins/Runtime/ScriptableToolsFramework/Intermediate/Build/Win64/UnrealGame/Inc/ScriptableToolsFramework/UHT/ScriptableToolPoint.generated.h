// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Drawing/ScriptableToolPoint.h"

#ifdef SCRIPTABLETOOLSFRAMEWORK_ScriptableToolPoint_generated_h
#error "ScriptableToolPoint.generated.h already included, missing '#pragma once' in ScriptableToolPoint.h"
#endif
#define SCRIPTABLETOOLSFRAMEWORK_ScriptableToolPoint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;

// ********** Begin Class UScriptableToolPoint *****************************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolPoint_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPointDepthBias); \
	DECLARE_FUNCTION(execSetPointSize); \
	DECLARE_FUNCTION(execSetPointColor); \
	DECLARE_FUNCTION(execSetPointPosition);


struct Z_Construct_UClass_UScriptableToolPoint_Statics;
SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableToolPoint_NoRegister();

#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolPoint_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptableToolPoint(); \
	friend struct ::Z_Construct_UClass_UScriptableToolPoint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UScriptableToolPoint_NoRegister(); \
public: \
	DECLARE_CLASS2(UScriptableToolPoint, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), Z_Construct_UClass_UScriptableToolPoint_NoRegister) \
	DECLARE_SERIALIZER(UScriptableToolPoint)


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolPoint_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTABLETOOLSFRAMEWORK_API UScriptableToolPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScriptableToolPoint(UScriptableToolPoint&&) = delete; \
	UScriptableToolPoint(const UScriptableToolPoint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLETOOLSFRAMEWORK_API, UScriptableToolPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableToolPoint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptableToolPoint) \
	SCRIPTABLETOOLSFRAMEWORK_API virtual ~UScriptableToolPoint();


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolPoint_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolPoint_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolPoint_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolPoint_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolPoint_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScriptableToolPoint;

// ********** End Class UScriptableToolPoint *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolPoint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
