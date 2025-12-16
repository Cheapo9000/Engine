// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiServerProxy.h"

#ifdef MULTISERVERREPLICATION_MultiServerProxy_generated_h
#error "MultiServerProxy.generated.h already included, missing '#pragma once' in MultiServerProxy.h"
#endif
#define MULTISERVERREPLICATION_MultiServerProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameServerSplitJoinRequest ***************************************
struct Z_Construct_UScriptStruct_FGameServerSplitJoinRequest_Statics;
#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_51_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameServerSplitJoinRequest_Statics; \
	MULTISERVERREPLICATION_API static class UScriptStruct* StaticStruct();


struct FGameServerSplitJoinRequest;
// ********** End ScriptStruct FGameServerSplitJoinRequest *****************************************

// ********** Begin ScriptStruct FGameServerConnectionState ****************************************
struct Z_Construct_UScriptStruct_FGameServerConnectionState_Statics;
#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameServerConnectionState_Statics; \
	MULTISERVERREPLICATION_API static class UScriptStruct* StaticStruct();


struct FGameServerConnectionState;
// ********** End ScriptStruct FGameServerConnectionState ******************************************

// ********** Begin ScriptStruct FMultiServerProxyInternalConnectionRoute **************************
struct Z_Construct_UScriptStruct_FMultiServerProxyInternalConnectionRoute_Statics;
#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_107_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMultiServerProxyInternalConnectionRoute_Statics; \
	MULTISERVERREPLICATION_API static class UScriptStruct* StaticStruct();


struct FMultiServerProxyInternalConnectionRoute;
// ********** End ScriptStruct FMultiServerProxyInternalConnectionRoute ****************************

// ********** Begin ScriptStruct FPlayerControllerReassignment *************************************
struct Z_Construct_UScriptStruct_FPlayerControllerReassignment_Statics;
#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_150_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPlayerControllerReassignment_Statics; \
	MULTISERVERREPLICATION_API static class UScriptStruct* StaticStruct();


struct FPlayerControllerReassignment;
// ********** End ScriptStruct FPlayerControllerReassignment ***************************************

// ********** Begin Class UGameServerNotify ********************************************************
struct Z_Construct_UClass_UGameServerNotify_Statics;
MULTISERVERREPLICATION_API UClass* Z_Construct_UClass_UGameServerNotify_NoRegister();

#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_180_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameServerNotify(); \
	friend struct ::Z_Construct_UClass_UGameServerNotify_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTISERVERREPLICATION_API UClass* ::Z_Construct_UClass_UGameServerNotify_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameServerNotify, UPendingNetGame, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MultiServerReplication"), Z_Construct_UClass_UGameServerNotify_NoRegister) \
	DECLARE_SERIALIZER(UGameServerNotify)


#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_180_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameServerNotify(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameServerNotify(UGameServerNotify&&) = delete; \
	UGameServerNotify(const UGameServerNotify&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameServerNotify); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameServerNotify); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameServerNotify) \
	NO_API virtual ~UGameServerNotify();


#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_175_PROLOG
#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_180_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_180_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_180_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameServerNotify;

// ********** End Class UGameServerNotify **********************************************************

// ********** Begin Class UProxyListenerNotify *****************************************************
struct Z_Construct_UClass_UProxyListenerNotify_Statics;
MULTISERVERREPLICATION_API UClass* Z_Construct_UClass_UProxyListenerNotify_NoRegister();

#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_221_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProxyListenerNotify(); \
	friend struct ::Z_Construct_UClass_UProxyListenerNotify_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTISERVERREPLICATION_API UClass* ::Z_Construct_UClass_UProxyListenerNotify_NoRegister(); \
public: \
	DECLARE_CLASS2(UProxyListenerNotify, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiServerReplication"), Z_Construct_UClass_UProxyListenerNotify_NoRegister) \
	DECLARE_SERIALIZER(UProxyListenerNotify)


#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_221_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProxyListenerNotify(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProxyListenerNotify(UProxyListenerNotify&&) = delete; \
	UProxyListenerNotify(const UProxyListenerNotify&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProxyListenerNotify); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProxyListenerNotify); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProxyListenerNotify) \
	NO_API virtual ~UProxyListenerNotify();


#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_215_PROLOG
#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_221_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_221_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_221_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProxyListenerNotify;

// ********** End Class UProxyListenerNotify *******************************************************

// ********** Begin Class UProxyBackendNetConnection ***********************************************
struct Z_Construct_UClass_UProxyBackendNetConnection_Statics;
MULTISERVERREPLICATION_API UClass* Z_Construct_UClass_UProxyBackendNetConnection_NoRegister();

#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_248_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProxyBackendNetConnection(); \
	friend struct ::Z_Construct_UClass_UProxyBackendNetConnection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTISERVERREPLICATION_API UClass* ::Z_Construct_UClass_UProxyBackendNetConnection_NoRegister(); \
