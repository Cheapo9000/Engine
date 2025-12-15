// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryTriggerBox.h"

#ifdef UNREALED_ActorFactoryTriggerBox_generated_h
#error "ActorFactoryTriggerBox.generated.h already included, missing '#pragma once' in ActorFactoryTriggerBox.h"
#endif
#define UNREALED_ActorFactoryTriggerBox_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryTriggerBox **************************************************
struct Z_Construct_UClass_UActorFactoryTriggerBox_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryTriggerBox_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerBox_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryTriggerBox(); \
	friend struct ::Z_Construct_UClass_UActorFactoryTriggerBox_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryTriggerBox_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryTriggerBox, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryTriggerBox_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryTriggerBox)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerBox_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryTriggerBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryTriggerBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryTriggerBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryTriggerBox); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryTriggerBox(UActorFactoryTriggerBox&&) = delete; \
	UActorFactoryTriggerBox(const UActorFactoryTriggerBox&) = delete; \
	UNREALED_API virtual ~UActorFactoryTriggerBox();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerBox_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerBox_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerBox_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerBox_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryTriggerBox;

// ********** End Class UActorFactoryTriggerBox ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerBox_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
