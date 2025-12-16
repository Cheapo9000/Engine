// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolTargets/UVEditorToolMeshInput.h"

#ifdef UVEDITORTOOLS_UVEditorToolMeshInput_generated_h
#error "UVEditorToolMeshInput.generated.h already included, missing '#pragma once' in UVEditorToolMeshInput.h"
#endif
#define UVEDITORTOOLS_UVEditorToolMeshInput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUVEditorToolMeshInput ***************************************************
struct Z_Construct_UClass_UUVEditorToolMeshInput_Statics;
UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorToolMeshInput_NoRegister();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_ToolTargets_UVEditorToolMeshInput_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVEditorToolMeshInput(); \
	friend struct ::Z_Construct_UClass_UUVEditorToolMeshInput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UVEDITORTOOLS_API UClass* ::Z_Construct_UClass_UUVEditorToolMeshInput_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVEditorToolMeshInput, UToolTarget, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UVEditorTools"), Z_Construct_UClass_UUVEditorToolMeshInput_NoRegister) \
	DECLARE_SERIALIZER(UUVEditorToolMeshInput)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_ToolTargets_UVEditorToolMeshInput_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UVEDITORTOOLS_API UUVEditorToolMeshInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVEditorToolMeshInput(UUVEditorToolMeshInput&&) = delete; \
	UUVEditorToolMeshInput(const UUVEditorToolMeshInput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UVEDITORTOOLS_API, UUVEditorToolMeshInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVEditorToolMeshInput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVEditorToolMeshInput) \
	UVEDITORTOOLS_API virtual ~UUVEditorToolMeshInput();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_ToolTargets_UVEditorToolMeshInput_h_38_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_ToolTargets_UVEditorToolMeshInput_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_ToolTargets_UVEditorToolMeshInput_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_ToolTargets_UVEditorToolMeshInput_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVEditorToolMeshInput;

// ********** End Class UUVEditorToolMeshInput *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_ToolTargets_UVEditorToolMeshInput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
