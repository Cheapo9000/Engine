// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryPointLight.h"

#ifdef UNREALED_ActorFactoryPointLight_generated_h
#error "ActorFactoryPointLight.generated.h already included, missing '#pragma once' in ActorFactoryPointLight.h"
#endif
#define UNREALED_ActorFactoryPointLight_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryPointLight **************************************************
struct Z_Construct_UClass_UActorFactoryPointLight_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryPointLight_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPointLight_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryPointLight(); \
	friend struct ::Z_Construct_UClass_UActorFactoryPointLight_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryPointLight_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryPointLight, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryPointLight_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryPointLight)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPointLight_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryPointLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryPointLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryPointLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryPointLight); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryPointLight(UActorFactoryPointLight&&) = delete; \
	UActorFactoryPointLight(const UActorFactoryPointLight&) = delete; \
	UNREALED_API virtual ~UActorFactoryPointLight();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPointLight_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPointLight_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPointLight_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPointLight_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryPointLight;

// ********** End Class UActorFactoryPointLight ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPointLight_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
