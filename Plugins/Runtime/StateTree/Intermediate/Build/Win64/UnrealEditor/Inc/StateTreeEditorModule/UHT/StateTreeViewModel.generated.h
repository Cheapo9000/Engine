// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreeViewModel.h"

#ifdef STATETREEEDITORMODULE_StateTreeViewModel_generated_h
#error "StateTreeViewModel.generated.h already included, missing '#pragma once' in StateTreeViewModel.h"
#endif
#define STATETREEEDITORMODULE_StateTreeViewModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStateTreeClipboardBindings **********************************************
struct Z_Construct_UClass_UStateTreeClipboardBindings_Statics;
STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeClipboardBindings_NoRegister();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeViewModel_h_245_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeClipboardBindings(); \
	friend struct ::Z_Construct_UClass_UStateTreeClipboardBindings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATETREEEDITORMODULE_API UClass* ::Z_Construct_UClass_UStateTreeClipboardBindings_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTreeClipboardBindings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StateTreeEditorModule"), Z_Construct_UClass_UStateTreeClipboardBindings_NoRegister) \
	DECLARE_SERIALIZER(UStateTreeClipboardBindings)


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeViewModel_h_245_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATETREEEDITORMODULE_API UStateTreeClipboardBindings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTreeClipboardBindings(UStateTreeClipboardBindings&&) = delete; \
	UStateTreeClipboardBindings(const UStateTreeClipboardBindings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATETREEEDITORMODULE_API, UStateTreeClipboardBindings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeClipboardBindings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeClipboardBindings) \
	STATETREEEDITORMODULE_API virtual ~UStateTreeClipboardBindings();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeViewModel_h_242_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeViewModel_h_245_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeViewModel_h_245_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeViewModel_h_245_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTreeClipboardBindings;

// ********** End Class UStateTreeClipboardBindings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeViewModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
