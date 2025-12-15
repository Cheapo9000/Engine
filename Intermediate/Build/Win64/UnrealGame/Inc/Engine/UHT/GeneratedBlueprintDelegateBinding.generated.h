// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/GeneratedBlueprintDelegateBinding.h"

#ifdef ENGINE_GeneratedBlueprintDelegateBinding_generated_h
#error "GeneratedBlueprintDelegateBinding.generated.h already included, missing '#pragma once' in GeneratedBlueprintDelegateBinding.h"
#endif
#define ENGINE_GeneratedBlueprintDelegateBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGeneratedBlueprintDelegateBinding ********************************
struct Z_Construct_UScriptStruct_FGeneratedBlueprintDelegateBinding_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedBlueprintDelegateBinding_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeneratedBlueprintDelegateBinding_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FGeneratedBlueprintDelegateBinding;
// ********** End ScriptStruct FGeneratedBlueprintDelegateBinding **********************************

// ********** Begin Class UGeneratedBlueprintBinding ***********************************************
struct Z_Construct_UClass_UGeneratedBlueprintBinding_Statics;
ENGINE_API UClass* Z_Construct_UClass_UGeneratedBlueprintBinding_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedBlueprintDelegateBinding_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeneratedBlueprintBinding(); \
	friend struct ::Z_Construct_UClass_UGeneratedBlueprintBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UGeneratedBlueprintBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeneratedBlueprintBinding, UDynamicBlueprintBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UGeneratedBlueprintBinding_NoRegister) \
	DECLARE_SERIALIZER(UGeneratedBlueprintBinding)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedBlueprintDelegateBinding_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UGeneratedBlueprintBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeneratedBlueprintBinding(UGeneratedBlueprintBinding&&) = delete; \
	UGeneratedBlueprintBinding(const UGeneratedBlueprintBinding&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UGeneratedBlueprintBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeneratedBlueprintBinding); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeneratedBlueprintBinding) \
	ENGINE_API virtual ~UGeneratedBlueprintBinding();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedBlueprintDelegateBinding_h_41_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedBlueprintDelegateBinding_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedBlueprintDelegateBinding_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedBlueprintDelegateBinding_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeneratedBlueprintBinding;

// ********** End Class UGeneratedBlueprintBinding *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedBlueprintDelegateBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
