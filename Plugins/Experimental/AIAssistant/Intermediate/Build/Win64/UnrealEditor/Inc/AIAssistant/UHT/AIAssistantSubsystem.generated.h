// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIAssistantSubsystem.h"

#ifdef AIASSISTANT_AIAssistantSubsystem_generated_h
#error "AIAssistantSubsystem.generated.h already included, missing '#pragma once' in AIAssistantSubsystem.h"
#endif
#define AIASSISTANT_AIAssistantSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAIAssistantSubsystem ****************************************************
#define FID_Engine_Plugins_Experimental_AIAssistant_Source_AIAssistant_Private_AIAssistantSubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShowContextMenuViaJavaScript); \
	DECLARE_FUNCTION(execExecutePythonScriptViaJavaScript);


struct Z_Construct_UClass_UAIAssistantSubsystem_Statics;
AIASSISTANT_API UClass* Z_Construct_UClass_UAIAssistantSubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_AIAssistant_Source_AIAssistant_Private_AIAssistantSubsystem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIAssistantSubsystem(); \
	friend struct ::Z_Construct_UClass_UAIAssistantSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIASSISTANT_API UClass* ::Z_Construct_UClass_UAIAssistantSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAIAssistantSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIAssistant"), Z_Construct_UClass_UAIAssistantSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAIAssistantSubsystem)


#define FID_Engine_Plugins_Experimental_AIAssistant_Source_AIAssistant_Private_AIAssistantSubsystem_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIAssistantSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAIAssistantSubsystem(UAIAssistantSubsystem&&) = delete; \
	UAIAssistantSubsystem(const UAIAssistantSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIAssistantSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIAssistantSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAIAssistantSubsystem) \
	NO_API virtual ~UAIAssistantSubsystem();


#define FID_Engine_Plugins_Experimental_AIAssistant_Source_AIAssistant_Private_AIAssistantSubsystem_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_AIAssistant_Source_AIAssistant_Private_AIAssistantSubsystem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AIAssistant_Source_AIAssistant_Private_AIAssistantSubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AIAssistant_Source_AIAssistant_Private_AIAssistantSubsystem_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AIAssistant_Source_AIAssistant_Private_AIAssistantSubsystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAIAssistantSubsystem;

// ********** End Class UAIAssistantSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AIAssistant_Source_AIAssistant_Private_AIAssistantSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
