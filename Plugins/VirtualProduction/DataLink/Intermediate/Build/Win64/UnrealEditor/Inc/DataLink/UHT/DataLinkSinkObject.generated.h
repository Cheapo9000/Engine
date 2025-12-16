// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLinkSinkObject.h"

#ifdef DATALINK_DataLinkSinkObject_generated_h
#error "DataLinkSinkObject.generated.h already included, missing '#pragma once' in DataLinkSinkObject.h"
#endif
#define DATALINK_DataLinkSinkObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataLinkSinkObject ******************************************************
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkSinkObject_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetSink);


struct Z_Construct_UClass_UDataLinkSinkObject_Statics;
DATALINK_API UClass* Z_Construct_UClass_UDataLinkSinkObject_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkSinkObject_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkSinkObject(); \
	friend struct ::Z_Construct_UClass_UDataLinkSinkObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINK_API UClass* ::Z_Construct_UClass_UDataLinkSinkObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkSinkObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLink"), Z_Construct_UClass_UDataLinkSinkObject_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkSinkObject) \
	virtual UObject* _getUObject() const override { return const_cast<UDataLinkSinkObject*>(this); }


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkSinkObject_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkSinkObject(UDataLinkSinkObject&&) = delete; \
	UDataLinkSinkObject(const UDataLinkSinkObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALINK_API, UDataLinkSinkObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkSinkObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataLinkSinkObject) \
	DATALINK_API virtual ~UDataLinkSinkObject();


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkSinkObject_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkSinkObject_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkSinkObject_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkSinkObject_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkSinkObject_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkSinkObject;

// ********** End Class UDataLinkSinkObject ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkSinkObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
