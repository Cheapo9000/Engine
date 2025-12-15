// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorPartition/ActorPartitionSubsystem.h"

#ifdef ENGINE_ActorPartitionSubsystem_generated_h
#error "ActorPartitionSubsystem.generated.h already included, missing '#pragma once' in ActorPartitionSubsystem.h"
#endif
#define ENGINE_ActorPartitionSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorPartitionSubsystem *************************************************
struct Z_Construct_UClass_UActorPartitionSubsystem_Statics;
ENGINE_API UClass* Z_Construct_UClass_UActorPartitionSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_ActorPartition_ActorPartitionSubsystem_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorPartitionSubsystem(); \
	friend struct ::Z_Construct_UClass_UActorPartitionSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UActorPartitionSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorPartitionSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UActorPartitionSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UActorPartitionSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_ActorPartition_ActorPartitionSubsystem_h_89_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorPartitionSubsystem(UActorPartitionSubsystem&&) = delete; \
	UActorPartitionSubsystem(const UActorPartitionSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UActorPartitionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorPartitionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorPartitionSubsystem) \
	ENGINE_API virtual ~UActorPartitionSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_ActorPartition_ActorPartitionSubsystem_h_86_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_ActorPartition_ActorPartitionSubsystem_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_ActorPartition_ActorPartitionSubsystem_h_89_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_ActorPartition_ActorPartitionSubsystem_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorPartitionSubsystem;

// ********** End Class UActorPartitionSubsystem ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_ActorPartition_ActorPartitionSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
