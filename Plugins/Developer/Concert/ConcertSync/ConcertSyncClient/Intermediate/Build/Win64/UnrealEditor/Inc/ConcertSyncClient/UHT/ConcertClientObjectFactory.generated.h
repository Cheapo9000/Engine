// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertClientObjectFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERTSYNCCLIENT_ConcertClientObjectFactory_generated_h
#error "ConcertClientObjectFactory.generated.h already included, missing '#pragma once' in ConcertClientObjectFactory.h"
#endif
#define CONCERTSYNCCLIENT_ConcertClientObjectFactory_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientObjectFactory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConcertClientObjectFactory(); \
	friend struct Z_Construct_UClass_UConcertClientObjectFactory_Statics; \
public: \
	DECLARE_CLASS(UConcertClientObjectFactory, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ConcertSyncClient"), CONCERTSYNCCLIENT_API) \
	DECLARE_SERIALIZER(UConcertClientObjectFactory)


#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientObjectFactory_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONCERTSYNCCLIENT_API UConcertClientObjectFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UConcertClientObjectFactory(UConcertClientObjectFactory&&); \
	UConcertClientObjectFactory(const UConcertClientObjectFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONCERTSYNCCLIENT_API, UConcertClientObjectFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConcertClientObjectFactory); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConcertClientObjectFactory) \
	CONCERTSYNCCLIENT_API virtual ~UConcertClientObjectFactory();


#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientObjectFactory_h_14_PROLOG
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientObjectFactory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientObjectFactory_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientObjectFactory_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONCERTSYNCCLIENT_API UClass* StaticClass<class UConcertClientObjectFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientObjectFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
