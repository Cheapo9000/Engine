// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/SmokeTestCommandlet.h"

#ifdef ENGINE_SmokeTestCommandlet_generated_h
#error "SmokeTestCommandlet.generated.h already included, missing '#pragma once' in SmokeTestCommandlet.h"
#endif
#define ENGINE_SmokeTestCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USmokeTestCommandlet *****************************************************
struct Z_Construct_UClass_USmokeTestCommandlet_Statics;
ENGINE_API UClass* Z_Construct_UClass_USmokeTestCommandlet_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Commandlets_SmokeTestCommandlet_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSmokeTestCommandlet(); \
	friend struct ::Z_Construct_UClass_USmokeTestCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USmokeTestCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(USmokeTestCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USmokeTestCommandlet_NoRegister) \
	DECLARE_SERIALIZER(USmokeTestCommandlet)


#define FID_Engine_Source_Runtime_Engine_Classes_Commandlets_SmokeTestCommandlet_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USmokeTestCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmokeTestCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USmokeTestCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmokeTestCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USmokeTestCommandlet(USmokeTestCommandlet&&) = delete; \
	USmokeTestCommandlet(const USmokeTestCommandlet&) = delete; \
	NO_API virtual ~USmokeTestCommandlet();


#define FID_Engine_Source_Runtime_Engine_Classes_Commandlets_SmokeTestCommandlet_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Commandlets_SmokeTestCommandlet_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Commandlets_SmokeTestCommandlet_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Commandlets_SmokeTestCommandlet_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USmokeTestCommandlet;

// ********** End Class USmokeTestCommandlet *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Commandlets_SmokeTestCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
