// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_ExecutePythonScript.h"

#ifdef PYTHONSCRIPTPLUGIN_K2Node_ExecutePythonScript_generated_h
#error "K2Node_ExecutePythonScript.generated.h already included, missing '#pragma once' in K2Node_ExecutePythonScript.h"
#endif
#define PYTHONSCRIPTPLUGIN_K2Node_ExecutePythonScript_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UK2Node_ExecutePythonScript **********************************************
struct Z_Construct_UClass_UK2Node_ExecutePythonScript_Statics;
PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UK2Node_ExecutePythonScript_NoRegister();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_K2Node_ExecutePythonScript_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK2Node_ExecutePythonScript(); \
	friend struct ::Z_Construct_UClass_UK2Node_ExecutePythonScript_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PYTHONSCRIPTPLUGIN_API UClass* ::Z_Construct_UClass_UK2Node_ExecutePythonScript_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_ExecutePythonScript, UK2Node_CallFunction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), Z_Construct_UClass_UK2Node_ExecutePythonScript_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_ExecutePythonScript)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_K2Node_ExecutePythonScript_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_ExecutePythonScript(UK2Node_ExecutePythonScript&&) = delete; \
	UK2Node_ExecutePythonScript(const UK2Node_ExecutePythonScript&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK2Node_ExecutePythonScript); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_ExecutePythonScript); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK2Node_ExecutePythonScript) \
	NO_API virtual ~UK2Node_ExecutePythonScript();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_K2Node_ExecutePythonScript_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_K2Node_ExecutePythonScript_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_K2Node_ExecutePythonScript_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_K2Node_ExecutePythonScript_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_ExecutePythonScript;

// ********** End Class UK2Node_ExecutePythonScript ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_K2Node_ExecutePythonScript_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
