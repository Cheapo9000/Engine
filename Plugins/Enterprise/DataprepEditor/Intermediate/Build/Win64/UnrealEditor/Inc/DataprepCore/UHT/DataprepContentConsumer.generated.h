// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataprepContentConsumer.h"

#ifdef DATAPREPCORE_DataprepContentConsumer_generated_h
#error "DataprepContentConsumer.generated.h already included, missing '#pragma once' in DataprepContentConsumer.h"
#endif
#define DATAPREPCORE_DataprepContentConsumer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataprepConsumerUserData ************************************************
struct Z_Construct_UClass_UDataprepConsumerUserData_Statics;
DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepConsumerUserData_NoRegister();

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepConsumerUserData(); \
	friend struct ::Z_Construct_UClass_UDataprepConsumerUserData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAPREPCORE_API UClass* ::Z_Construct_UClass_UDataprepConsumerUserData_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataprepConsumerUserData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataprepCore"), Z_Construct_UClass_UDataprepConsumerUserData_NoRegister) \
	DECLARE_SERIALIZER(UDataprepConsumerUserData)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepConsumerUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataprepConsumerUserData(UDataprepConsumerUserData&&) = delete; \
	UDataprepConsumerUserData(const UDataprepConsumerUserData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepConsumerUserData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepConsumerUserData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepConsumerUserData) \
	NO_API virtual ~UDataprepConsumerUserData();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_19_PROLOG
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataprepConsumerUserData;

// ********** End Class UDataprepConsumerUserData **************************************************

// ********** Begin Class UDataprepContentConsumer *************************************************
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTargetContentFolder); \
	DECLARE_FUNCTION(execSetTargetContentFolderAutomated); \
	DECLARE_FUNCTION(execSetTargetContentFolder); \
	DECLARE_FUNCTION(execGetLevelName); \
	DECLARE_FUNCTION(execSetLevelNameAutomated); \
	DECLARE_FUNCTION(execSetLevelName);


struct Z_Construct_UClass_UDataprepContentConsumer_Statics;
DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepContentConsumer_NoRegister();

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepContentConsumer(); \
	friend struct ::Z_Construct_UClass_UDataprepContentConsumer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAPREPCORE_API UClass* ::Z_Construct_UClass_UDataprepContentConsumer_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataprepContentConsumer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), Z_Construct_UClass_UDataprepContentConsumer_NoRegister) \
	DECLARE_SERIALIZER(UDataprepContentConsumer) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataprepContentConsumer(UDataprepContentConsumer&&) = delete; \
	UDataprepContentConsumer(const UDataprepContentConsumer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepContentConsumer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepContentConsumer); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UDataprepContentConsumer) \
	NO_API virtual ~UDataprepContentConsumer();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_106_PROLOG
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataprepContentConsumer;

// ********** End Class UDataprepContentConsumer ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
