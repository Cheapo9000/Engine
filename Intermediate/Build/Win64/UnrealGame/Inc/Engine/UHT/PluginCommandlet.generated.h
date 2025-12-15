// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/PluginCommandlet.h"

#ifdef ENGINE_PluginCommandlet_generated_h
#error "PluginCommandlet.generated.h already included, missing '#pragma once' in PluginCommandlet.h"
#endif
#define ENGINE_PluginCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPluginCommandlet ********************************************************
struct Z_Construct_UClass_UPluginCommandlet_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPluginCommandlet_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPluginCommandlet(); \
	friend struct ::Z_Construct_UClass_UPluginCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPluginCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UPluginCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPluginCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UPluginCommandlet)


#define FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPluginCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPluginCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPluginCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPluginCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPluginCommandlet(UPluginCommandlet&&) = delete; \
	UPluginCommandlet(const UPluginCommandlet&) = delete; \
	NO_API virtual ~UPluginCommandlet();


#define FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPluginCommandlet;

// ********** End Class UPluginCommandlet **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
