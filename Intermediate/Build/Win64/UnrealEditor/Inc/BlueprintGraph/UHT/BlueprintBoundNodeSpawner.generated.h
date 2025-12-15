// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintBoundNodeSpawner.h"

#ifdef BLUEPRINTGRAPH_BlueprintBoundNodeSpawner_generated_h
#error "BlueprintBoundNodeSpawner.generated.h already included, missing '#pragma once' in BlueprintBoundNodeSpawner.h"
#endif
#define BLUEPRINTGRAPH_BlueprintBoundNodeSpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlueprintBoundNodeSpawner ***********************************************
struct Z_Construct_UClass_UBlueprintBoundNodeSpawner_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintBoundNodeSpawner_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintBoundNodeSpawner_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintBoundNodeSpawner(); \
	friend struct ::Z_Construct_UClass_UBlueprintBoundNodeSpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UBlueprintBoundNodeSpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintBoundNodeSpawner, UBlueprintNodeSpawner, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UBlueprintBoundNodeSpawner_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintBoundNodeSpawner)


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintBoundNodeSpawner_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UBlueprintBoundNodeSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintBoundNodeSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UBlueprintBoundNodeSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintBoundNodeSpawner); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintBoundNodeSpawner(UBlueprintBoundNodeSpawner&&) = delete; \
	UBlueprintBoundNodeSpawner(const UBlueprintBoundNodeSpawner&) = delete; \
	BLUEPRINTGRAPH_API virtual ~UBlueprintBoundNodeSpawner();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintBoundNodeSpawner_h_30_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintBoundNodeSpawner_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintBoundNodeSpawner_h_33_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintBoundNodeSpawner_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintBoundNodeSpawner;

// ********** End Class UBlueprintBoundNodeSpawner *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintBoundNodeSpawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
