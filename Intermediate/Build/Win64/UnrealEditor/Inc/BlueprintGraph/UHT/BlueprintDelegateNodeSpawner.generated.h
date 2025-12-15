// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintDelegateNodeSpawner.h"

#ifdef BLUEPRINTGRAPH_BlueprintDelegateNodeSpawner_generated_h
#error "BlueprintDelegateNodeSpawner.generated.h already included, missing '#pragma once' in BlueprintDelegateNodeSpawner.h"
#endif
#define BLUEPRINTGRAPH_BlueprintDelegateNodeSpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlueprintDelegateNodeSpawner ********************************************
struct Z_Construct_UClass_UBlueprintDelegateNodeSpawner_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintDelegateNodeSpawner_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintDelegateNodeSpawner_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintDelegateNodeSpawner(); \
	friend struct ::Z_Construct_UClass_UBlueprintDelegateNodeSpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UBlueprintDelegateNodeSpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintDelegateNodeSpawner, UBlueprintFieldNodeSpawner, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UBlueprintDelegateNodeSpawner_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintDelegateNodeSpawner)


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintDelegateNodeSpawner_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UBlueprintDelegateNodeSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintDelegateNodeSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UBlueprintDelegateNodeSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintDelegateNodeSpawner); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintDelegateNodeSpawner(UBlueprintDelegateNodeSpawner&&) = delete; \
	UBlueprintDelegateNodeSpawner(const UBlueprintDelegateNodeSpawner&) = delete; \
	BLUEPRINTGRAPH_API virtual ~UBlueprintDelegateNodeSpawner();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintDelegateNodeSpawner_h_26_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintDelegateNodeSpawner_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintDelegateNodeSpawner_h_29_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintDelegateNodeSpawner_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintDelegateNodeSpawner;

// ********** End Class UBlueprintDelegateNodeSpawner **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintDelegateNodeSpawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
