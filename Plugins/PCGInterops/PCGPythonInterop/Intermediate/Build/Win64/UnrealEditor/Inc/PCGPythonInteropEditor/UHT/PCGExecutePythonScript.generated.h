// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGExecutePythonScript.h"

#ifdef PCGPYTHONINTEROPEDITOR_PCGExecutePythonScript_generated_h
#error "PCGExecutePythonScript.generated.h already included, missing '#pragma once' in PCGExecutePythonScript.h"
#endif
#define PCGPYTHONINTEROPEDITOR_PCGExecutePythonScript_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExecutePythonScriptSettings ******************************************
struct Z_Construct_UClass_UPCGExecutePythonScriptSettings_Statics;
PCGPYTHONINTEROPEDITOR_API UClass* Z_Construct_UClass_UPCGExecutePythonScriptSettings_NoRegister();

#define FID_Engine_Plugins_PCGInterops_PCGPythonInterop_Source_PCGPythonInteropEditor_Public_Elements_PCGExecutePythonScript_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExecutePythonScriptSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExecutePythonScriptSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGPYTHONINTEROPEDITOR_API UClass* ::Z_Construct_UClass_UPCGExecutePythonScriptSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExecutePythonScriptSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGPythonInteropEditor"), Z_Construct_UClass_UPCGExecutePythonScriptSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExecutePythonScriptSettings) \
	virtual UObject* _getUObject() const override { return const_cast<UPCGExecutePythonScriptSettings*>(this); }


#define FID_Engine_Plugins_PCGInterops_PCGPythonInterop_Source_PCGPythonInteropEditor_Public_Elements_PCGExecutePythonScript_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGPYTHONINTEROPEDITOR_API UPCGExecutePythonScriptSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExecutePythonScriptSettings(UPCGExecutePythonScriptSettings&&) = delete; \
	UPCGExecutePythonScriptSettings(const UPCGExecutePythonScriptSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGPYTHONINTEROPEDITOR_API, UPCGExecutePythonScriptSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExecutePythonScriptSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExecutePythonScriptSettings) \
	PCGPYTHONINTEROPEDITOR_API virtual ~UPCGExecutePythonScriptSettings();


#define FID_Engine_Plugins_PCGInterops_PCGPythonInterop_Source_PCGPythonInteropEditor_Public_Elements_PCGExecutePythonScript_h_26_PROLOG
#define FID_Engine_Plugins_PCGInterops_PCGPythonInterop_Source_PCGPythonInteropEditor_Public_Elements_PCGExecutePythonScript_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCGInterops_PCGPythonInterop_Source_PCGPythonInteropEditor_Public_Elements_PCGExecutePythonScript_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCGInterops_PCGPythonInterop_Source_PCGPythonInteropEditor_Public_Elements_PCGExecutePythonScript_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExecutePythonScriptSettings;

// ********** End Class UPCGExecutePythonScriptSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCGInterops_PCGPythonInterop_Source_PCGPythonInteropEditor_Public_Elements_PCGExecutePythonScript_h

// ********** Begin Enum EPCGPythonScriptInputMethod ***********************************************
#define FOREACH_ENUM_EPCGPYTHONSCRIPTINPUTMETHOD(op) \
	op(EPCGPythonScriptInputMethod::Input) \
	op(EPCGPythonScriptInputMethod::File) 

enum class EPCGPythonScriptInputMethod;
template<> struct TIsUEnumClass<EPCGPythonScriptInputMethod> { enum { Value = true }; };
template<> PCGPYTHONINTEROPEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGPythonScriptInputMethod>();
// ********** End Enum EPCGPythonScriptInputMethod *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
