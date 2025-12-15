// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/ComponentDelegateBinding.h"

#ifdef ENGINE_ComponentDelegateBinding_generated_h
#error "ComponentDelegateBinding.generated.h already included, missing '#pragma once' in ComponentDelegateBinding.h"
#endif
#define ENGINE_ComponentDelegateBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBlueprintComponentDelegateBinding ********************************
struct Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBlueprintComponentDelegateBinding;
// ********** End ScriptStruct FBlueprintComponentDelegateBinding **********************************

// ********** Begin Class UComponentDelegateBinding ************************************************
struct Z_Construct_UClass_UComponentDelegateBinding_Statics;
ENGINE_API UClass* Z_Construct_UClass_UComponentDelegateBinding_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUComponentDelegateBinding(); \
	friend struct ::Z_Construct_UClass_UComponentDelegateBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UComponentDelegateBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UComponentDelegateBinding, UDynamicBlueprintBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UComponentDelegateBinding_NoRegister) \
	DECLARE_SERIALIZER(UComponentDelegateBinding)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UComponentDelegateBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComponentDelegateBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UComponentDelegateBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComponentDelegateBinding); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComponentDelegateBinding(UComponentDelegateBinding&&) = delete; \
	UComponentDelegateBinding(const UComponentDelegateBinding&) = delete; \
	ENGINE_API virtual ~UComponentDelegateBinding();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_37_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComponentDelegateBinding;

// ********** End Class UComponentDelegateBinding **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
