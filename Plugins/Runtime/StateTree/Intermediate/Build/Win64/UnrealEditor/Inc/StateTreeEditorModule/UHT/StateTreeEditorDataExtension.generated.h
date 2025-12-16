// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreeEditorDataExtension.h"

#ifdef STATETREEEDITORMODULE_StateTreeEditorDataExtension_generated_h
#error "StateTreeEditorDataExtension.generated.h already included, missing '#pragma once' in StateTreeEditorDataExtension.h"
#endif
#define STATETREEEDITORMODULE_StateTreeEditorDataExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStateTreeEditorDataExtension ********************************************
struct Z_Construct_UClass_UStateTreeEditorDataExtension_Statics;
STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeEditorDataExtension_NoRegister();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorDataExtension_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeEditorDataExtension(); \
	friend struct ::Z_Construct_UClass_UStateTreeEditorDataExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATETREEEDITORMODULE_API UClass* ::Z_Construct_UClass_UStateTreeEditorDataExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTreeEditorDataExtension, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/StateTreeEditorModule"), Z_Construct_UClass_UStateTreeEditorDataExtension_NoRegister) \
	DECLARE_SERIALIZER(UStateTreeEditorDataExtension) \
	DECLARE_WITHIN(UStateTreeEditorData)


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorDataExtension_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATETREEEDITORMODULE_API UStateTreeEditorDataExtension(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTreeEditorDataExtension(UStateTreeEditorDataExtension&&) = delete; \
	UStateTreeEditorDataExtension(const UStateTreeEditorDataExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATETREEEDITORMODULE_API, UStateTreeEditorDataExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeEditorDataExtension); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeEditorDataExtension) \
	STATETREEEDITORMODULE_API virtual ~UStateTreeEditorDataExtension();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorDataExtension_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorDataExtension_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorDataExtension_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorDataExtension_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTreeEditorDataExtension;

// ********** End Class UStateTreeEditorDataExtension **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorDataExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
