// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLinkHttpSource.h"

#ifdef DATALINKHTTP_DataLinkHttpSource_generated_h
#error "DataLinkHttpSource.generated.h already included, missing '#pragma once' in DataLinkHttpSource.h"
#endif
#define DATALINKHTTP_DataLinkHttpSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataLinkHttpSource ******************************************************
struct Z_Construct_UClass_UDataLinkHttpSource_Statics;
DATALINKHTTP_API UClass* Z_Construct_UClass_UDataLinkHttpSource_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkHttp_Public_DataLinkHttpSource_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkHttpSource(); \
	friend struct ::Z_Construct_UClass_UDataLinkHttpSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINKHTTP_API UClass* ::Z_Construct_UClass_UDataLinkHttpSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkHttpSource, UDataLinkNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLinkHttp"), Z_Construct_UClass_UDataLinkHttpSource_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkHttpSource)


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkHttp_Public_DataLinkHttpSource_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATALINKHTTP_API UDataLinkHttpSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkHttpSource(UDataLinkHttpSource&&) = delete; \
	UDataLinkHttpSource(const UDataLinkHttpSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALINKHTTP_API, UDataLinkHttpSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkHttpSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLinkHttpSource) \
	DATALINKHTTP_API virtual ~UDataLinkHttpSource();


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkHttp_Public_DataLinkHttpSource_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkHttp_Public_DataLinkHttpSource_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkHttp_Public_DataLinkHttpSource_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkHttp_Public_DataLinkHttpSource_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkHttpSource;

// ********** End Class UDataLinkHttpSource ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkHttp_Public_DataLinkHttpSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
