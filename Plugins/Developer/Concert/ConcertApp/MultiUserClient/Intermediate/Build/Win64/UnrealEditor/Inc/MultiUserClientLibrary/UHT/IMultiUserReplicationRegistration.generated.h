// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/IMultiUserReplicationRegistration.h"

#ifdef MULTIUSERCLIENTLIBRARY_IMultiUserReplicationRegistration_generated_h
#error "IMultiUserReplicationRegistration.generated.h already included, missing '#pragma once' in IMultiUserReplicationRegistration.h"
#endif
#define MULTIUSERCLIENTLIBRARY_IMultiUserReplicationRegistration_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMultiUserReplicationRegistrationParams;

// ********** Begin ScriptStruct FMultiUserReplicationRegistrationParams ***************************
struct Z_Construct_UScriptStruct_FMultiUserReplicationRegistrationParams_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistration_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMultiUserReplicationRegistrationParams_Statics; \
	MULTIUSERCLIENTLIBRARY_API static class UScriptStruct* StaticStruct();


struct FMultiUserReplicationRegistrationParams;
// ********** End ScriptStruct FMultiUserReplicationRegistrationParams *****************************

// ********** Begin Interface UMultiUserReplicationRegistration ************************************
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistration_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void DiscoverReplicationSettings_Implementation(FMultiUserReplicationRegistrationParams const& Params) {}; \
	DECLARE_FUNCTION(execDiscoverReplicationSettings);


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistration_h_18_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UMultiUserReplicationRegistration_Statics;
MULTIUSERCLIENTLIBRARY_API UClass* Z_Construct_UClass_UMultiUserReplicationRegistration_NoRegister();

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistration_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiUserReplicationRegistration(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMultiUserReplicationRegistration(UMultiUserReplicationRegistration&&) = delete; \
	UMultiUserReplicationRegistration(const UMultiUserReplicationRegistration&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiUserReplicationRegistration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiUserReplicationRegistration); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiUserReplicationRegistration) \
	virtual ~UMultiUserReplicationRegistration() = default;


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistration_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMultiUserReplicationRegistration(); \
	friend struct ::Z_Construct_UClass_UMultiUserReplicationRegistration_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTIUSERCLIENTLIBRARY_API UClass* ::Z_Construct_UClass_UMultiUserReplicationRegistration_NoRegister(); \
public: \
	DECLARE_CLASS2(UMultiUserReplicationRegistration, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MultiUserClientLibrary"), Z_Construct_UClass_UMultiUserReplicationRegistration_NoRegister) \
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


class UMultiUserReplicationRegistration;

// ********** End Interface UMultiUserReplicationRegistration **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_Replication_IMultiUserReplicationRegistration_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
