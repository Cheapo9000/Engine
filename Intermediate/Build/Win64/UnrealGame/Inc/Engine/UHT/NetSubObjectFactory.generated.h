// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/Iris/ReplicationSystem/NetSubObjectFactory.h"

#ifdef ENGINE_NetSubObjectFactory_generated_h
#error "NetSubObjectFactory.generated.h already included, missing '#pragma once' in NetSubObjectFactory.h"
#endif
#define ENGINE_NetSubObjectFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNetSubObjectFactory *****************************************************
struct Z_Construct_UClass_UNetSubObjectFactory_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNetSubObjectFactory_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetSubObjectFactory_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetSubObjectFactory(); \
	friend struct ::Z_Construct_UClass_UNetSubObjectFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNetSubObjectFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetSubObjectFactory, UNetObjectFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNetSubObjectFactory_NoRegister) \
	DECLARE_SERIALIZER(UNetSubObjectFactory)


#define FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetSubObjectFactory_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNetSubObjectFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetSubObjectFactory(UNetSubObjectFactory&&) = delete; \
	UNetSubObjectFactory(const UNetSubObjectFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNetSubObjectFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetSubObjectFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetSubObjectFactory) \
	ENGINE_API virtual ~UNetSubObjectFactory();


#define FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetSubObjectFactory_h_79_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetSubObjectFactory_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetSubObjectFactory_h_82_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetSubObjectFactory_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetSubObjectFactory;

// ********** End Class UNetSubObjectFactory *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetSubObjectFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
