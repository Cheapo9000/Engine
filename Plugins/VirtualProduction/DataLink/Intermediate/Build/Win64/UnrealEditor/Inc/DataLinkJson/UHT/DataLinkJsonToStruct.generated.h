// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLinkJsonToStruct.h"

#ifdef DATALINKJSON_DataLinkJsonToStruct_generated_h
#error "DataLinkJsonToStruct.generated.h already included, missing '#pragma once' in DataLinkJsonToStruct.h"
#endif
#define DATALINKJSON_DataLinkJsonToStruct_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDataLinkJsonStructMappingConfig **********************************
struct Z_Construct_UScriptStruct_FDataLinkJsonStructMappingConfig_Statics;
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkJsonToStruct_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataLinkJsonStructMappingConfig_Statics; \
	DATALINKJSON_API static class UScriptStruct* StaticStruct();


struct FDataLinkJsonStructMappingConfig;
// ********** End ScriptStruct FDataLinkJsonStructMappingConfig ************************************

// ********** Begin Class UDataLinkJsonToStruct ****************************************************
struct Z_Construct_UClass_UDataLinkJsonToStruct_Statics;
DATALINKJSON_API UClass* Z_Construct_UClass_UDataLinkJsonToStruct_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkJsonToStruct_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkJsonToStruct(); \
	friend struct ::Z_Construct_UClass_UDataLinkJsonToStruct_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINKJSON_API UClass* ::Z_Construct_UClass_UDataLinkJsonToStruct_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkJsonToStruct, UDataLinkNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLinkJson"), Z_Construct_UClass_UDataLinkJsonToStruct_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkJsonToStruct)


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkJsonToStruct_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATALINKJSON_API UDataLinkJsonToStruct(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkJsonToStruct(UDataLinkJsonToStruct&&) = delete; \
	UDataLinkJsonToStruct(const UDataLinkJsonToStruct&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALINKJSON_API, UDataLinkJsonToStruct); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkJsonToStruct); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLinkJsonToStruct) \
	DATALINKJSON_API virtual ~UDataLinkJsonToStruct();


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkJsonToStruct_h_29_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkJsonToStruct_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkJsonToStruct_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkJsonToStruct_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkJsonToStruct;

// ********** End Class UDataLinkJsonToStruct ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkJsonToStruct_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
