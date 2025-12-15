// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/Iris/ReplicationSystem/NetActorFactory.h"

#ifdef ENGINE_NetActorFactory_generated_h
#error "NetActorFactory.generated.h already included, missing '#pragma once' in NetActorFactory.h"
#endif
#define ENGINE_NetActorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNetActorFactory *********************************************************
struct Z_Construct_UClass_UNetActorFactory_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNetActorFactory_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetActorFactory_h_173_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetActorFactory(); \
	friend struct ::Z_Construct_UClass_UNetActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNetActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetActorFactory, UNetObjectFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNetActorFactory_NoRegister) \
	DECLARE_SERIALIZER(UNetActorFactory)


#define FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetActorFactory_h_173_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNetActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetActorFactory(UNetActorFactory&&) = delete; \
	UNetActorFactory(const UNetActorFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNetActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetActorFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetActorFactory) \
	ENGINE_API virtual ~UNetActorFactory();


#define FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetActorFactory_h_170_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetActorFactory_h_173_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetActorFactory_h_173_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetActorFactory_h_173_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetActorFactory;

// ********** End Class UNetActorFactory ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetActorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
