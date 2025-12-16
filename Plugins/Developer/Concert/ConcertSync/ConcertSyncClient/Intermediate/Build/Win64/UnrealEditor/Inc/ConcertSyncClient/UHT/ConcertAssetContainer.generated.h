// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertAssetContainer.h"

#ifdef CONCERTSYNCCLIENT_ConcertAssetContainer_generated_h
#error "ConcertAssetContainer.generated.h already included, missing '#pragma once' in ConcertAssetContainer.h"
#endif
#define CONCERTSYNCCLIENT_ConcertAssetContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UConcertAssetContainer ***************************************************
struct Z_Construct_UClass_UConcertAssetContainer_Statics;
CONCERTSYNCCLIENT_API UClass* Z_Construct_UClass_UConcertAssetContainer_NoRegister();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Private_ConcertAssetContainer_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConcertAssetContainer(); \
	friend struct ::Z_Construct_UClass_UConcertAssetContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONCERTSYNCCLIENT_API UClass* ::Z_Construct_UClass_UConcertAssetContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(UConcertAssetContainer, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ConcertSyncClient"), Z_Construct_UClass_UConcertAssetContainer_NoRegister) \
	DECLARE_SERIALIZER(UConcertAssetContainer)


#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Private_ConcertAssetContainer_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONCERTSYNCCLIENT_API UConcertAssetContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConcertAssetContainer(UConcertAssetContainer&&) = delete; \
	UConcertAssetContainer(const UConcertAssetContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONCERTSYNCCLIENT_API, UConcertAssetContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConcertAssetContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConcertAssetContainer) \
	CONCERTSYNCCLIENT_API virtual ~UConcertAssetContainer();


#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Private_ConcertAssetContainer_h_21_PROLOG
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Private_ConcertAssetContainer_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Private_ConcertAssetContainer_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Private_ConcertAssetContainer_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConcertAssetContainer;

// ********** End Class UConcertAssetContainer *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Private_ConcertAssetContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
