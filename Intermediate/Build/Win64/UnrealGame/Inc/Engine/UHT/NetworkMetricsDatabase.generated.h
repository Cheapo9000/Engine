// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/NetworkMetricsDatabase.h"

#ifdef ENGINE_NetworkMetricsDatabase_generated_h
#error "NetworkMetricsDatabase.generated.h already included, missing '#pragma once' in NetworkMetricsDatabase.h"
#endif
#define ENGINE_NetworkMetricsDatabase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNetworkMetricsDatabase **************************************************
struct Z_Construct_UClass_UNetworkMetricsDatabase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNetworkMetricsDatabase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkMetricsDatabase(); \
	friend struct ::Z_Construct_UClass_UNetworkMetricsDatabase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNetworkMetricsDatabase_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetworkMetricsDatabase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNetworkMetricsDatabase_NoRegister) \
	DECLARE_SERIALIZER(UNetworkMetricsDatabase)


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNetworkMetricsDatabase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetworkMetricsDatabase(UNetworkMetricsDatabase&&) = delete; \
	UNetworkMetricsDatabase(const UNetworkMetricsDatabase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNetworkMetricsDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkMetricsDatabase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetworkMetricsDatabase) \
	ENGINE_API virtual ~UNetworkMetricsDatabase();


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_39_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetworkMetricsDatabase;

// ********** End Class UNetworkMetricsDatabase ****************************************************

// ********** Begin Class UNetworkMetricsBaseListener **********************************************
struct Z_Construct_UClass_UNetworkMetricsBaseListener_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNetworkMetricsBaseListener_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_157_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkMetricsBaseListener(); \
	friend struct ::Z_Construct_UClass_UNetworkMetricsBaseListener_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNetworkMetricsBaseListener_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetworkMetricsBaseListener, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNetworkMetricsBaseListener_NoRegister) \
	DECLARE_SERIALIZER(UNetworkMetricsBaseListener)


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_157_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetworkMetricsBaseListener(UNetworkMetricsBaseListener&&) = delete; \
	UNetworkMetricsBaseListener(const UNetworkMetricsBaseListener&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNetworkMetricsBaseListener); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkMetricsBaseListener); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNetworkMetricsBaseListener)


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_154_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_157_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_157_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_157_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetworkMetricsBaseListener;

// ********** End Class UNetworkMetricsBaseListener ************************************************

// ********** Begin Class UNetworkMetricsLog *******************************************************
struct Z_Construct_UClass_UNetworkMetricsLog_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNetworkMetricsLog_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_215_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkMetricsLog(); \
	friend struct ::Z_Construct_UClass_UNetworkMetricsLog_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNetworkMetricsLog_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetworkMetricsLog, UNetworkMetricsBaseListener, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNetworkMetricsLog_NoRegister) \
	DECLARE_SERIALIZER(UNetworkMetricsLog)


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_215_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNetworkMetricsLog(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetworkMetricsLog(UNetworkMetricsLog&&) = delete; \
	UNetworkMetricsLog(const UNetworkMetricsLog&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNetworkMetricsLog); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkMetricsLog); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetworkMetricsLog)


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_212_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_215_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_215_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_215_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetworkMetricsLog;

// ********** End Class UNetworkMetricsLog *********************************************************

// ********** Begin Class UNetworkMetricsCSV *******************************************************
struct Z_Construct_UClass_UNetworkMetricsCSV_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNetworkMetricsCSV_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_256_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkMetricsCSV(); \
	friend struct ::Z_Construct_UClass_UNetworkMetricsCSV_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNetworkMetricsCSV_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetworkMetricsCSV, UNetworkMetricsBaseListener, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNetworkMetricsCSV_NoRegister) \
	DECLARE_SERIALIZER(UNetworkMetricsCSV)


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_256_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetworkMetricsCSV(UNetworkMetricsCSV&&) = delete; \
	UNetworkMetricsCSV(const UNetworkMetricsCSV&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNetworkMetricsCSV); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkMetricsCSV); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetworkMetricsCSV)


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_253_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_256_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_256_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_256_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetworkMetricsCSV;

// ********** End Class UNetworkMetricsCSV *********************************************************

// ********** Begin Class UNetworkMetricsCSV_Replication *******************************************
struct Z_Construct_UClass_UNetworkMetricsCSV_Replication_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNetworkMetricsCSV_Replication_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_275_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkMetricsCSV_Replication(); \
	friend struct ::Z_Construct_UClass_UNetworkMetricsCSV_Replication_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNetworkMetricsCSV_Replication_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetworkMetricsCSV_Replication, UNetworkMetricsCSV, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNetworkMetricsCSV_Replication_NoRegister) \
	DECLARE_SERIALIZER(UNetworkMetricsCSV_Replication)


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_275_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetworkMetricsCSV_Replication(UNetworkMetricsCSV_Replication&&) = delete; \
	UNetworkMetricsCSV_Replication(const UNetworkMetricsCSV_Replication&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNetworkMetricsCSV_Replication); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkMetricsCSV_Replication); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetworkMetricsCSV_Replication)


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_272_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_275_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_275_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_275_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetworkMetricsCSV_Replication;

// ********** End Class UNetworkMetricsCSV_Replication *********************************************

// ********** Begin Class UNetworkMetricsPerfCounters **********************************************
struct Z_Construct_UClass_UNetworkMetricsPerfCounters_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNetworkMetricsPerfCounters_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_297_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkMetricsPerfCounters(); \
	friend struct ::Z_Construct_UClass_UNetworkMetricsPerfCounters_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNetworkMetricsPerfCounters_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetworkMetricsPerfCounters, UNetworkMetricsBaseListener, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNetworkMetricsPerfCounters_NoRegister) \
	DECLARE_SERIALIZER(UNetworkMetricsPerfCounters)


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_297_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNetworkMetricsPerfCounters(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetworkMetricsPerfCounters(UNetworkMetricsPerfCounters&&) = delete; \
	UNetworkMetricsPerfCounters(const UNetworkMetricsPerfCounters&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNetworkMetricsPerfCounters); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkMetricsPerfCounters); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetworkMetricsPerfCounters)


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_294_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_297_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_297_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_297_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetworkMetricsPerfCounters;

// ********** End Class UNetworkMetricsPerfCounters ************************************************

// ********** Begin Class UNetworkMetricsStats *****************************************************
struct Z_Construct_UClass_UNetworkMetricsStats_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNetworkMetricsStats_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_320_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkMetricsStats(); \
	friend struct ::Z_Construct_UClass_UNetworkMetricsStats_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNetworkMetricsStats_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetworkMetricsStats, UNetworkMetricsBaseListener, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNetworkMetricsStats_NoRegister) \
	DECLARE_SERIALIZER(UNetworkMetricsStats)


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_320_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetworkMetricsStats(UNetworkMetricsStats&&) = delete; \
	UNetworkMetricsStats(const UNetworkMetricsStats&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNetworkMetricsStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkMetricsStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetworkMetricsStats)


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_317_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_320_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_320_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_320_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetworkMetricsStats;

// ********** End Class UNetworkMetricsStats *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
