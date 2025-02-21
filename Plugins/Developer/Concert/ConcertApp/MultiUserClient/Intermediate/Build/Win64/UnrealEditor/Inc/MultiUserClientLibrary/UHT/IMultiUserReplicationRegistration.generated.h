// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/IMultiUserReplicationRegistration.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMultiUserReplicationRegistrationParams;
#ifdef MULTIUSERCLIENTLIBRARY_IMultiUserReplicationRegistration_generated_h
#error "IMultiUserReplicationRegistration.generated.h already included, missing '#pragma once' in IMultiUserReplicationRegistration.h"
#endif
#define MULTIUSERCLIENTLIBRARY_IMultiUserReplicationRegistration_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistration_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiUserReplicationRegistrationParams_Statics; \
	MULTIUSERCLIENTLIBRARY_API static class UScriptStruct* StaticStruct();


template<> MULTIUSERCLIENTLIBRARY_API UScriptStruct* StaticStruct<struct FMultiUserReplicationRegistrationParams>();

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistration_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void DiscoverReplicationSettings_Implementation(FMultiUserReplicationRegistrationParams const& Params) {}; \
	DECLARE_FUNCTION(execDiscoverReplicationSettings);


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistration_h_18_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistration_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiUserReplicationRegistration(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMultiUserReplicationRegistration(UMultiUserReplicationRegistration&&); \
	UMultiUserReplicationRegistration(const UMultiUserReplicationRegistration&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiUserReplicationRegistration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiUserReplicationRegistration); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiUserReplicationRegistration) \
	NO_API virtual ~UMultiUserReplicationRegistration();


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistration_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMultiUserReplicationRegistration(); \
	friend struct Z_Construct_UClass_UMultiUserReplicationRegistration_Statics; \
public: \
	DECLARE_CLASS(UMultiUserReplicationRegistration, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MultiUserClientLibrary"), NO_API) \
	DECLARE_SERIALIZER(UMultiUserReplicationRegistration)


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistration_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistration_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistration_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistration_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMultiUserReplicationRegistration() {} \
public: \
	typedef UMultiUserReplicationRegistration UClassType; \
	typedef IMultiUserReplicationRegistration ThisClass; \
	static void Execute_DiscoverReplicationSettings(UObject* O, FMultiUserReplicationRegistrationParams const& Params); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistration_h_15_PROLOG
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistration_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistration_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistration_h_18_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistration_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIUSERCLIENTLIBRARY_API UClass* StaticClass<class UMultiUserReplicationRegistration>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistration_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
