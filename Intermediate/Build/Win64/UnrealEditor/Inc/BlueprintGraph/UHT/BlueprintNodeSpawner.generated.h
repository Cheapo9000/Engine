// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintNodeSpawner.h"

#ifdef BLUEPRINTGRAPH_BlueprintNodeSpawner_generated_h
#error "BlueprintNodeSpawner.generated.h already included, missing '#pragma once' in BlueprintNodeSpawner.h"
#endif
#define BLUEPRINTGRAPH_BlueprintNodeSpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlueprintNodeSpawner ****************************************************
struct Z_Construct_UClass_UBlueprintNodeSpawner_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintNodeSpawner_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintNodeSpawner_h_118_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintNodeSpawner(); \
	friend struct ::Z_Construct_UClass_UBlueprintNodeSpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UBlueprintNodeSpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintNodeSpawner, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UBlueprintNodeSpawner_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintNodeSpawner)


#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintNodeSpawner_h_118_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UBlueprintNodeSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintNodeSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UBlueprintNodeSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintNodeSpawner); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintNodeSpawner(UBlueprintNodeSpawner&&) = delete; \
	UBlueprintNodeSpawner(const UBlueprintNodeSpawner&) = delete; \
	BLUEPRINTGRAPH_API virtual ~UBlueprintNodeSpawner();


#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintNodeSpawner_h_115_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintNodeSpawner_h_118_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintNodeSpawner_h_118_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintNodeSpawner_h_118_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintNodeSpawner;

// ********** End Class UBlueprintNodeSpawner ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintNodeSpawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