public: \
	DECLARE_CLASS2(UProxyBackendNetConnection, UIpConnection, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiServerReplication"), Z_Construct_UClass_UProxyBackendNetConnection_NoRegister) \
	DECLARE_SERIALIZER(UProxyBackendNetConnection)


#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_248_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProxyBackendNetConnection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProxyBackendNetConnection(UProxyBackendNetConnection&&) = delete; \
	UProxyBackendNetConnection(const UProxyBackendNetConnection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProxyBackendNetConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProxyBackendNetConnection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProxyBackendNetConnection) \
	NO_API virtual ~UProxyBackendNetConnection();


#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_245_PROLOG
#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_248_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_248_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_248_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProxyBackendNetConnection;

// ********** End Class UProxyBackendNetConnection *************************************************

// ********** Begin Class UProxyBackendChildNetConnection ******************************************
struct Z_Construct_UClass_UProxyBackendChildNetConnection_Statics;
MULTISERVERREPLICATION_API UClass* Z_Construct_UClass_UProxyBackendChildNetConnection_NoRegister();

#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_261_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProxyBackendChildNetConnection(); \
	friend struct ::Z_Construct_UClass_UProxyBackendChildNetConnection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTISERVERREPLICATION_API UClass* ::Z_Construct_UClass_UProxyBackendChildNetConnection_NoRegister(); \
public: \
	DECLARE_CLASS2(UProxyBackendChildNetConnection, UChildConnection, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiServerReplication"), Z_Construct_UClass_UProxyBackendChildNetConnection_NoRegister) \
	DECLARE_SERIALIZER(UProxyBackendChildNetConnection)


#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_261_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProxyBackendChildNetConnection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProxyBackendChildNetConnection(UProxyBackendChildNetConnection&&) = delete; \
	UProxyBackendChildNetConnection(const UProxyBackendChildNetConnection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProxyBackendChildNetConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProxyBackendChildNetConnection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProxyBackendChildNetConnection) \
	NO_API virtual ~UProxyBackendChildNetConnection();


#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_258_PROLOG
#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_261_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_261_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_261_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProxyBackendChildNetConnection;

// ********** End Class UProxyBackendChildNetConnection ********************************************

// ********** Begin Class UProxyBackendNetDriver ***************************************************
struct Z_Construct_UClass_UProxyBackendNetDriver_Statics;
MULTISERVERREPLICATION_API UClass* Z_Construct_UClass_UProxyBackendNetDriver_NoRegister();

#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_274_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProxyBackendNetDriver(); \
	friend struct ::Z_Construct_UClass_UProxyBackendNetDriver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTISERVERREPLICATION_API UClass* ::Z_Construct_UClass_UProxyBackendNetDriver_NoRegister(); \
public: \
	DECLARE_CLASS2(UProxyBackendNetDriver, UIpNetDriver, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiServerReplication"), Z_Construct_UClass_UProxyBackendNetDriver_NoRegister) \
	DECLARE_SERIALIZER(UProxyBackendNetDriver)


#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_274_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProxyBackendNetDriver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProxyBackendNetDriver(UProxyBackendNetDriver&&) = delete; \
	UProxyBackendNetDriver(const UProxyBackendNetDriver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProxyBackendNetDriver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProxyBackendNetDriver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProxyBackendNetDriver) \
	NO_API virtual ~UProxyBackendNetDriver();


#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_271_PROLOG
#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_274_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_274_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_274_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProxyBackendNetDriver;

// ********** End Class UProxyBackendNetDriver *****************************************************

// ********** Begin Class UProxyNetDriver **********************************************************
struct Z_Construct_UClass_UProxyNetDriver_Statics;
MULTISERVERREPLICATION_API UClass* Z_Construct_UClass_UProxyNetDriver_NoRegister();

#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_326_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProxyNetDriver(); \
	friend struct ::Z_Construct_UClass_UProxyNetDriver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTISERVERREPLICATION_API UClass* ::Z_Construct_UClass_UProxyNetDriver_NoRegister(); \
public: \
	DECLARE_CLASS2(UProxyNetDriver, UIpNetDriver, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiServerReplication"), Z_Construct_UClass_UProxyNetDriver_NoRegister) \
	DECLARE_SERIALIZER(UProxyNetDriver)


#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_326_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProxyNetDriver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProxyNetDriver(UProxyNetDriver&&) = delete; \
	UProxyNetDriver(const UProxyNetDriver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProxyNetDriver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProxyNetDriver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProxyNetDriver) \
	NO_API virtual ~UProxyNetDriver();


#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_323_PROLOG
#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_326_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_326_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_326_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProxyNetDriver;

// ********** End Class UProxyNetDriver ************************************************************

// ********** Begin Class UProxyNetConnection ******************************************************
struct Z_Construct_UClass_UProxyNetConnection_Statics;
MULTISERVERREPLICATION_API UClass* Z_Construct_UClass_UProxyNetConnection_NoRegister();

#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_495_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProxyNetConnection(); \
	friend struct ::Z_Construct_UClass_UProxyNetConnection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTISERVERREPLICATION_API UClass* ::Z_Construct_UClass_UProxyNetConnection_NoRegister(); \
public: \
	DECLARE_CLASS2(UProxyNetConnection, UIpConnection, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiServerReplication"), Z_Construct_UClass_UProxyNetConnection_NoRegister) \
	DECLARE_SERIALIZER(UProxyNetConnection)


#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_495_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProxyNetConnection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProxyNetConnection(UProxyNetConnection&&) = delete; \
	UProxyNetConnection(const UProxyNetConnection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProxyNetConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProxyNetConnection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProxyNetConnection) \
	NO_API virtual ~UProxyNetConnection();


#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_492_PROLOG
#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_495_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_495_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h_495_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProxyNetConnection;

// ********** End Class UProxyNetConnection ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Public_MultiServerProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
