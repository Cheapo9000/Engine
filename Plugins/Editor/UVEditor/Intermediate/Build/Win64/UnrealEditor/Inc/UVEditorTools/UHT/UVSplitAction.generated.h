// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actions/UVSplitAction.h"

#ifdef UVEDITORTOOLS_UVSplitAction_generated_h
#error "UVSplitAction.generated.h already included, missing '#pragma once' in UVSplitAction.h"
#endif
#define UVEDITORTOOLS_UVSplitAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUVSplitAction ***********************************************************
struct Z_Construct_UClass_UUVSplitAction_Statics;
UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVSplitAction_NoRegister();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVSplitAction_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVSplitAction(); \
	friend struct ::Z_Construct_UClass_UUVSplitAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UVEDITORTOOLS_API UClass* ::Z_Construct_UClass_UUVSplitAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVSplitAction, UUVToolAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UVEditorTools"), Z_Construct_UClass_UUVSplitAction_NoRegister) \
	DECLARE_SERIALIZER(UUVSplitAction)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVSplitAction_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UVEDITORTOOLS_API UUVSplitAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVSplitAction(UUVSplitAction&&) = delete; \
	UUVSplitAction(const UUVSplitAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UVEDITORTOOLS_API, UUVSplitAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVSplitAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVSplitAction) \
	UVEDITORTOOLS_API virtual ~UUVSplitAction();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVSplitAction_h_12_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVSplitAction_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVSplitAction_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVSplitAction_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVSplitAction;

// ********** End Class UUVSplitAction *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVSplitAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
