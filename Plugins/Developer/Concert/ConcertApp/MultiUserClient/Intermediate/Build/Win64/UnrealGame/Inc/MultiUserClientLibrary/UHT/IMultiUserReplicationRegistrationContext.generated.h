// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/IMultiUserReplicationRegistrationContext.h"

#ifdef MULTIUSERCLIENTLIBRARY_IMultiUserReplicationRegistrationContext_generated_h
#error "IMultiUserReplicationRegistrationContext.generated.h already included, missing '#pragma once' in IMultiUserReplicationRegistrationContext.h"
#endif
#define MULTIUSERCLIENTLIBRARY_IMultiUserReplicationRegistrationContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FConcertPropertyChainWrapper;

// ********** Begin Interface UMultiUserReplicationRegistrationContext *****************************
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistrationContext_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddAdditionalObject); \
	DECLARE_FUNCTION(execAddPropertiesToObject);


struct Z_Construct_UClass_UMultiUserReplicationRegistrationContext_Statics;
MULTIUSERCLIENTLIBRARY_API UClass* Z_Construct_UClass_UMultiUserReplicationRegistrationContext_NoRegister();

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistrationContext_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiUserReplicationRegistrationContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMultiUserReplicationRegistrationContext(UMultiUserReplicationRegistrationContext&&) = delete; \
	UMultiUserReplicationRegistrationContext(const UMultiUserReplicationRegistrationContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiUserReplicationRegistrationContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiUserReplicationRegistrationContext); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiUserReplicationRegistrationContext) \
	virtual ~UMultiUserReplicationRegistrationContext() = default;


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistrationContext_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMultiUserReplicationRegistrationContext(); \
	friend struct ::Z_Construct_UClass_UMultiUserReplicationRegistrationContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTIUSERCLIENTLIBRARY_API UClass* ::Z_Construct_UClass_UMultiUserReplicationRegistrationContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UMultiUserReplicationRegistrationContext, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MultiUserClientLibrary"), Z_Construct_UClass_UMultiUserReplicationRegistrationContext_NoRegister) \
	DECLARE_SERIALIZER(UMultiUserReplicationRegistrationContext)


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistrationContext_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistrationContext_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistrationContext_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistrationContext_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMultiUserReplicationRegistrationContext() {} \
public: \
	typedef UMultiUserReplicationRegistrationContext UClassType; \
	typedef IMultiUserReplicationRegistrationContext ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistrationContext_h_10_PROLOG
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistrationContext_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistrationContext_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistrationContext_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMultiUserReplicationRegistrationContext;

// ********** End Interface UMultiUserReplicationRegistrationContext *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistrationContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
