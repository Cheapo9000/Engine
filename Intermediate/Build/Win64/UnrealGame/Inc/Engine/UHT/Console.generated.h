// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Console.h"

#ifdef ENGINE_Console_generated_h
#error "Console.generated.h already included, missing '#pragma once' in Console.h"
#endif
#define ENGINE_Console_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAutoCompleteNode *************************************************
struct Z_Construct_UScriptStruct_FAutoCompleteNode_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAutoCompleteNode_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAutoCompleteNode;
// ********** End ScriptStruct FAutoCompleteNode ***************************************************

// ********** Begin Class UConsole *****************************************************************
struct Z_Construct_UClass_UConsole_Statics;
ENGINE_API UClass* Z_Construct_UClass_UConsole_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_70_INCLASS \
private: \
	static void StaticRegisterNativesUConsole(); \
	friend struct ::Z_Construct_UClass_UConsole_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UConsole_NoRegister(); \
public: \
	DECLARE_CLASS2(UConsole, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UConsole_NoRegister) \
	DECLARE_SERIALIZER(UConsole) \
	DECLARE_WITHIN(UGameViewportClient) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UConsole(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConsole) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UConsole); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsole); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConsole(UConsole&&) = delete; \
	UConsole(const UConsole&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_65_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_70_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConsole;

// ********** End Class UConsole *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
