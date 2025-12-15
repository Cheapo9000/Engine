// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/DataLayer/ExternalDataLayerManager.h"

#ifdef ENGINE_ExternalDataLayerManager_generated_h
#error "ExternalDataLayerManager.generated.h already included, missing '#pragma once' in ExternalDataLayerManager.h"
#endif
#define ENGINE_ExternalDataLayerManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UExternalDataLayerManager ************************************************
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerManager_h_28_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UExternalDataLayerManager, ENGINE_API)


struct Z_Construct_UClass_UExternalDataLayerManager_Statics;
ENGINE_API UClass* Z_Construct_UClass_UExternalDataLayerManager_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerManager_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExternalDataLayerManager(); \
	friend struct ::Z_Construct_UClass_UExternalDataLayerManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UExternalDataLayerManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UExternalDataLayerManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UExternalDataLayerManager_NoRegister) \
	DECLARE_SERIALIZER(UExternalDataLayerManager) \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerManager_h_28_ARCHIVESERIALIZER \
	DECLARE_WITHIN(UWorldPartition)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerManager_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UExternalDataLayerManager(UExternalDataLayerManager&&) = delete; \
	UExternalDataLayerManager(const UExternalDataLayerManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UExternalDataLayerManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExternalDataLayerManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UExternalDataLayerManager) \
	ENGINE_API virtual ~UExternalDataLayerManager();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerManager_h_25_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerManager_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerManager_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerManager_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UExternalDataLayerManager;

// ********** End Class UExternalDataLayerManager **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
