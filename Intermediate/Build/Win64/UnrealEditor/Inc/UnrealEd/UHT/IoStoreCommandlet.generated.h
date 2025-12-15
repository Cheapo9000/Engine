// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/IoStoreCommandlet.h"

#ifdef UNREALED_IoStoreCommandlet_generated_h
#error "IoStoreCommandlet.generated.h already included, missing '#pragma once' in IoStoreCommandlet.h"
#endif
#define UNREALED_IoStoreCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UIoStoreCommandlet *******************************************************
struct Z_Construct_UClass_UIoStoreCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UIoStoreCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_IoStoreCommandlet_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUIoStoreCommandlet(); \
	friend struct ::Z_Construct_UClass_UIoStoreCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UIoStoreCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UIoStoreCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UIoStoreCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UIoStoreCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_IoStoreCommandlet_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIoStoreCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIoStoreCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIoStoreCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIoStoreCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIoStoreCommandlet(UIoStoreCommandlet&&) = delete; \
	UIoStoreCommandlet(const UIoStoreCommandlet&) = delete; \
	NO_API virtual ~UIoStoreCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_IoStoreCommandlet_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_IoStoreCommandlet_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_IoStoreCommandlet_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_IoStoreCommandlet_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIoStoreCommandlet;

// ********** End Class UIoStoreCommandlet *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_IoStoreCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
