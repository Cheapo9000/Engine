// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/PCGEditorGraphNodeOutput.h"

#ifdef PCGEDITOR_PCGEditorGraphNodeOutput_generated_h
#error "PCGEditorGraphNodeOutput.generated.h already included, missing '#pragma once' in PCGEditorGraphNodeOutput.h"
#endif
#define PCGEDITOR_PCGEditorGraphNodeOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGEditorGraphNodeOutput ************************************************
struct Z_Construct_UClass_UPCGEditorGraphNodeOutput_Statics;
PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorGraphNodeOutput_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_Nodes_PCGEditorGraphNodeOutput_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGEditorGraphNodeOutput(); \
	friend struct ::Z_Construct_UClass_UPCGEditorGraphNodeOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEDITOR_API UClass* ::Z_Construct_UClass_UPCGEditorGraphNodeOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGEditorGraphNodeOutput, UPCGEditorGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGEditor"), Z_Construct_UClass_UPCGEditorGraphNodeOutput_NoRegister) \
	DECLARE_SERIALIZER(UPCGEditorGraphNodeOutput)


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_Nodes_PCGEditorGraphNodeOutput_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGEditorGraphNodeOutput(UPCGEditorGraphNodeOutput&&) = delete; \
	UPCGEditorGraphNodeOutput(const UPCGEditorGraphNodeOutput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGEditorGraphNodeOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGEditorGraphNodeOutput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGEditorGraphNodeOutput) \
	NO_API virtual ~UPCGEditorGraphNodeOutput();


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_Nodes_PCGEditorGraphNodeOutput_h_11_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_Nodes_PCGEditorGraphNodeOutput_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_Nodes_PCGEditorGraphNodeOutput_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_Nodes_PCGEditorGraphNodeOutput_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGEditorGraphNodeOutput;

// ********** End Class UPCGEditorGraphNodeOutput **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCGEditor_Private_Nodes_PCGEditorGraphNodeOutput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
