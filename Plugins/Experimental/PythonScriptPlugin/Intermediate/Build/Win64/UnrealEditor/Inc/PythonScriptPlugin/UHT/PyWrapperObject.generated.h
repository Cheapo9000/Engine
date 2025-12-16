// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PyWrapperObject.h"

#ifdef PYTHONSCRIPTPLUGIN_PyWrapperObject_generated_h
#error "PyWrapperObject.generated.h already included, missing '#pragma once' in PyWrapperObject.h"
#endif
#define PYTHONSCRIPTPLUGIN_PyWrapperObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPythonGeneratedClass ****************************************************
struct Z_Construct_UClass_UPythonGeneratedClass_Statics;
PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonGeneratedClass_NoRegister();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperObject_h_191_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPythonGeneratedClass(); \
	friend struct ::Z_Construct_UClass_UPythonGeneratedClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PYTHONSCRIPTPLUGIN_API UClass* ::Z_Construct_UClass_UPythonGeneratedClass_NoRegister(); \
public: \
	DECLARE_CLASS2(UPythonGeneratedClass, UClass, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), Z_Construct_UClass_UPythonGeneratedClass_NoRegister) \
	DECLARE_SERIALIZER(UPythonGeneratedClass) \
	virtual UObject* _getUObject() const override { return const_cast<UPythonGeneratedClass*>(this); }


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperObject_h_191_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPythonGeneratedClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPythonGeneratedClass(UPythonGeneratedClass&&) = delete; \
	UPythonGeneratedClass(const UPythonGeneratedClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPythonGeneratedClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPythonGeneratedClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPythonGeneratedClass) \
	NO_API virtual ~UPythonGeneratedClass();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperObject_h_188_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperObject_h_191_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperObject_h_191_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperObject_h_191_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPythonGeneratedClass;

// ********** End Class UPythonGeneratedClass ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
