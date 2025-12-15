// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraphSchema_K2.h"

#ifdef BLUEPRINTGRAPH_EdGraphSchema_K2_generated_h
#error "EdGraphSchema_K2.generated.h already included, missing '#pragma once' in EdGraphSchema_K2.h"
#endif
#define BLUEPRINTGRAPH_EdGraphSchema_K2_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FEdGraphSchemaAction_K2Struct *************************************
struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct_Statics;
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct_Statics; \
	BLUEPRINTGRAPH_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FEdGraphSchemaAction_K2Struct;
// ********** End ScriptStruct FEdGraphSchemaAction_K2Struct ***************************************

// ********** Begin ScriptStruct FBlueprintCallableFunctionRedirect ********************************
struct Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics;
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_321_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics; \
	BLUEPRINTGRAPH_API static class UScriptStruct* StaticStruct();


struct FBlueprintCallableFunctionRedirect;
// ********** End ScriptStruct FBlueprintCallableFunctionRedirect **********************************

// ********** Begin ScriptStruct FAllowedMutableContainerFunction **********************************
struct Z_Construct_UScriptStruct_FAllowedMutableContainerFunction_Statics;
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_342_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAllowedMutableContainerFunction_Statics; \
	BLUEPRINTGRAPH_API static class UScriptStruct* StaticStruct();


struct FAllowedMutableContainerFunction;
// ********** End ScriptStruct FAllowedMutableContainerFunction ************************************

// ********** Begin Class UEdGraphSchema_K2 ********************************************************
struct Z_Construct_UClass_UEdGraphSchema_K2_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UEdGraphSchema_K2_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_388_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraphSchema_K2(); \
	friend struct ::Z_Construct_UClass_UEdGraphSchema_K2_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UEdGraphSchema_K2_NoRegister(); \
public: \
	DECLARE_CLASS2(UEdGraphSchema_K2, UEdGraphSchema, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UEdGraphSchema_K2_NoRegister) \
	DECLARE_SERIALIZER(UEdGraphSchema_K2) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_388_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UEdGraphSchema_K2(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphSchema_K2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UEdGraphSchema_K2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphSchema_K2); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEdGraphSchema_K2(UEdGraphSchema_K2&&) = delete; \
	UEdGraphSchema_K2(const UEdGraphSchema_K2&) = delete; \
	BLUEPRINTGRAPH_API virtual ~UEdGraphSchema_K2();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_385_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_388_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_388_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_388_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEdGraphSchema_K2;

// ********** End Class UEdGraphSchema_K2 **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
