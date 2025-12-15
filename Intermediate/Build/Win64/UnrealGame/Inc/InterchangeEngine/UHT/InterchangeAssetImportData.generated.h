// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeAssetImportData.h"

#ifdef INTERCHANGEENGINE_InterchangeAssetImportData_generated_h
#error "InterchangeAssetImportData.generated.h already included, missing '#pragma once' in InterchangeAssetImportData.h"
#endif
#define INTERCHANGEENGINE_InterchangeAssetImportData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterchangeBaseNode;
class UInterchangeBaseNodeContainer;
class UInterchangeFactoryBaseNode;
class UInterchangeTranslatorSettings;
class UObject;

// ********** Begin Class UInterchangeAssetImportData **********************************************
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTranslatorSettings); \
	DECLARE_FUNCTION(execGetTranslatorSettings); \
	DECLARE_FUNCTION(execGetStoredFactoryNode); \
	DECLARE_FUNCTION(execGetStoredNode); \
	DECLARE_FUNCTION(execSetPipelines); \
	DECLARE_FUNCTION(execGetNumberOfPipelines); \
	DECLARE_FUNCTION(execGetPipelines); \
	DECLARE_FUNCTION(execSetNodeContainer); \
	DECLARE_FUNCTION(execGetNodeContainer); \
	DECLARE_FUNCTION(execScriptExtractDisplayLabels); \
	DECLARE_FUNCTION(execScriptExtractFilenames); \
	DECLARE_FUNCTION(execScriptGetFirstFilename);


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_22_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeAssetImportData, INTERCHANGEENGINE_API)


struct Z_Construct_UClass_UInterchangeAssetImportData_Statics;
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeAssetImportData_NoRegister();

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeAssetImportData(); \
	friend struct ::Z_Construct_UClass_UInterchangeAssetImportData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEENGINE_API UClass* ::Z_Construct_UClass_UInterchangeAssetImportData_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeAssetImportData, UAssetImportData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeEngine"), Z_Construct_UClass_UInterchangeAssetImportData_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeAssetImportData) \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_22_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEENGINE_API UInterchangeAssetImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeAssetImportData(UInterchangeAssetImportData&&) = delete; \
	UInterchangeAssetImportData(const UInterchangeAssetImportData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEENGINE_API, UInterchangeAssetImportData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeAssetImportData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeAssetImportData) \
	INTERCHANGEENGINE_API virtual ~UInterchangeAssetImportData();


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_19_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeAssetImportData;

// ********** End Class UInterchangeAssetImportData ************************************************

// ********** Begin Class UInterchangeAssetImportDataConverterBase *********************************
struct Z_Construct_UClass_UInterchangeAssetImportDataConverterBase_Statics;
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeAssetImportDataConverterBase_NoRegister();

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_215_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeAssetImportDataConverterBase(); \
	friend struct ::Z_Construct_UClass_UInterchangeAssetImportDataConverterBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEENGINE_API UClass* ::Z_Construct_UClass_UInterchangeAssetImportDataConverterBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeAssetImportDataConverterBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeEngine"), Z_Construct_UClass_UInterchangeAssetImportDataConverterBase_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeAssetImportDataConverterBase)


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_215_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEENGINE_API UInterchangeAssetImportDataConverterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeAssetImportDataConverterBase(UInterchangeAssetImportDataConverterBase&&) = delete; \
	UInterchangeAssetImportDataConverterBase(const UInterchangeAssetImportDataConverterBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEENGINE_API, UInterchangeAssetImportDataConverterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeAssetImportDataConverterBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeAssetImportDataConverterBase) \
	INTERCHANGEENGINE_API virtual ~UInterchangeAssetImportDataConverterBase();


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_212_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_215_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_215_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_215_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeAssetImportDataConverterBase;

// ********** End Class UInterchangeAssetImportDataConverterBase ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
