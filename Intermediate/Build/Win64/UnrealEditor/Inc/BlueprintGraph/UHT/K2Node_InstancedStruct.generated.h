// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_InstancedStruct.h"

#ifdef BLUEPRINTGRAPH_K2Node_InstancedStruct_generated_h
#error "K2Node_InstancedStruct.generated.h already included, missing '#pragma once' in K2Node_InstancedStruct.h"
#endif
#define BLUEPRINTGRAPH_K2Node_InstancedStruct_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UK2Node_InstancedStruct **************************************************
struct Z_Construct_UClass_UK2Node_InstancedStruct_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_InstancedStruct_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InstancedStruct_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK2Node_InstancedStruct(); \
	friend struct ::Z_Construct_UClass_UK2Node_InstancedStruct_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UK2Node_InstancedStruct_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_InstancedStruct, UK2Node_CallFunction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UK2Node_InstancedStruct_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_InstancedStruct)


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InstancedStruct_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK2Node_InstancedStruct(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_InstancedStruct(UK2Node_InstancedStruct&&) = delete; \
	UK2Node_InstancedStruct(const UK2Node_InstancedStruct&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK2Node_InstancedStruct); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_InstancedStruct); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_InstancedStruct) \
	NO_API virtual ~UK2Node_InstancedStruct();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InstancedStruct_h_15_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InstancedStruct_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InstancedStruct_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InstancedStruct_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_InstancedStruct;

// ********** End Class UK2Node_InstancedStruct ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InstancedStruct_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
