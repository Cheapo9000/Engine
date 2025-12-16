// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreeEditorPropertyBindings.h"

#ifdef STATETREEEDITORMODULE_StateTreeEditorPropertyBindings_generated_h
#error "StateTreeEditorPropertyBindings.generated.h already included, missing '#pragma once' in StateTreeEditorPropertyBindings.h"
#endif
#define STATETREEEDITORMODULE_StateTreeEditorPropertyBindings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FStateTreeEditorPropertyBindings **********************************
struct Z_Construct_UScriptStruct_FStateTreeEditorPropertyBindings_Statics;
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorPropertyBindings_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStateTreeEditorPropertyBindings_Statics; \
	STATETREEEDITORMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FPropertyBindingBindingCollection Super;


struct FStateTreeEditorPropertyBindings;
// ********** End ScriptStruct FStateTreeEditorPropertyBindings ************************************

// ********** Begin Interface UStateTreeEditorPropertyBindingsOwner ********************************
struct Z_Construct_UClass_UStateTreeEditorPropertyBindingsOwner_Statics;
STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeEditorPropertyBindingsOwner_NoRegister();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorPropertyBindings_h_175_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATETREEEDITORMODULE_API UStateTreeEditorPropertyBindingsOwner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeEditorPropertyBindingsOwner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATETREEEDITORMODULE_API, UStateTreeEditorPropertyBindingsOwner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeEditorPropertyBindingsOwner); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTreeEditorPropertyBindingsOwner(UStateTreeEditorPropertyBindingsOwner&&) = delete; \
	UStateTreeEditorPropertyBindingsOwner(const UStateTreeEditorPropertyBindingsOwner&) = delete; \
	virtual ~UStateTreeEditorPropertyBindingsOwner() = default;


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorPropertyBindings_h_175_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUStateTreeEditorPropertyBindingsOwner(); \
	friend struct ::Z_Construct_UClass_UStateTreeEditorPropertyBindingsOwner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATETREEEDITORMODULE_API UClass* ::Z_Construct_UClass_UStateTreeEditorPropertyBindingsOwner_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTreeEditorPropertyBindingsOwner, UPropertyBindingBindingCollectionOwner, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/StateTreeEditorModule"), Z_Construct_UClass_UStateTreeEditorPropertyBindingsOwner_NoRegister) \
	DECLARE_SERIALIZER(UStateTreeEditorPropertyBindingsOwner)


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorPropertyBindings_h_175_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorPropertyBindings_h_175_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorPropertyBindings_h_175_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorPropertyBindings_h_175_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IStateTreeEditorPropertyBindingsOwner() {} \
public: \
	typedef UStateTreeEditorPropertyBindingsOwner UClassType; \
	typedef IStateTreeEditorPropertyBindingsOwner ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorPropertyBindings_h_172_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorPropertyBindings_h_193_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorPropertyBindings_h_175_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTreeEditorPropertyBindingsOwner;

// ********** End Interface UStateTreeEditorPropertyBindingsOwner **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorPropertyBindings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
