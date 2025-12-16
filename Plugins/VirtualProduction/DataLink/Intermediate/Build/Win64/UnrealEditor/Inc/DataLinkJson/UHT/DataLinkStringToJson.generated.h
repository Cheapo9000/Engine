// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLinkStringToJson.h"

#ifdef DATALINKJSON_DataLinkStringToJson_generated_h
#error "DataLinkStringToJson.generated.h already included, missing '#pragma once' in DataLinkStringToJson.h"
#endif
#define DATALINKJSON_DataLinkStringToJson_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataLinkStringToJson ****************************************************
struct Z_Construct_UClass_UDataLinkStringToJson_Statics;
DATALINKJSON_API UClass* Z_Construct_UClass_UDataLinkStringToJson_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkStringToJson_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkStringToJson(); \
	friend struct ::Z_Construct_UClass_UDataLinkStringToJson_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINKJSON_API UClass* ::Z_Construct_UClass_UDataLinkStringToJson_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkStringToJson, UDataLinkNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLinkJson"), Z_Construct_UClass_UDataLinkStringToJson_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkStringToJson)


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkStringToJson_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATALINKJSON_API UDataLinkStringToJson(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkStringToJson(UDataLinkStringToJson&&) = delete; \
	UDataLinkStringToJson(const UDataLinkStringToJson&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALINKJSON_API, UDataLinkStringToJson); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkStringToJson); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLinkStringToJson) \
	DATALINKJSON_API virtual ~UDataLinkStringToJson();


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkStringToJson_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkStringToJson_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkStringToJson_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkStringToJson_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkStringToJson;

// ********** End Class UDataLinkStringToJson ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkStringToJson_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
