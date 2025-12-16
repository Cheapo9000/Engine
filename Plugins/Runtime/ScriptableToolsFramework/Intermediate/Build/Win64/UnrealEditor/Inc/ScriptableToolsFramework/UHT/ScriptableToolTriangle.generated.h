// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Drawing/ScriptableToolTriangle.h"

#ifdef SCRIPTABLETOOLSFRAMEWORK_ScriptableToolTriangle_generated_h
#error "ScriptableToolTriangle.generated.h already included, missing '#pragma once' in ScriptableToolTriangle.h"
#endif
#define SCRIPTABLETOOLSFRAMEWORK_ScriptableToolTriangle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
struct FColor;

// ********** Begin Class UScriptableToolTriangle **************************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolTriangle_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTriangleColors); \
	DECLARE_FUNCTION(execSetTriangleNormals); \
	DECLARE_FUNCTION(execSetTriangleUVs); \
	DECLARE_FUNCTION(execSetTrianglePoints); \
	DECLARE_FUNCTION(execSetTriangleMaterial);


struct Z_Construct_UClass_UScriptableToolTriangle_Statics;
SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableToolTriangle_NoRegister();

#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolTriangle_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptableToolTriangle(); \
	friend struct ::Z_Construct_UClass_UScriptableToolTriangle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UScriptableToolTriangle_NoRegister(); \
public: \
	DECLARE_CLASS2(UScriptableToolTriangle, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), Z_Construct_UClass_UScriptableToolTriangle_NoRegister) \
	DECLARE_SERIALIZER(UScriptableToolTriangle)


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolTriangle_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScriptableToolTriangle(UScriptableToolTriangle&&) = delete; \
	UScriptableToolTriangle(const UScriptableToolTriangle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLETOOLSFRAMEWORK_API, UScriptableToolTriangle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableToolTriangle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UScriptableToolTriangle) \
	SCRIPTABLETOOLSFRAMEWORK_API virtual ~UScriptableToolTriangle();


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolTriangle_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolTriangle_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolTriangle_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolTriangle_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolTriangle_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScriptableToolTriangle;

// ********** End Class UScriptableToolTriangle ****************************************************

// ********** Begin Class UScriptableToolQuad ******************************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolTriangle_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetQuadColors); \
	DECLARE_FUNCTION(execSetQuadNormals); \
	DECLARE_FUNCTION(execSetQuadUVs); \
	DECLARE_FUNCTION(execSetQuadPoints); \
	DECLARE_FUNCTION(execSetQuadMaterial);


struct Z_Construct_UClass_UScriptableToolQuad_Statics;
SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableToolQuad_NoRegister();

#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolTriangle_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptableToolQuad(); \
	friend struct ::Z_Construct_UClass_UScriptableToolQuad_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UScriptableToolQuad_NoRegister(); \
public: \
	DECLARE_CLASS2(UScriptableToolQuad, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), Z_Construct_UClass_UScriptableToolQuad_NoRegister) \
	DECLARE_SERIALIZER(UScriptableToolQuad)


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolTriangle_h_94_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScriptableToolQuad(UScriptableToolQuad&&) = delete; \
	UScriptableToolQuad(const UScriptableToolQuad&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLETOOLSFRAMEWORK_API, UScriptableToolQuad); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableToolQuad); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UScriptableToolQuad) \
	SCRIPTABLETOOLSFRAMEWORK_API virtual ~UScriptableToolQuad();


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolTriangle_h_91_PROLOG
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolTriangle_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolTriangle_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolTriangle_h_94_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolTriangle_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScriptableToolQuad;

// ********** End Class UScriptableToolQuad ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Drawing_ScriptableToolTriangle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
