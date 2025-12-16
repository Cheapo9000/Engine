// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PyWrapperStruct.h"

#ifdef PYTHONSCRIPTPLUGIN_PyWrapperStruct_generated_h
#error "PyWrapperStruct.generated.h already included, missing '#pragma once' in PyWrapperStruct.h"
#endif
#define PYTHONSCRIPTPLUGIN_PyWrapperStruct_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPythonGeneratedStruct ***************************************************
struct Z_Construct_UClass_UPythonGeneratedStruct_Statics;
PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonGeneratedStruct_NoRegister();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperStruct_h_379_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPythonGeneratedStruct(); \
	friend struct ::Z_Construct_UClass_UPythonGeneratedStruct_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PYTHONSCRIPTPLUGIN_API UClass* ::Z_Construct_UClass_UPythonGeneratedStruct_NoRegister(); \
public: \
	DECLARE_CLASS2(UPythonGeneratedStruct, UScriptStruct, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), Z_Construct_UClass_UPythonGeneratedStruct_NoRegister) \
	DECLARE_SERIALIZER(UPythonGeneratedStruct) \
	virtual UObject* _getUObject() const override { return const_cast<UPythonGeneratedStruct*>(this); }


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperStruct_h_379_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPythonGeneratedStruct(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPythonGeneratedStruct(UPythonGeneratedStruct&&) = delete; \
	UPythonGeneratedStruct(const UPythonGeneratedStruct&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPythonGeneratedStruct); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPythonGeneratedStruct); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPythonGeneratedStruct) \
	NO_API virtual ~UPythonGeneratedStruct();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperStruct_h_376_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperStruct_h_379_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperStruct_h_379_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperStruct_h_379_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPythonGeneratedStruct;

// ********** End Class UPythonGeneratedStruct *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperStruct_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
