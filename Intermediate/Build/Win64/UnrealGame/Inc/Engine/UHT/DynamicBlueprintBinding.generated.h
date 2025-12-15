// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/DynamicBlueprintBinding.h"

#ifdef ENGINE_DynamicBlueprintBinding_generated_h
#error "DynamicBlueprintBinding.generated.h already included, missing '#pragma once' in DynamicBlueprintBinding.h"
#endif
#define ENGINE_DynamicBlueprintBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDynamicBlueprintBinding *************************************************
struct Z_Construct_UClass_UDynamicBlueprintBinding_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DynamicBlueprintBinding_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUDynamicBlueprintBinding(); \
	friend struct ::Z_Construct_UClass_UDynamicBlueprintBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDynamicBlueprintBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UDynamicBlueprintBinding, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDynamicBlueprintBinding_NoRegister) \
	DECLARE_SERIALIZER(UDynamicBlueprintBinding)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DynamicBlueprintBinding_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDynamicBlueprintBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicBlueprintBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDynamicBlueprintBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicBlueprintBinding); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicBlueprintBinding(UDynamicBlueprintBinding&&) = delete; \
	UDynamicBlueprintBinding(const UDynamicBlueprintBinding&) = delete; \
	ENGINE_API virtual ~UDynamicBlueprintBinding();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DynamicBlueprintBinding_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DynamicBlueprintBinding_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DynamicBlueprintBinding_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DynamicBlueprintBinding_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicBlueprintBinding;

// ********** End Class UDynamicBlueprintBinding ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_DynamicBlueprintBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
