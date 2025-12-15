// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeGizmoActor.h"

#ifdef LANDSCAPE_LandscapeGizmoActor_generated_h
#error "LandscapeGizmoActor.generated.h already included, missing '#pragma once' in LandscapeGizmoActor.h"
#endif
#define LANDSCAPE_LandscapeGizmoActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALandscapeGizmoActor *****************************************************
struct Z_Construct_UClass_ALandscapeGizmoActor_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeGizmoActor_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActor_h_17_INCLASS \
private: \
	static void StaticRegisterNativesALandscapeGizmoActor(); \
	friend struct ::Z_Construct_UClass_ALandscapeGizmoActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ALandscapeGizmoActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ALandscapeGizmoActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ALandscapeGizmoActor_NoRegister) \
	DECLARE_SERIALIZER(ALandscapeGizmoActor)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActor_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ALandscapeGizmoActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeGizmoActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscapeGizmoActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeGizmoActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALandscapeGizmoActor(ALandscapeGizmoActor&&) = delete; \
	ALandscapeGizmoActor(const ALandscapeGizmoActor&) = delete; \
	LANDSCAPE_API virtual ~ALandscapeGizmoActor();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActor_h_14_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActor_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActor_h_17_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActor_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALandscapeGizmoActor;

// ********** End Class ALandscapeGizmoActor *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
