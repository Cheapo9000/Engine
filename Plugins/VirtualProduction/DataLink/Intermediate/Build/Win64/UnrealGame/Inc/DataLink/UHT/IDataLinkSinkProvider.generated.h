// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IDataLinkSinkProvider.h"

#ifdef DATALINK_IDataLinkSinkProvider_generated_h
#error "IDataLinkSinkProvider.generated.h already included, missing '#pragma once' in IDataLinkSinkProvider.h"
#endif
#define DATALINK_IDataLinkSinkProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataLinkSinkObject;

// ********** Begin Interface UDataLinkSinkProvider ************************************************
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_IDataLinkSinkProvider_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual const UDataLinkSinkObject* GetSinkObject_Implementation() const { return NULL; }; \
	DECLARE_FUNCTION(execGetSinkObject);


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_IDataLinkSinkProvider_h_14_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UDataLinkSinkProvider_Statics;
DATALINK_API UClass* Z_Construct_UClass_UDataLinkSinkProvider_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_IDataLinkSinkProvider_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATALINK_API UDataLinkSinkProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkSinkProvider(UDataLinkSinkProvider&&) = delete; \
	UDataLinkSinkProvider(const UDataLinkSinkProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALINK_API, UDataLinkSinkProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkSinkProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLinkSinkProvider) \
	virtual ~UDataLinkSinkProvider() = default;


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_IDataLinkSinkProvider_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDataLinkSinkProvider(); \
	friend struct ::Z_Construct_UClass_UDataLinkSinkProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINK_API UClass* ::Z_Construct_UClass_UDataLinkSinkProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkSinkProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataLink"), Z_Construct_UClass_UDataLinkSinkProvider_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkSinkProvider)


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_IDataLinkSinkProvider_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_IDataLinkSinkProvider_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_IDataLinkSinkProvider_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_IDataLinkSinkProvider_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDataLinkSinkProvider() {} \
public: \
	typedef UDataLinkSinkProvider UClassType; \
	typedef IDataLinkSinkProvider ThisClass; \
	DATALINK_API static const UDataLinkSinkObject* Execute_GetSinkObject(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_IDataLinkSinkProvider_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_IDataLinkSinkProvider_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_IDataLinkSinkProvider_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_IDataLinkSinkProvider_h_14_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_IDataLinkSinkProvider_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkSinkProvider;

// ********** End Interface UDataLinkSinkProvider **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_IDataLinkSinkProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
