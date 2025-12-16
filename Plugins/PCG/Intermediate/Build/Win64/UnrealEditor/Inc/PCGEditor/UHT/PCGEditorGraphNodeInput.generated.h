// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/PCGEditorGraphNodeInput.h"

#ifdef PCGEDITOR_PCGEditorGraphNodeInput_generated_h
#error "PCGEditorGraphNodeInput.generated.h already included, missing '#pragma once' in PCGEditorGraphNodeInput.h"
#endif
#define PCGEDITOR_PCGEditorGraphNodeInput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGEditorGraphNodeInput *************************************************
struct Z_Construct_UClass_UPCGEditorGraphNodeInput_Statics;
PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorGraphNodeInput_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_Nodes_PCGEditorGraphNodeInput_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGEditorGraphNodeInput(); \
	friend struct ::Z_Construct_UClass_UPCGEditorGraphNodeInput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEDITOR_API UClass* ::Z_Construct_UClass_UPCGEditorGraphNodeInput_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGEditorGraphNodeInput, UPCGEditorGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGEditor"), Z_Construct_UClass_UPCGEditorGraphNodeInput_NoRegister) \
	DECLARE_SERIALIZER(UPCGEditorGraphNodeInput)


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_Nodes_PCGEditorGraphNodeInput_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGEditorGraphNodeInput(UPCGEditorGraphNodeInput&&) = delete; \
	UPCGEditorGraphNodeInput(const UPCGEditorGraphNodeInput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGEditorGraphNodeInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGEditorGraphNodeInput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGEditorGraphNodeInput) \
	NO_API virtual ~UPCGEditorGraphNodeInput();


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_Nodes_PCGEditorGraphNodeInput_h_11_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_Nodes_PCGEditorGraphNodeInput_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_Nodes_PCGEditorGraphNodeInput_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_Nodes_PCGEditorGraphNodeInput_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGEditorGraphNodeInput;

// ********** End Class UPCGEditorGraphNodeInput ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCGEditor_Private_Nodes_PCGEditorGraphNodeInput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
