// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PythonScriptLibrary.h"

#ifdef PYTHONSCRIPTPLUGIN_PythonScriptLibrary_generated_h
#error "PythonScriptLibrary.generated.h already included, missing '#pragma once' in PythonScriptLibrary.h"
#endif
#define PYTHONSCRIPTPLUGIN_PythonScriptLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPythonCommandExecutionMode : uint8;
enum class EPythonFileExecutionScope : uint8;
struct FPythonLogOutputEntry;

// ********** Begin Class UPythonScriptLibrary *****************************************************
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExecutePythonCommandEx); \
	DECLARE_FUNCTION(execExecutePythonCommand); \
	DECLARE_FUNCTION(execForceEnablePythonAtRuntime); \
	DECLARE_FUNCTION(execIsPythonInitialized); \
	DECLARE_FUNCTION(execIsPythonConfigured); \
	DECLARE_FUNCTION(execIsPythonAvailable);


struct Z_Construct_UClass_UPythonScriptLibrary_Statics;
	struct Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics; \
PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonScriptLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPythonScriptLibrary(); \
	friend struct ::Z_Construct_UClass_UPythonScriptLibrary_Statics; \
	friend struct ::Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PYTHONSCRIPTPLUGIN_API UClass* ::Z_Construct_UClass_UPythonScriptLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UPythonScriptLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), Z_Construct_UClass_UPythonScriptLibrary_NoRegister) \
	DECLARE_SERIALIZER(UPythonScriptLibrary)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPythonScriptLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPythonScriptLibrary(UPythonScriptLibrary&&) = delete; \
	UPythonScriptLibrary(const UPythonScriptLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPythonScriptLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPythonScriptLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPythonScriptLibrary) \
	NO_API virtual ~UPythonScriptLibrary();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPythonScriptLibrary;

// ********** End Class UPythonScriptLibrary *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
