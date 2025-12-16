// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLinkJsonStructMapping.h"

#ifdef DATALINKJSON_DataLinkJsonStructMapping_generated_h
#error "DataLinkJsonStructMapping.generated.h already included, missing '#pragma once' in DataLinkJsonStructMapping.h"
#endif
#define DATALINKJSON_DataLinkJsonStructMapping_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataLinkJsonStructMapping ***********************************************
struct Z_Construct_UClass_UDataLinkJsonStructMapping_Statics;
DATALINKJSON_API UClass* Z_Construct_UClass_UDataLinkJsonStructMapping_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkJsonStructMapping_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkJsonStructMapping(); \
	friend struct ::Z_Construct_UClass_UDataLinkJsonStructMapping_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINKJSON_API UClass* ::Z_Construct_UClass_UDataLinkJsonStructMapping_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkJsonStructMapping, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataLinkJson"), Z_Construct_UClass_UDataLinkJsonStructMapping_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkJsonStructMapping)


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkJsonStructMapping_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATALINKJSON_API UDataLinkJsonStructMapping(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkJsonStructMapping(UDataLinkJsonStructMapping&&) = delete; \
	UDataLinkJsonStructMapping(const UDataLinkJsonStructMapping&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALINKJSON_API, UDataLinkJsonStructMapping); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkJsonStructMapping); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLinkJsonStructMapping) \
	DATALINKJSON_API virtual ~UDataLinkJsonStructMapping();


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkJsonStructMapping_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkJsonStructMapping_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkJsonStructMapping_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkJsonStructMapping_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkJsonStructMapping;

// ********** End Class UDataLinkJsonStructMapping *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkJson_Public_DataLinkJsonStructMapping_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
