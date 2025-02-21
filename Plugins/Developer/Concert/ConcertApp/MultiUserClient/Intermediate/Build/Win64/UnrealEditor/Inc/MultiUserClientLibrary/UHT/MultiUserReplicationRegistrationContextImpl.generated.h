// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/MultiUserReplicationRegistrationContextImpl.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FConcertPropertyChainWrapper;
#ifdef MULTIUSERCLIENTLIBRARY_MultiUserReplicationRegistrationContextImpl_generated_h
#error "MultiUserReplicationRegistrationContextImpl.generated.h already included, missing '#pragma once' in MultiUserReplicationRegistrationContextImpl.h"
#endif
#define MULTIUSERCLIENTLIBRARY_MultiUserReplicationRegistrationContextImpl_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Private_Replication_MultiUserReplicationRegistrationContextImpl_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddAdditionalObject); \
	DECLARE_FUNCTION(execAddPropertiesToObject);


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Private_Replication_MultiUserReplicationRegistrationContextImpl_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiUserReplicationRegistrationContextImpl(); \
	friend struct Z_Construct_UClass_UMultiUserReplicationRegistrationContextImpl_Statics; \
public: \
	DECLARE_CLASS(UMultiUserReplicationRegistrationContextImpl, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiUserClientLibrary"), NO_API) \
	DECLARE_SERIALIZER(UMultiUserReplicationRegistrationContextImpl) \
	virtual UObject* _getUObject() const override { return const_cast<UMultiUserReplicationRegistrationContextImpl*>(this); }


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Private_Replication_MultiUserReplicationRegistrationContextImpl_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiUserReplicationRegistrationContextImpl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMultiUserReplicationRegistrationContextImpl(UMultiUserReplicationRegistrationContextImpl&&); \
	UMultiUserReplicationRegistrationContextImpl(const UMultiUserReplicationRegistrationContextImpl&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiUserReplicationRegistrationContextImpl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiUserReplicationRegistrationContextImpl); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiUserReplicationRegistrationContextImpl) \
	NO_API virtual ~UMultiUserReplicationRegistrationContextImpl();


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Private_Replication_MultiUserReplicationRegistrationContextImpl_h_20_PROLOG
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Private_Replication_MultiUserReplicationRegistrationContextImpl_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Private_Replication_MultiUserReplicationRegistrationContextImpl_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Private_Replication_MultiUserReplicationRegistrationContextImpl_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Private_Replication_MultiUserReplicationRegistrationContextImpl_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIUSERCLIENTLIBRARY_API UClass* StaticClass<class UMultiUserReplicationRegistrationContextImpl>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Private_Replication_MultiUserReplicationRegistrationContextImpl_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
