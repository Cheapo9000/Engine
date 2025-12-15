// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/BlueprintExtension.h"

#ifdef ENGINE_BlueprintExtension_generated_h
#error "BlueprintExtension.generated.h already included, missing '#pragma once' in BlueprintExtension.h"
#endif
#define ENGINE_BlueprintExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlueprintExtension ******************************************************
struct Z_Construct_UClass_UBlueprintExtension_Statics;
ENGINE_API UClass* Z_Construct_UClass_UBlueprintExtension_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Blueprint_BlueprintExtension_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintExtension(); \
	friend struct ::Z_Construct_UClass_UBlueprintExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UBlueprintExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintExtension, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UBlueprintExtension_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintExtension)


#define FID_Engine_Source_Runtime_Engine_Public_Blueprint_BlueprintExtension_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlueprintExtension(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintExtension(UBlueprintExtension&&) = delete; \
	UBlueprintExtension(const UBlueprintExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlueprintExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintExtension); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintExtension) \
	ENGINE_API virtual ~UBlueprintExtension();


#define FID_Engine_Source_Runtime_Engine_Public_Blueprint_BlueprintExtension_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Blueprint_BlueprintExtension_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Blueprint_BlueprintExtension_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Blueprint_BlueprintExtension_h_23_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintExtension;

// ********** End Class UBlueprintExtension ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Blueprint_BlueprintExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
