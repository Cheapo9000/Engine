// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactoryDestructible.h"

#ifdef APEXDESTRUCTIONEDITOR_ActorFactoryDestructible_generated_h
#error "ActorFactoryDestructible.generated.h already included, missing '#pragma once' in ActorFactoryDestructible.h"
#endif
#define APEXDESTRUCTIONEDITOR_ActorFactoryDestructible_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryDestructible ************************************************
struct Z_Construct_UClass_UActorFactoryDestructible_Statics;
APEXDESTRUCTIONEDITOR_API UClass* Z_Construct_UClass_UActorFactoryDestructible_NoRegister();

#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestructionEditor_Private_ActorFactoryDestructible_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryDestructible(); \
	friend struct ::Z_Construct_UClass_UActorFactoryDestructible_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend APEXDESTRUCTIONEDITOR_API UClass* ::Z_Construct_UClass_UActorFactoryDestructible_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryDestructible, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ApexDestructionEditor"), Z_Construct_UClass_UActorFactoryDestructible_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryDestructible)


#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestructionEditor_Private_ActorFactoryDestructible_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	APEXDESTRUCTIONEDITOR_API UActorFactoryDestructible(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryDestructible) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(APEXDESTRUCTIONEDITOR_API, UActorFactoryDestructible); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryDestructible); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryDestructible(UActorFactoryDestructible&&) = delete; \
	UActorFactoryDestructible(const UActorFactoryDestructible&) = delete; \
	APEXDESTRUCTIONEDITOR_API virtual ~UActorFactoryDestructible();


#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestructionEditor_Private_ActorFactoryDestructible_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestructionEditor_Private_ActorFactoryDestructible_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestructionEditor_Private_ActorFactoryDestructible_h_15_INCLASS \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestructionEditor_Private_ActorFactoryDestructible_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryDestructible;

// ********** End Class UActorFactoryDestructible **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestructionEditor_Private_ActorFactoryDestructible_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
