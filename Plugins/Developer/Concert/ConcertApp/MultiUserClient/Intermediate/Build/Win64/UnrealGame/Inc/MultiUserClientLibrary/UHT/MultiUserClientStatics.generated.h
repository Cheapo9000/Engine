// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiUserClientStatics.h"

#ifdef MULTIUSERCLIENTLIBRARY_MultiUserClientStatics_generated_h
#error "MultiUserClientStatics.generated.h already included, missing '#pragma once' in MultiUserClientStatics.h"
#endif
#define MULTIUSERCLIENTLIBRARY_MultiUserClientStatics_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMultiUserClientSyncDatabase;
enum class EMultiUserConnectionStatus : uint8;
struct FGuid;
struct FMultiUserClientConfig;
struct FMultiUserClientInfo;
struct FMultiUserConnectionError;
struct FMultiUserSessionInfo;

// ********** Begin Delegate FOnPackageSavedSignature **********************************************
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_21_DELEGATE \
MULTIUSERCLIENTLIBRARY_API void FOnPackageSavedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPackageSavedSignature, FName PackageName);


// ********** End Delegate FOnPackageSavedSignature ************************************************

// ********** Begin ScriptStruct FMultiUserClientInfo **********************************************
struct Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics; \
	MULTIUSERCLIENTLIBRARY_API static class UScriptStruct* StaticStruct();


struct FMultiUserClientInfo;
// ********** End ScriptStruct FMultiUserClientInfo ************************************************

// ********** Begin ScriptStruct FMultiUserSessionInfo *********************************************
struct Z_Construct_UScriptStruct_FMultiUserSessionInfo_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMultiUserSessionInfo_Statics; \
	MULTIUSERCLIENTLIBRARY_API static class UScriptStruct* StaticStruct();


struct FMultiUserSessionInfo;
// ********** End ScriptStruct FMultiUserSessionInfo ***********************************************

// ********** Begin Class UMultiUserClientSyncDatabase *********************************************
struct Z_Construct_UClass_UMultiUserClientSyncDatabase_Statics;
MULTIUSERCLIENTLIBRARY_API UClass* Z_Construct_UClass_UMultiUserClientSyncDatabase_NoRegister();

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiUserClientSyncDatabase(); \
	friend struct ::Z_Construct_UClass_UMultiUserClientSyncDatabase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTIUSERCLIENTLIBRARY_API UClass* ::Z_Construct_UClass_UMultiUserClientSyncDatabase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMultiUserClientSyncDatabase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiUserClientLibrary"), Z_Construct_UClass_UMultiUserClientSyncDatabase_NoRegister) \
	DECLARE_SERIALIZER(UMultiUserClientSyncDatabase)


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiUserClientSyncDatabase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMultiUserClientSyncDatabase(UMultiUserClientSyncDatabase&&) = delete; \
	UMultiUserClientSyncDatabase(const UMultiUserClientSyncDatabase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiUserClientSyncDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiUserClientSyncDatabase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiUserClientSyncDatabase) \
	NO_API virtual ~UMultiUserClientSyncDatabase();


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_85_PROLOG
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMultiUserClientSyncDatabase;

// ********** End Class UMultiUserClientSyncDatabase ***********************************************

// ********** Begin ScriptStruct FMultiUserConnectionError *****************************************
struct Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_117_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics; \
	MULTIUSERCLIENTLIBRARY_API static class UScriptStruct* StaticStruct();


struct FMultiUserConnectionError;
// ********** End ScriptStruct FMultiUserConnectionError *******************************************

// ********** Begin ScriptStruct FMultiUserClientConfig ********************************************
struct Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_144_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics; \
	MULTIUSERCLIENTLIBRARY_API static class UScriptStruct* StaticStruct();


struct FMultiUserClientConfig;
// ********** End ScriptStruct FMultiUserClientConfig **********************************************

// ********** Begin Class UMultiUserClientStatics **************************************************
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_201_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetMultiUserConnectionStatus); \
	DECLARE_FUNCTION(execGetMultiUserConnectionStatusDetail); \
	DECLARE_FUNCTION(execGetLastMultiUserConnectionError); \
	DECLARE_FUNCTION(execStartMultiUserDefaultConnection); \
	DECLARE_FUNCTION(execConfigureMultiUserClient); \
	DECLARE_FUNCTION(execGetRemoteMultiUserClientInfos); \
	DECLARE_FUNCTION(execGetMultiUserClientInfoByName); \
	DECLARE_FUNCTION(execGetMultiUserSessionInfo); \
	DECLARE_FUNCTION(execGetLocalMultiUserClientInfo); \
	DECLARE_FUNCTION(execGetConcertSyncDatabase); \
	DECLARE_FUNCTION(execGatherSessionChanges); \
	DECLARE_FUNCTION(execPersistSpecifiedPackages); \
	DECLARE_FUNCTION(execPersistMultiUserSessionChanges); \
	DECLARE_FUNCTION(execUpdateWorkspaceModifiedPackages); \
	DECLARE_FUNCTION(execJumpToMultiUserPresence); \
	DECLARE_FUNCTION(execGetMultiUserPresenceTransform); \
	DECLARE_FUNCTION(execSetMultiUserPresenceVisibilityById); \
	DECLARE_FUNCTION(execSetMultiUserPresenceVisibility); \
	DECLARE_FUNCTION(execSetMultiUserPresenceEnabled);


