// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorPartition/PartitionActor.h"

#ifdef ENGINE_PartitionActor_generated_h
#error "PartitionActor.generated.h already included, missing '#pragma once' in PartitionActor.h"
#endif
#define ENGINE_PartitionActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APartitionActor **********************************************************
struct Z_Construct_UClass_APartitionActor_Statics;
ENGINE_API UClass* Z_Construct_UClass_APartitionActor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_ActorPartition_PartitionActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPartitionActor(); \
	friend struct ::Z_Construct_UClass_APartitionActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_APartitionActor_NoRegister(); \
public: \
	DECLARE_CLASS2(APartitionActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_APartitionActor_NoRegister) \
	DECLARE_SERIALIZER(APartitionActor)


#define FID_Engine_Source_Runtime_Engine_Public_ActorPartition_PartitionActor_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APartitionActor(APartitionActor&&) = delete; \
	APartitionActor(const APartitionActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APartitionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APartitionActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APartitionActor) \
	ENGINE_API virtual ~APartitionActor();


#define FID_Engine_Source_Runtime_Engine_Public_ActorPartition_PartitionActor_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_ActorPartition_PartitionActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_ActorPartition_PartitionActor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_ActorPartition_PartitionActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APartitionActor;

// ********** End Class APartitionActor ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_ActorPartition_PartitionActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
