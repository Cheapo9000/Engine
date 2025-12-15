// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/BodySetup.h"

#ifdef ENGINE_BodySetup_generated_h
#error "BodySetup.generated.h already included, missing '#pragma once' in BodySetup.h"
#endif
#define ENGINE_BodySetup_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBodySetup ***************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UBodySetup, ENGINE_API)


struct Z_Construct_UClass_UBodySetup_Statics;
ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_INCLASS \
private: \
	static void StaticRegisterNativesUBodySetup(); \
	friend struct ::Z_Construct_UClass_UBodySetup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UBodySetup_NoRegister(); \
public: \
	DECLARE_CLASS2(UBodySetup, UBodySetupCore, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UBodySetup_NoRegister) \
	DECLARE_SERIALIZER(UBodySetup) \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBodySetup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodySetup) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodySetup); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBodySetup(UBodySetup&&) = delete; \
	UBodySetup(const UBodySetup&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_126_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBodySetup;

// ********** End Class UBodySetup *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
