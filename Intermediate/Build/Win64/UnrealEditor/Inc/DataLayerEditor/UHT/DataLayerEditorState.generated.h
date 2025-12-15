// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLayer/DataLayerEditorState.h"

#ifdef DATALAYEREDITOR_DataLayerEditorState_generated_h
#error "DataLayerEditorState.generated.h already included, missing '#pragma once' in DataLayerEditorState.h"
#endif
#define DATALAYEREDITOR_DataLayerEditorState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataLayerEditorState ****************************************************
struct Z_Construct_UClass_UDataLayerEditorState_Statics;
DATALAYEREDITOR_API UClass* Z_Construct_UClass_UDataLayerEditorState_NoRegister();

#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorState_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUDataLayerEditorState(); \
	friend struct ::Z_Construct_UClass_UDataLayerEditorState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALAYEREDITOR_API UClass* ::Z_Construct_UClass_UDataLayerEditorState_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLayerEditorState, UWorldDependantEditorState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLayerEditor"), Z_Construct_UClass_UDataLayerEditorState_NoRegister) \
	DECLARE_SERIALIZER(UDataLayerEditorState)


#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorState_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataLayerEditorState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLayerEditorState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataLayerEditorState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLayerEditorState); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLayerEditorState(UDataLayerEditorState&&) = delete; \
	UDataLayerEditorState(const UDataLayerEditorState&) = delete; \
	NO_API virtual ~UDataLayerEditorState();


#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorState_h_10_PROLOG
#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorState_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorState_h_13_INCLASS \
	FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorState_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLayerEditorState;

// ********** End Class UDataLayerEditorState ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
