// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/IO/PCGSaveAssetElement.h"

#ifdef PCG_PCGSaveAssetElement_generated_h
#error "PCGSaveAssetElement.generated.h already included, missing '#pragma once' in PCGSaveAssetElement.h"
#endif
#define PCG_PCGSaveAssetElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGDataCollectionExporter ***********************************************
struct Z_Construct_UClass_UPCGDataCollectionExporter_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDataCollectionExporter_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGSaveAssetElement_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDataCollectionExporter(); \
	friend struct ::Z_Construct_UClass_UPCGDataCollectionExporter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDataCollectionExporter_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDataCollectionExporter, UPCGAssetExporter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDataCollectionExporter_NoRegister) \
	DECLARE_SERIALIZER(UPCGDataCollectionExporter)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGSaveAssetElement_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGDataCollectionExporter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDataCollectionExporter(UPCGDataCollectionExporter&&) = delete; \
	UPCGDataCollectionExporter(const UPCGDataCollectionExporter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGDataCollectionExporter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDataCollectionExporter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDataCollectionExporter) \
	PCG_API virtual ~UPCGDataCollectionExporter();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGSaveAssetElement_h_17_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGSaveAssetElement_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGSaveAssetElement_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGSaveAssetElement_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDataCollectionExporter;

// ********** End Class UPCGDataCollectionExporter *************************************************

// ********** Begin Class UPCGSaveDataAssetSettings ************************************************
struct Z_Construct_UClass_UPCGSaveDataAssetSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSaveDataAssetSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGSaveAssetElement_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSaveDataAssetSettings(); \
	friend struct ::Z_Construct_UClass_UPCGSaveDataAssetSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSaveDataAssetSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSaveDataAssetSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSaveDataAssetSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGSaveDataAssetSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGSaveAssetElement_h_45_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSaveDataAssetSettings(UPCGSaveDataAssetSettings&&) = delete; \
	UPCGSaveDataAssetSettings(const UPCGSaveDataAssetSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSaveDataAssetSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSaveDataAssetSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGSaveDataAssetSettings) \
	PCG_API virtual ~UPCGSaveDataAssetSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGSaveAssetElement_h_42_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGSaveAssetElement_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGSaveAssetElement_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGSaveAssetElement_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSaveDataAssetSettings;

// ********** End Class UPCGSaveDataAssetSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGSaveAssetElement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
