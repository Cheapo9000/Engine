// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet/BlueprintFunctionLibrary.h"

#ifdef ENGINE_BlueprintFunctionLibrary_generated_h
#error "BlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in BlueprintFunctionLibrary.h"
#endif
#define ENGINE_BlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlueprintFunctionLibrary ************************************************
struct Z_Construct_UClass_UBlueprintFunctionLibrary_Statics;
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintFunctionLibrary, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintFunctionLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintFunctionLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintFunctionLibrary(UBlueprintFunctionLibrary&&) = delete; \
	UBlueprintFunctionLibrary(const UBlueprintFunctionLibrary&) = delete; \
	ENGINE_API virtual ~UBlueprintFunctionLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintFunctionLibrary;

// ********** End Class UBlueprintFunctionLibrary **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
