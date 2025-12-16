// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actions/UVSeamSewAction.h"

#ifdef UVEDITORTOOLS_UVSeamSewAction_generated_h
#error "UVSeamSewAction.generated.h already included, missing '#pragma once' in UVSeamSewAction.h"
#endif
#define UVEDITORTOOLS_UVSeamSewAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUVSeamSewAction *********************************************************
struct Z_Construct_UClass_UUVSeamSewAction_Statics;
UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVSeamSewAction_NoRegister();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVSeamSewAction_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVSeamSewAction(); \
	friend struct ::Z_Construct_UClass_UUVSeamSewAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UVEDITORTOOLS_API UClass* ::Z_Construct_UClass_UUVSeamSewAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVSeamSewAction, UUVToolAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UVEditorTools"), Z_Construct_UClass_UUVSeamSewAction_NoRegister) \
	DECLARE_SERIALIZER(UUVSeamSewAction)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVSeamSewAction_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UVEDITORTOOLS_API UUVSeamSewAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVSeamSewAction(UUVSeamSewAction&&) = delete; \
	UUVSeamSewAction(const UUVSeamSewAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UVEDITORTOOLS_API, UUVSeamSewAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVSeamSewAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVSeamSewAction) \
	UVEDITORTOOLS_API virtual ~UUVSeamSewAction();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVSeamSewAction_h_22_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVSeamSewAction_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVSeamSewAction_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVSeamSewAction_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVSeamSewAction;

// ********** End Class UUVSeamSewAction ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVSeamSewAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
