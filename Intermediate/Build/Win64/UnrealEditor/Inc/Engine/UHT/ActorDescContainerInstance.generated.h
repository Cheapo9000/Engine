// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/ActorDescContainerInstance.h"

#ifdef ENGINE_ActorDescContainerInstance_generated_h
#error "ActorDescContainerInstance.generated.h already included, missing '#pragma once' in ActorDescContainerInstance.h"
#endif
#define ENGINE_ActorDescContainerInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorDescContainerInstance **********************************************
struct Z_Construct_UClass_UActorDescContainerInstance_Statics;
ENGINE_API UClass* Z_Construct_UClass_UActorDescContainerInstance_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerInstance_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorDescContainerInstance(); \
	friend struct ::Z_Construct_UClass_UActorDescContainerInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UActorDescContainerInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorDescContainerInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UActorDescContainerInstance_NoRegister) \
	DECLARE_SERIALIZER(UActorDescContainerInstance)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerInstance_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorDescContainerInstance(UActorDescContainerInstance&&) = delete; \
	UActorDescContainerInstance(const UActorDescContainerInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UActorDescContainerInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorDescContainerInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorDescContainerInstance) \
	ENGINE_API virtual ~UActorDescContainerInstance();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerInstance_h_21_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerInstance_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerInstance_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerInstance_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorDescContainerInstance;

// ********** End Class UActorDescContainerInstance ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
