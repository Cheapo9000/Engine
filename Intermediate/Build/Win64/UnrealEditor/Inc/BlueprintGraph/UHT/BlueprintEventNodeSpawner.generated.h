// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintEventNodeSpawner.h"

#ifdef BLUEPRINTGRAPH_BlueprintEventNodeSpawner_generated_h
#error "BlueprintEventNodeSpawner.generated.h already included, missing '#pragma once' in BlueprintEventNodeSpawner.h"
#endif
#define BLUEPRINTGRAPH_BlueprintEventNodeSpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlueprintEventNodeSpawner ***********************************************
struct Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintEventNodeSpawner_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintEventNodeSpawner_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintEventNodeSpawner(); \
	friend struct ::Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UBlueprintEventNodeSpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintEventNodeSpawner, UBlueprintNodeSpawner, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UBlueprintEventNodeSpawner_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintEventNodeSpawner)


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintEventNodeSpawner_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UBlueprintEventNodeSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintEventNodeSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UBlueprintEventNodeSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintEventNodeSpawner); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintEventNodeSpawner(UBlueprintEventNodeSpawner&&) = delete; \
	UBlueprintEventNodeSpawner(const UBlueprintEventNodeSpawner&) = delete; \
	BLUEPRINTGRAPH_API virtual ~UBlueprintEventNodeSpawner();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintEventNodeSpawner_h_36_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintEventNodeSpawner_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintEventNodeSpawner_h_39_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintEventNodeSpawner_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintEventNodeSpawner;

// ********** End Class UBlueprintEventNodeSpawner *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintEventNodeSpawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
