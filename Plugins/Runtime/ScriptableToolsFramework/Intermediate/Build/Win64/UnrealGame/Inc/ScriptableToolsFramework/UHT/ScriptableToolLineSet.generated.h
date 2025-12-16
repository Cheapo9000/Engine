// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Drawing/ScriptableToolLineSet.h"

#ifdef SCRIPTABLETOOLSFRAMEWORK_ScriptableToolLineSet_generated_h
#error "ScriptableToolLineSet.generated.h already included, missing '#pragma once' in ScriptableToolLineSet.h"
#endif
#define SCRIPTABLETOOLSFRAMEWORK_ScriptableToolLineSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UScriptableToolLine;
struct FColor;

// ********** Begin Class UScriptableToolLineSet ***************************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolLineSet_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAllLinesThickness); \
	DECLARE_FUNCTION(execSetAllLinesColor); \
	DECLARE_FUNCTION(execRemoveAllLines); \
	DECLARE_FUNCTION(execRemoveLine); \
	DECLARE_FUNCTION(execAddLine);


struct Z_Construct_UClass_UScriptableToolLineSet_Statics;
SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableToolLineSet_NoRegister();

#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolLineSet_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptableToolLineSet(); \
	friend struct ::Z_Construct_UClass_UScriptableToolLineSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UScriptableToolLineSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UScriptableToolLineSet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), Z_Construct_UClass_UScriptableToolLineSet_NoRegister) \
	DECLARE_SERIALIZER(UScriptableToolLineSet)


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolLineSet_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTABLETOOLSFRAMEWORK_API UScriptableToolLineSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScriptableToolLineSet(UScriptableToolLineSet&&) = delete; \
	UScriptableToolLineSet(const UScriptableToolLineSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLETOOLSFRAMEWORK_API, UScriptableToolLineSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableToolLineSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptableToolLineSet) \
	SCRIPTABLETOOLSFRAMEWORK_API virtual ~UScriptableToolLineSet();


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolLineSet_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolLineSet_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolLineSet_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolLineSet_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolLineSet_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScriptableToolLineSet;

// ********** End Class UScriptableToolLineSet *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolLineSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
