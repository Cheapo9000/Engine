// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/ActorDescContainerSubsystem.h"

#ifdef ENGINE_ActorDescContainerSubsystem_generated_h
#error "ActorDescContainerSubsystem.generated.h already included, missing '#pragma once' in ActorDescContainerSubsystem.h"
#endif
#define ENGINE_ActorDescContainerSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorDescContainerSubsystem *********************************************
struct Z_Construct_UClass_UActorDescContainerSubsystem_Statics;
ENGINE_API UClass* Z_Construct_UClass_UActorDescContainerSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorDescContainerSubsystem(); \
	friend struct ::Z_Construct_UClass_UActorDescContainerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UActorDescContainerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorDescContainerSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UActorDescContainerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UActorDescContainerSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorDescContainerSubsystem(UActorDescContainerSubsystem&&) = delete; \
	UActorDescContainerSubsystem(const UActorDescContainerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UActorDescContainerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorDescContainerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorDescContainerSubsystem) \
	ENGINE_API virtual ~UActorDescContainerSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerSubsystem_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorDescContainerSubsystem;

// ********** End Class UActorDescContainerSubsystem ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
