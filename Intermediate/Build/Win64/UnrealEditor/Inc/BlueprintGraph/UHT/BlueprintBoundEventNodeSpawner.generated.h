// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintBoundEventNodeSpawner.h"

#ifdef BLUEPRINTGRAPH_BlueprintBoundEventNodeSpawner_generated_h
#error "BlueprintBoundEventNodeSpawner.generated.h already included, missing '#pragma once' in BlueprintBoundEventNodeSpawner.h"
#endif
#define BLUEPRINTGRAPH_BlueprintBoundEventNodeSpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlueprintBoundEventNodeSpawner ******************************************
struct Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintBoundEventNodeSpawner_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintBoundEventNodeSpawner(); \
	friend struct ::Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintBoundEventNodeSpawner, UBlueprintEventNodeSpawner, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintBoundEventNodeSpawner)


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintBoundEventNodeSpawner_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UBlueprintBoundEventNodeSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintBoundEventNodeSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UBlueprintBoundEventNodeSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintBoundEventNodeSpawner); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintBoundEventNodeSpawner(UBlueprintBoundEventNodeSpawner&&) = delete; \
	UBlueprintBoundEventNodeSpawner(const UBlueprintBoundEventNodeSpawner&) = delete; \
	BLUEPRINTGRAPH_API virtual ~UBlueprintBoundEventNodeSpawner();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintBoundEventNodeSpawner_h_36_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintBoundEventNodeSpawner_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintBoundEventNodeSpawner_h_39_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintBoundEventNodeSpawner_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintBoundEventNodeSpawner;

// ********** End Class UBlueprintBoundEventNodeSpawner ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintBoundEventNodeSpawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
