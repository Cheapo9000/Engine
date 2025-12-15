// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryBasicShape.h"

#ifdef UNREALED_ActorFactoryBasicShape_generated_h
#error "ActorFactoryBasicShape.generated.h already included, missing '#pragma once' in ActorFactoryBasicShape.h"
#endif
#define UNREALED_ActorFactoryBasicShape_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryBasicShape **************************************************
struct Z_Construct_UClass_UActorFactoryBasicShape_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryBasicShape_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBasicShape_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryBasicShape(); \
	friend struct ::Z_Construct_UClass_UActorFactoryBasicShape_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryBasicShape_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryBasicShape, UActorFactoryStaticMesh, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryBasicShape_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryBasicShape)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBasicShape_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryBasicShape(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryBasicShape) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryBasicShape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryBasicShape); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryBasicShape(UActorFactoryBasicShape&&) = delete; \
	UActorFactoryBasicShape(const UActorFactoryBasicShape&) = delete; \
	UNREALED_API virtual ~UActorFactoryBasicShape();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBasicShape_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBasicShape_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBasicShape_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBasicShape_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryBasicShape;

// ********** End Class UActorFactoryBasicShape ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBasicShape_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
