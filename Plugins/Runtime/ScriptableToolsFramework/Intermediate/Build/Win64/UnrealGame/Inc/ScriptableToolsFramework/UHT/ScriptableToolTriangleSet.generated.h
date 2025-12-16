// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Drawing/ScriptableToolTriangleSet.h"

#ifdef SCRIPTABLETOOLSFRAMEWORK_ScriptableToolTriangleSet_generated_h
#error "ScriptableToolTriangleSet.generated.h already included, missing '#pragma once' in ScriptableToolTriangleSet.h"
#endif
#define SCRIPTABLETOOLSFRAMEWORK_ScriptableToolTriangleSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UScriptableToolQuad;
class UScriptableToolTriangle;
struct FColor;

// ********** Begin Class UScriptableToolTriangleSet ***********************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolTriangleSet_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAllTrianglesMaterial); \
	DECLARE_FUNCTION(execSetAllTrianglesColor); \
	DECLARE_FUNCTION(execRemoveAllFaces); \
	DECLARE_FUNCTION(execRemoveQuad); \
	DECLARE_FUNCTION(execRemoveTriangle); \
	DECLARE_FUNCTION(execAddQuad); \
	DECLARE_FUNCTION(execAddTriangle);


struct Z_Construct_UClass_UScriptableToolTriangleSet_Statics;
SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableToolTriangleSet_NoRegister();

#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolTriangleSet_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptableToolTriangleSet(); \
	friend struct ::Z_Construct_UClass_UScriptableToolTriangleSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UScriptableToolTriangleSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UScriptableToolTriangleSet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), Z_Construct_UClass_UScriptableToolTriangleSet_NoRegister) \
	DECLARE_SERIALIZER(UScriptableToolTriangleSet)


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolTriangleSet_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTABLETOOLSFRAMEWORK_API UScriptableToolTriangleSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScriptableToolTriangleSet(UScriptableToolTriangleSet&&) = delete; \
	UScriptableToolTriangleSet(const UScriptableToolTriangleSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLETOOLSFRAMEWORK_API, UScriptableToolTriangleSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableToolTriangleSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptableToolTriangleSet) \
	SCRIPTABLETOOLSFRAMEWORK_API virtual ~UScriptableToolTriangleSet();


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolTriangleSet_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolTriangleSet_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolTriangleSet_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolTriangleSet_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolTriangleSet_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScriptableToolTriangleSet;

// ********** End Class UScriptableToolTriangleSet *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolTriangleSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
