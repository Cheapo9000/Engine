// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PyWrapperDelegate.h"

#ifdef PYTHONSCRIPTPLUGIN_PyWrapperDelegate_generated_h
#error "PyWrapperDelegate.generated.h already included, missing '#pragma once' in PyWrapperDelegate.h"
#endif
#define PYTHONSCRIPTPLUGIN_PyWrapperDelegate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPythonCallableForDelegate ***********************************************
struct Z_Construct_UClass_UPythonCallableForDelegate_Statics;
PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonCallableForDelegate_NoRegister();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperDelegate_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPythonCallableForDelegate(); \
	friend struct ::Z_Construct_UClass_UPythonCallableForDelegate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PYTHONSCRIPTPLUGIN_API UClass* ::Z_Construct_UClass_UPythonCallableForDelegate_NoRegister(); \
public: \
	DECLARE_CLASS2(UPythonCallableForDelegate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), Z_Construct_UClass_UPythonCallableForDelegate_NoRegister) \
	DECLARE_SERIALIZER(UPythonCallableForDelegate) \
	virtual UObject* _getUObject() const override { return const_cast<UPythonCallableForDelegate*>(this); }


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperDelegate_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPythonCallableForDelegate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPythonCallableForDelegate(UPythonCallableForDelegate&&) = delete; \
	UPythonCallableForDelegate(const UPythonCallableForDelegate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPythonCallableForDelegate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPythonCallableForDelegate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPythonCallableForDelegate) \
	NO_API virtual ~UPythonCallableForDelegate();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperDelegate_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperDelegate_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperDelegate_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperDelegate_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPythonCallableForDelegate;

// ********** End Class UPythonCallableForDelegate *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperDelegate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
