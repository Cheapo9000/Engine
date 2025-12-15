// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_EditablePinBase.h"

#ifdef BLUEPRINTGRAPH_K2Node_EditablePinBase_generated_h
#error "K2Node_EditablePinBase.generated.h already included, missing '#pragma once' in K2Node_EditablePinBase.h"
#endif
#define BLUEPRINTGRAPH_K2Node_EditablePinBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FUserPinInfo ******************************************************
struct Z_Construct_UScriptStruct_FUserPinInfo_Statics;
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EditablePinBase_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUserPinInfo_Statics; \
	BLUEPRINTGRAPH_API static class UScriptStruct* StaticStruct();


struct FUserPinInfo;
// ********** End ScriptStruct FUserPinInfo ********************************************************

// ********** Begin ScriptStruct FKismetUserDeclaredFunctionMetadata *******************************
struct Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics;
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EditablePinBase_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics; \
	BLUEPRINTGRAPH_API static class UScriptStruct* StaticStruct();


struct FKismetUserDeclaredFunctionMetadata;
// ********** End ScriptStruct FKismetUserDeclaredFunctionMetadata *********************************

// ********** Begin Class UK2Node_EditablePinBase **************************************************
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EditablePinBase_h_135_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_EditablePinBase, BLUEPRINTGRAPH_API)


struct Z_Construct_UClass_UK2Node_EditablePinBase_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EditablePinBase_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EditablePinBase_h_135_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_EditablePinBase(); \
	friend struct ::Z_Construct_UClass_UK2Node_EditablePinBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UK2Node_EditablePinBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_EditablePinBase, UK2Node, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UK2Node_EditablePinBase_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_EditablePinBase) \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EditablePinBase_h_135_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EditablePinBase_h_135_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UK2Node_EditablePinBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_EditablePinBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UK2Node_EditablePinBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_EditablePinBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_EditablePinBase(UK2Node_EditablePinBase&&) = delete; \
	UK2Node_EditablePinBase(const UK2Node_EditablePinBase&) = delete; \
	BLUEPRINTGRAPH_API virtual ~UK2Node_EditablePinBase();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EditablePinBase_h_132_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EditablePinBase_h_135_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EditablePinBase_h_135_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EditablePinBase_h_135_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_EditablePinBase;

// ********** End Class UK2Node_EditablePinBase ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EditablePinBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
