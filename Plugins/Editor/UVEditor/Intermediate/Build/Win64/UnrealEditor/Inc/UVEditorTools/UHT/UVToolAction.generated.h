// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actions/UVToolAction.h"

#ifdef UVEDITORTOOLS_UVToolAction_generated_h
#error "UVToolAction.generated.h already included, missing '#pragma once' in UVToolAction.h"
#endif
#define UVEDITORTOOLS_UVToolAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUVToolAction ************************************************************
struct Z_Construct_UClass_UUVToolAction_Statics;
UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolAction_NoRegister();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVToolAction_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVToolAction(); \
	friend struct ::Z_Construct_UClass_UUVToolAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UVEDITORTOOLS_API UClass* ::Z_Construct_UClass_UUVToolAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVToolAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UVEditorTools"), Z_Construct_UClass_UUVToolAction_NoRegister) \
	DECLARE_SERIALIZER(UUVToolAction)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVToolAction_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UVEDITORTOOLS_API UUVToolAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVToolAction(UUVToolAction&&) = delete; \
	UUVToolAction(const UUVToolAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UVEDITORTOOLS_API, UUVToolAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVToolAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVToolAction) \
	UVEDITORTOOLS_API virtual ~UUVToolAction();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVToolAction_h_15_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVToolAction_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVToolAction_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVToolAction_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVToolAction;

// ********** End Class UUVToolAction **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVToolAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
