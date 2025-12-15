// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/NavigationData/NavigationDataChunkActor.h"

#ifdef ENGINE_NavigationDataChunkActor_generated_h
#error "NavigationDataChunkActor.generated.h already included, missing '#pragma once' in NavigationDataChunkActor.h"
#endif
#define ENGINE_NavigationDataChunkActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ANavigationDataChunkActor ************************************************
struct Z_Construct_UClass_ANavigationDataChunkActor_Statics;
ENGINE_API UClass* Z_Construct_UClass_ANavigationDataChunkActor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_NavigationData_NavigationDataChunkActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesANavigationDataChunkActor(); \
	friend struct ::Z_Construct_UClass_ANavigationDataChunkActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ANavigationDataChunkActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ANavigationDataChunkActor, APartitionActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ANavigationDataChunkActor_NoRegister) \
	DECLARE_SERIALIZER(ANavigationDataChunkActor)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_NavigationData_NavigationDataChunkActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ANavigationDataChunkActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavigationDataChunkActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ANavigationDataChunkActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavigationDataChunkActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANavigationDataChunkActor(ANavigationDataChunkActor&&) = delete; \
	ANavigationDataChunkActor(const ANavigationDataChunkActor&) = delete; \
	ENGINE_API virtual ~ANavigationDataChunkActor();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_NavigationData_NavigationDataChunkActor_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_NavigationData_NavigationDataChunkActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_NavigationData_NavigationDataChunkActor_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_NavigationData_NavigationDataChunkActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANavigationDataChunkActor;

// ********** End Class ANavigationDataChunkActor **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_NavigationData_NavigationDataChunkActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
