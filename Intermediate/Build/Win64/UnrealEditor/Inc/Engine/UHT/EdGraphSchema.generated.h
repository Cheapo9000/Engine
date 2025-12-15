// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraph/EdGraphSchema.h"

#ifdef ENGINE_EdGraphSchema_generated_h
#error "EdGraphSchema.generated.h already included, missing '#pragma once' in EdGraphSchema.h"
#endif
#define ENGINE_EdGraphSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FEdGraphSchemaAction **********************************************
struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_99_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FEdGraphSchemaAction;
// ********** End ScriptStruct FEdGraphSchemaAction ************************************************

// ********** Begin ScriptStruct FEdGraphSchemaAction_NewNode **************************************
struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_359_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FEdGraphSchemaAction_NewNode;
// ********** End ScriptStruct FEdGraphSchemaAction_NewNode ****************************************

// ********** Begin Class UEdGraphSchema ***********************************************************
struct Z_Construct_UClass_UEdGraphSchema_Statics;
ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_738_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraphSchema(); \
	friend struct ::Z_Construct_UClass_UEdGraphSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UEdGraphSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UEdGraphSchema, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UEdGraphSchema_NoRegister) \
	DECLARE_SERIALIZER(UEdGraphSchema)


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_738_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UEdGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UEdGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphSchema); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEdGraphSchema(UEdGraphSchema&&) = delete; \
	UEdGraphSchema(const UEdGraphSchema&) = delete; \
	ENGINE_API virtual ~UEdGraphSchema();


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_735_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_738_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_738_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_738_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEdGraphSchema;

// ********** End Class UEdGraphSchema *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h

// ********** Begin Enum EGraphType ****************************************************************
#define FOREACH_ENUM_EGRAPHTYPE(op) \
	op(GT_Function) \
	op(GT_Ubergraph) \
	op(GT_Macro) \
	op(GT_Animation) \
	op(GT_StateMachine) 

enum EGraphType : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGraphType>();
// ********** End Enum EGraphType ******************************************************************

// ********** Begin Enum ECanCreateConnectionResponse **********************************************
#define FOREACH_ENUM_ECANCREATECONNECTIONRESPONSE(op) \
	op(CONNECT_RESPONSE_MAKE) \
	op(CONNECT_RESPONSE_DISALLOW) \
	op(CONNECT_RESPONSE_BREAK_OTHERS_A) \
	op(CONNECT_RESPONSE_BREAK_OTHERS_B) \
	op(CONNECT_RESPONSE_BREAK_OTHERS_AB) \
	op(CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE) \
	op(CONNECT_RESPONSE_MAKE_WITH_PROMOTION) 

enum ECanCreateConnectionResponse : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECanCreateConnectionResponse>();
// ********** End Enum ECanCreateConnectionResponse ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
