// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PythonScriptCommandlet.h"

#ifdef PYTHONSCRIPTPLUGIN_PythonScriptCommandlet_generated_h
#error "PythonScriptCommandlet.generated.h already included, missing '#pragma once' in PythonScriptCommandlet.h"
#endif
#define PYTHONSCRIPTPLUGIN_PythonScriptCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPythonScriptCommandlet **************************************************
struct Z_Construct_UClass_UPythonScriptCommandlet_Statics;
PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonScriptCommandlet_NoRegister();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptCommandlet_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPythonScriptCommandlet(); \
	friend struct ::Z_Construct_UClass_UPythonScriptCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PYTHONSCRIPTPLUGIN_API UClass* ::Z_Construct_UClass_UPythonScriptCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UPythonScriptCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), Z_Construct_UClass_UPythonScriptCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UPythonScriptCommandlet)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptCommandlet_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPythonScriptCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPythonScriptCommandlet(UPythonScriptCommandlet&&) = delete; \
	UPythonScriptCommandlet(const UPythonScriptCommandlet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPythonScriptCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPythonScriptCommandlet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPythonScriptCommandlet) \
	NO_API virtual ~UPythonScriptCommandlet();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptCommandlet_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptCommandlet_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptCommandlet_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptCommandlet_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPythonScriptCommandlet;

// ********** End Class UPythonScriptCommandlet ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
