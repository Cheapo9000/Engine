// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLinkJsonFromStruct.h"

#ifdef DATALINKJSON_DataLinkJsonFromStruct_generated_h
#error "DataLinkJsonFromStruct.generated.h already included, missing '#pragma once' in DataLinkJsonFromStruct.h"
#endif
#define DATALINKJSON_DataLinkJsonFromStruct_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataLinkJsonFromStruct **************************************************
struct Z_Construct_UClass_UDataLinkJsonFromStruct_Statics;
DATALINKJSON_API UClass* Z_Construct_UClass_UDataLinkJsonFromStruct_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkJsonFromStruct_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkJsonFromStruct(); \
	friend struct ::Z_Construct_UClass_UDataLinkJsonFromStruct_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINKJSON_API UClass* ::Z_Construct_UClass_UDataLinkJsonFromStruct_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkJsonFromStruct, UDataLinkNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLinkJson"), Z_Construct_UClass_UDataLinkJsonFromStruct_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkJsonFromStruct)


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkJsonFromStruct_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATALINKJSON_API UDataLinkJsonFromStruct(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkJsonFromStruct(UDataLinkJsonFromStruct&&) = delete; \
	UDataLinkJsonFromStruct(const UDataLinkJsonFromStruct&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALINKJSON_API, UDataLinkJsonFromStruct); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkJsonFromStruct); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLinkJsonFromStruct) \
	DATALINKJSON_API virtual ~UDataLinkJsonFromStruct();


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkJsonFromStruct_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkJsonFromStruct_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkJsonFromStruct_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkJsonFromStruct_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkJsonFromStruct;

// ********** End Class UDataLinkJsonFromStruct ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkJsonFromStruct_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
