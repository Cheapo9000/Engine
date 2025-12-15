// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_Variable.h"

#ifdef BLUEPRINTGRAPH_K2Node_Variable_generated_h
#error "K2Node_Variable.generated.h already included, missing '#pragma once' in K2Node_Variable.h"
#endif
#define BLUEPRINTGRAPH_K2Node_Variable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UK2Node_Variable *********************************************************
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_54_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_Variable, BLUEPRINTGRAPH_API)


struct Z_Construct_UClass_UK2Node_Variable_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Variable_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_54_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_Variable(); \
	friend struct ::Z_Construct_UClass_UK2Node_Variable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UK2Node_Variable_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_Variable, UK2Node, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UK2Node_Variable_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_Variable) \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_54_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UK2Node_Variable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_Variable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UK2Node_Variable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_Variable); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_Variable(UK2Node_Variable&&) = delete; \
	UK2Node_Variable(const UK2Node_Variable&) = delete; \
	BLUEPRINTGRAPH_API virtual ~UK2Node_Variable();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_51_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_54_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_Variable;

// ********** End Class UK2Node_Variable ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h

// ********** Begin Enum ESelfContextInfo **********************************************************
#define FOREACH_ENUM_ESELFCONTEXTINFO(op) \
	op(ESelfContextInfo::Unspecified) \
	op(ESelfContextInfo::NotSelfContext) 

namespace ESelfContextInfo { enum Type : int; }
template<> BLUEPRINTGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<ESelfContextInfo::Type>();
// ********** End Enum ESelfContextInfo ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
