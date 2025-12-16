// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PyWrapperEnum.h"

#ifdef PYTHONSCRIPTPLUGIN_PyWrapperEnum_generated_h
#error "PyWrapperEnum.generated.h already included, missing '#pragma once' in PyWrapperEnum.h"
#endif
#define PYTHONSCRIPTPLUGIN_PyWrapperEnum_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPythonGeneratedEnum *****************************************************
struct Z_Construct_UClass_UPythonGeneratedEnum_Statics;
PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonGeneratedEnum_NoRegister();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperEnum_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPythonGeneratedEnum(); \
	friend struct ::Z_Construct_UClass_UPythonGeneratedEnum_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PYTHONSCRIPTPLUGIN_API UClass* ::Z_Construct_UClass_UPythonGeneratedEnum_NoRegister(); \
public: \
	DECLARE_CLASS2(UPythonGeneratedEnum, UEnum, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), Z_Construct_UClass_UPythonGeneratedEnum_NoRegister) \
	DECLARE_SERIALIZER(UPythonGeneratedEnum) \
	virtual UObject* _getUObject() const override { return const_cast<UPythonGeneratedEnum*>(this); }


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperEnum_h_123_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPythonGeneratedEnum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPythonGeneratedEnum(UPythonGeneratedEnum&&) = delete; \
	UPythonGeneratedEnum(const UPythonGeneratedEnum&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPythonGeneratedEnum); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPythonGeneratedEnum); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPythonGeneratedEnum) \
	NO_API virtual ~UPythonGeneratedEnum();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperEnum_h_120_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperEnum_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperEnum_h_123_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperEnum_h_123_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPythonGeneratedEnum;

// ********** End Class UPythonGeneratedEnum *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperEnum_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
