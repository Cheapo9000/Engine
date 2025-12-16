// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorMode/PCGEdMode.h"

#ifdef PCGEDITOR_PCGEdMode_generated_h
#error "PCGEdMode.generated.h already included, missing '#pragma once' in PCGEdMode.h"
#endif
#define PCGEDITOR_PCGEdMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGEditorMode ***********************************************************
struct Z_Construct_UClass_UPCGEditorMode_Statics;
PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorMode_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_PCGEdMode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGEditorMode(); \
	friend struct ::Z_Construct_UClass_UPCGEditorMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEDITOR_API UClass* ::Z_Construct_UClass_UPCGEditorMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGEditorMode, UEdMode, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PCGEditor"), Z_Construct_UClass_UPCGEditorMode_NoRegister) \
	DECLARE_SERIALIZER(UPCGEditorMode)


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_PCGEdMode_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGEditorMode(UPCGEditorMode&&) = delete; \
	UPCGEditorMode(const UPCGEditorMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGEditorMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGEditorMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGEditorMode) \
	NO_API virtual ~UPCGEditorMode();


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_PCGEdMode_h_13_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_PCGEdMode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_PCGEdMode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_PCGEdMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGEditorMode;

// ********** End Class UPCGEditorMode *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_PCGEdMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