struct Z_Construct_UClass_UMultiUserClientStatics_Statics;
MULTIUSERCLIENTLIBRARY_API UClass* Z_Construct_UClass_UMultiUserClientStatics_NoRegister();

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_201_INCLASS \
private: \
	static void StaticRegisterNativesUMultiUserClientStatics(); \
	friend struct ::Z_Construct_UClass_UMultiUserClientStatics_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTIUSERCLIENTLIBRARY_API UClass* ::Z_Construct_UClass_UMultiUserClientStatics_NoRegister(); \
public: \
	DECLARE_CLASS2(UMultiUserClientStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiUserClientLibrary"), Z_Construct_UClass_UMultiUserClientStatics_NoRegister) \
	DECLARE_SERIALIZER(UMultiUserClientStatics)


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_201_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiUserClientStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiUserClientStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiUserClientStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiUserClientStatics); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMultiUserClientStatics(UMultiUserClientStatics&&) = delete; \
	UMultiUserClientStatics(const UMultiUserClientStatics&) = delete; \
	NO_API virtual ~UMultiUserClientStatics();


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_198_PROLOG
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_201_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_201_RPC_WRAPPERS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_201_INCLASS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_201_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMultiUserClientStatics;

// ********** End Class UMultiUserClientStatics ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h

// ********** Begin Enum EMultiUserConnectionError *************************************************
#define FOREACH_ENUM_EMULTIUSERCONNECTIONERROR(op) \
	op(EMultiUserConnectionError::None) \
	op(EMultiUserConnectionError::Canceled) \
	op(EMultiUserConnectionError::ConnectionAttemptAborted) \
	op(EMultiUserConnectionError::ServerNotResponding) \
	op(EMultiUserConnectionError::ServerError) \
	op(EMultiUserConnectionError::WorkspaceValidationUnknown) \
	op(EMultiUserConnectionError::SourceControlValidationUnknown) \
	op(EMultiUserConnectionError::SourceControlValidationCanceled) \
	op(EMultiUserConnectionError::SourceControlValidationError) \
	op(EMultiUserConnectionError::DirtyPackageValidationError) 

enum class EMultiUserConnectionError;
template<> struct TIsUEnumClass<EMultiUserConnectionError> { enum { Value = true }; };
template<> MULTIUSERCLIENTLIBRARY_NON_ATTRIBUTED_API UEnum* StaticEnum<EMultiUserConnectionError>();
// ********** End Enum EMultiUserConnectionError ***************************************************

// ********** Begin Enum EMultiUserSourceValidationMode ********************************************
#define FOREACH_ENUM_EMULTIUSERSOURCEVALIDATIONMODE(op) \
	op(EMultiUserSourceValidationMode::Hard) \
	op(EMultiUserSourceValidationMode::Soft) \
	op(EMultiUserSourceValidationMode::SoftAutoProceed) 

enum class EMultiUserSourceValidationMode : uint8;
template<> struct TIsUEnumClass<EMultiUserSourceValidationMode> { enum { Value = true }; };
template<> MULTIUSERCLIENTLIBRARY_NON_ATTRIBUTED_API UEnum* StaticEnum<EMultiUserSourceValidationMode>();
// ********** End Enum EMultiUserSourceValidationMode **********************************************

// ********** Begin Enum EMultiUserConnectionStatus ************************************************
#define FOREACH_ENUM_EMULTIUSERCONNECTIONSTATUS(op) \
	op(EMultiUserConnectionStatus::Connecting) \
	op(EMultiUserConnectionStatus::Connected) \
	op(EMultiUserConnectionStatus::Disconnecting) \
	op(EMultiUserConnectionStatus::Disconnected) 

enum class EMultiUserConnectionStatus : uint8;
template<> struct TIsUEnumClass<EMultiUserConnectionStatus> { enum { Value = true }; };
template<> MULTIUSERCLIENTLIBRARY_NON_ATTRIBUTED_API UEnum* StaticEnum<EMultiUserConnectionStatus>();
// ********** End Enum EMultiUserConnectionStatus **************************************************

// ********** Begin Enum EMultiUserClientStatus ****************************************************
#define FOREACH_ENUM_EMULTIUSERCLIENTSTATUS(op) \
	op(EMultiUserClientStatus::Connected) \
	op(EMultiUserClientStatus::Disconnected) \
	op(EMultiUserClientStatus::Updated) 

enum class EMultiUserClientStatus : uint8;
template<> struct TIsUEnumClass<EMultiUserClientStatus> { enum { Value = true }; };
template<> MULTIUSERCLIENTLIBRARY_NON_ATTRIBUTED_API UEnum* StaticEnum<EMultiUserClientStatus>();
// ********** End Enum EMultiUserClientStatus ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
