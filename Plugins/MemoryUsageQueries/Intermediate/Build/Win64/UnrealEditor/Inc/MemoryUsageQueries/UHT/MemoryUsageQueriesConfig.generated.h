// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MemoryUsageQueriesConfig.h"

#ifdef MEMORYUSAGEQUERIES_MemoryUsageQueriesConfig_generated_h
#error "MemoryUsageQueriesConfig.generated.h already included, missing '#pragma once' in MemoryUsageQueriesConfig.h"
#endif
#define MEMORYUSAGEQUERIES_MemoryUsageQueriesConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCollectionInfo ***************************************************
struct Z_Construct_UScriptStruct_FCollectionInfo_Statics;
#define FID_Engine_Plugins_MemoryUsageQueries_Source_MemoryUsageQueries_Public_MemoryUsageQueriesConfig_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCollectionInfo_Statics; \
	MEMORYUSAGEQUERIES_API static class UScriptStruct* StaticStruct();


struct FCollectionInfo;
// ********** End ScriptStruct FCollectionInfo *****************************************************

// ********** Begin Class UMemoryUsageQueriesConfig ************************************************
struct Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics;
MEMORYUSAGEQUERIES_API UClass* Z_Construct_UClass_UMemoryUsageQueriesConfig_NoRegister();

#define FID_Engine_Plugins_MemoryUsageQueries_Source_MemoryUsageQueries_Public_MemoryUsageQueriesConfig_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMemoryUsageQueriesConfig(); \
	friend struct ::Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEMORYUSAGEQUERIES_API UClass* ::Z_Construct_UClass_UMemoryUsageQueriesConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UMemoryUsageQueriesConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MemoryUsageQueries"), Z_Construct_UClass_UMemoryUsageQueriesConfig_NoRegister) \
	DECLARE_SERIALIZER(UMemoryUsageQueriesConfig) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("MemoryUsageQueries");} \



#define FID_Engine_Plugins_MemoryUsageQueries_Source_MemoryUsageQueries_Public_MemoryUsageQueriesConfig_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMemoryUsageQueriesConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMemoryUsageQueriesConfig(UMemoryUsageQueriesConfig&&) = delete; \
	UMemoryUsageQueriesConfig(const UMemoryUsageQueriesConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMemoryUsageQueriesConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMemoryUsageQueriesConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMemoryUsageQueriesConfig) \
	NO_API virtual ~UMemoryUsageQueriesConfig();


#define FID_Engine_Plugins_MemoryUsageQueries_Source_MemoryUsageQueries_Public_MemoryUsageQueriesConfig_h_58_PROLOG
#define FID_Engine_Plugins_MemoryUsageQueries_Source_MemoryUsageQueries_Public_MemoryUsageQueriesConfig_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MemoryUsageQueries_Source_MemoryUsageQueries_Public_MemoryUsageQueriesConfig_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MemoryUsageQueries_Source_MemoryUsageQueries_Public_MemoryUsageQueriesConfig_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMemoryUsageQueriesConfig;

// ********** End Class UMemoryUsageQueriesConfig **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MemoryUsageQueries_Source_MemoryUsageQueries_Public_MemoryUsageQueriesConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
