// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actions/UVMakeIslandAction.h"

#ifdef UVEDITORTOOLS_UVMakeIslandAction_generated_h
#error "UVMakeIslandAction.generated.h already included, missing '#pragma once' in UVMakeIslandAction.h"
#endif
#define UVEDITORTOOLS_UVMakeIslandAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUVMakeIslandAction ******************************************************
struct Z_Construct_UClass_UUVMakeIslandAction_Statics;
UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVMakeIslandAction_NoRegister();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVMakeIslandAction_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVMakeIslandAction(); \
	friend struct ::Z_Construct_UClass_UUVMakeIslandAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UVEDITORTOOLS_API UClass* ::Z_Construct_UClass_UUVMakeIslandAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVMakeIslandAction, UUVToolAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UVEditorTools"), Z_Construct_UClass_UUVMakeIslandAction_NoRegister) \
	DECLARE_SERIALIZER(UUVMakeIslandAction)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVMakeIslandAction_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UVEDITORTOOLS_API UUVMakeIslandAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVMakeIslandAction(UUVMakeIslandAction&&) = delete; \
	UUVMakeIslandAction(const UUVMakeIslandAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UVEDITORTOOLS_API, UUVMakeIslandAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVMakeIslandAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVMakeIslandAction) \
	UVEDITORTOOLS_API virtual ~UUVMakeIslandAction();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVMakeIslandAction_h_20_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVMakeIslandAction_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVMakeIslandAction_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVMakeIslandAction_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVMakeIslandAction;

// ********** End Class UUVMakeIslandAction ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_Actions_UVMakeIslandAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
