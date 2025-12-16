// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Drawing/ScriptableToolPointSet.h"

#ifdef SCRIPTABLETOOLSFRAMEWORK_ScriptableToolPointSet_generated_h
#error "ScriptableToolPointSet.generated.h already included, missing '#pragma once' in ScriptableToolPointSet.h"
#endif
#define SCRIPTABLETOOLSFRAMEWORK_ScriptableToolPointSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UScriptableToolPoint;
struct FColor;

// ********** Begin Class UScriptableToolPointSet **************************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolPointSet_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAllPointsSize); \
	DECLARE_FUNCTION(execSetAllPointsColor); \
	DECLARE_FUNCTION(execRemoveAllPoints); \
	DECLARE_FUNCTION(execRemovePoint); \
	DECLARE_FUNCTION(execAddPoint);


struct Z_Construct_UClass_UScriptableToolPointSet_Statics;
SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableToolPointSet_NoRegister();

#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolPointSet_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptableToolPointSet(); \
	friend struct ::Z_Construct_UClass_UScriptableToolPointSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UScriptableToolPointSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UScriptableToolPointSet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), Z_Construct_UClass_UScriptableToolPointSet_NoRegister) \
	DECLARE_SERIALIZER(UScriptableToolPointSet)


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolPointSet_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTABLETOOLSFRAMEWORK_API UScriptableToolPointSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScriptableToolPointSet(UScriptableToolPointSet&&) = delete; \
	UScriptableToolPointSet(const UScriptableToolPointSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLETOOLSFRAMEWORK_API, UScriptableToolPointSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableToolPointSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptableToolPointSet) \
	SCRIPTABLETOOLSFRAMEWORK_API virtual ~UScriptableToolPointSet();


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolPointSet_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolPointSet_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolPointSet_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolPointSet_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolPointSet_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScriptableToolPointSet;

// ********** End Class UScriptableToolPointSet ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolPointSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
