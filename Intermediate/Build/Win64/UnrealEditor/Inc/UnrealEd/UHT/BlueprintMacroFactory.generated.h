// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/BlueprintMacroFactory.h"

#ifdef UNREALED_BlueprintMacroFactory_generated_h
#error "BlueprintMacroFactory.generated.h already included, missing '#pragma once' in BlueprintMacroFactory.h"
#endif
#define UNREALED_BlueprintMacroFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlueprintMacroFactory ***************************************************
struct Z_Construct_UClass_UBlueprintMacroFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UBlueprintMacroFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintMacroFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintMacroFactory(); \
	friend struct ::Z_Construct_UClass_UBlueprintMacroFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UBlueprintMacroFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintMacroFactory, UBlueprintFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UBlueprintMacroFactory_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintMacroFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintMacroFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UBlueprintMacroFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintMacroFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UBlueprintMacroFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintMacroFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintMacroFactory(UBlueprintMacroFactory&&) = delete; \
	UBlueprintMacroFactory(const UBlueprintMacroFactory&) = delete; \
	UNREALED_API virtual ~UBlueprintMacroFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintMacroFactory_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintMacroFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintMacroFactory_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintMacroFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintMacroFactory;

// ********** End Class UBlueprintMacroFactory *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintMacroFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
