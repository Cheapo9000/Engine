// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_CallFunction.h"

#ifdef BLUEPRINTGRAPH_K2Node_CallFunction_generated_h
#error "K2Node_CallFunction.generated.h already included, missing '#pragma once' in K2Node_CallFunction.h"
#endif
#define BLUEPRINTGRAPH_K2Node_CallFunction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UK2Node_CallFunction *****************************************************
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CallFunction_h_50_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_CallFunction, BLUEPRINTGRAPH_API)


struct Z_Construct_UClass_UK2Node_CallFunction_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CallFunction_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CallFunction_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_CallFunction(); \
	friend struct ::Z_Construct_UClass_UK2Node_CallFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UK2Node_CallFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_CallFunction, UK2Node, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UK2Node_CallFunction_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_CallFunction) \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CallFunction_h_50_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CallFunction_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UK2Node_CallFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_CallFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UK2Node_CallFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_CallFunction); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_CallFunction(UK2Node_CallFunction&&) = delete; \
	UK2Node_CallFunction(const UK2Node_CallFunction&) = delete; \
	BLUEPRINTGRAPH_API virtual ~UK2Node_CallFunction();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CallFunction_h_47_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CallFunction_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CallFunction_h_50_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CallFunction_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_CallFunction;

// ********** End Class UK2Node_CallFunction *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CallFunction_h

// ********** Begin Enum ENodePurityOverride *******************************************************
#define FOREACH_ENUM_ENODEPURITYOVERRIDE(op) \
	op(ENodePurityOverride::Unset) \
	op(ENodePurityOverride::Pure) \
	op(ENodePurityOverride::Impure) 

enum class ENodePurityOverride : int8;
template<> struct TIsUEnumClass<ENodePurityOverride> { enum { Value = true }; };
template<> BLUEPRINTGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<ENodePurityOverride>();
// ********** End Enum ENodePurityOverride *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
