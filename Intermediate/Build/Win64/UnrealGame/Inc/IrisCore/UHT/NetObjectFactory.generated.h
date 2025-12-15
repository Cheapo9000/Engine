// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/NetObjectFactory.h"

#ifdef IRISCORE_NetObjectFactory_generated_h
#error "NetObjectFactory.generated.h already included, missing '#pragma once' in NetObjectFactory.h"
#endif
#define IRISCORE_NetObjectFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNetObjectFactory ********************************************************
struct Z_Construct_UClass_UNetObjectFactory_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFactory_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetObjectFactory_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetObjectFactory(); \
	friend struct ::Z_Construct_UClass_UNetObjectFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UNetObjectFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetObjectFactory, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UNetObjectFactory_NoRegister) \
	DECLARE_SERIALIZER(UNetObjectFactory)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetObjectFactory_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IRISCORE_API UNetObjectFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetObjectFactory(UNetObjectFactory&&) = delete; \
	UNetObjectFactory(const UNetObjectFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, UNetObjectFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetObjectFactory); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetObjectFactory) \
	IRISCORE_API virtual ~UNetObjectFactory();


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetObjectFactory_h_77_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetObjectFactory_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetObjectFactory_h_80_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetObjectFactory_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetObjectFactory;

// ********** End Class UNetObjectFactory **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetObjectFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
