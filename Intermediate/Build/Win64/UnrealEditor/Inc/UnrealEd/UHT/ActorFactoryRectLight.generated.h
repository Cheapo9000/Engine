// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryRectLight.h"

#ifdef UNREALED_ActorFactoryRectLight_generated_h
#error "ActorFactoryRectLight.generated.h already included, missing '#pragma once' in ActorFactoryRectLight.h"
#endif
#define UNREALED_ActorFactoryRectLight_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryRectLight ***************************************************
struct Z_Construct_UClass_UActorFactoryRectLight_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryRectLight_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryRectLight_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryRectLight(); \
	friend struct ::Z_Construct_UClass_UActorFactoryRectLight_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryRectLight_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryRectLight, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryRectLight_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryRectLight)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryRectLight_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryRectLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryRectLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryRectLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryRectLight); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryRectLight(UActorFactoryRectLight&&) = delete; \
	UActorFactoryRectLight(const UActorFactoryRectLight&) = delete; \
	UNREALED_API virtual ~UActorFactoryRectLight();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryRectLight_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryRectLight_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryRectLight_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryRectLight_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryRectLight;

// ********** End Class UActorFactoryRectLight *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryRectLight_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
