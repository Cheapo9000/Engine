// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLinkNodeHttpSettingsBuilder.h"

#ifdef DATALINKHTTP_DataLinkNodeHttpSettingsBuilder_generated_h
#error "DataLinkNodeHttpSettingsBuilder.generated.h already included, missing '#pragma once' in DataLinkNodeHttpSettingsBuilder.h"
#endif
#define DATALINKHTTP_DataLinkNodeHttpSettingsBuilder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataLinkNodeHttpSettingsBuilder *****************************************
struct Z_Construct_UClass_UDataLinkNodeHttpSettingsBuilder_Statics;
DATALINKHTTP_API UClass* Z_Construct_UClass_UDataLinkNodeHttpSettingsBuilder_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkHttp_Public_DataLinkNodeHttpSettingsBuilder_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkNodeHttpSettingsBuilder(); \
	friend struct ::Z_Construct_UClass_UDataLinkNodeHttpSettingsBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINKHTTP_API UClass* ::Z_Construct_UClass_UDataLinkNodeHttpSettingsBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkNodeHttpSettingsBuilder, UDataLinkNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLinkHttp"), Z_Construct_UClass_UDataLinkNodeHttpSettingsBuilder_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkNodeHttpSettingsBuilder)


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkHttp_Public_DataLinkNodeHttpSettingsBuilder_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATALINKHTTP_API UDataLinkNodeHttpSettingsBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkNodeHttpSettingsBuilder(UDataLinkNodeHttpSettingsBuilder&&) = delete; \
	UDataLinkNodeHttpSettingsBuilder(const UDataLinkNodeHttpSettingsBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALINKHTTP_API, UDataLinkNodeHttpSettingsBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkNodeHttpSettingsBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLinkNodeHttpSettingsBuilder) \
	DATALINKHTTP_API virtual ~UDataLinkNodeHttpSettingsBuilder();


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkHttp_Public_DataLinkNodeHttpSettingsBuilder_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkHttp_Public_DataLinkNodeHttpSettingsBuilder_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkHttp_Public_DataLinkNodeHttpSettingsBuilder_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkHttp_Public_DataLinkNodeHttpSettingsBuilder_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkNodeHttpSettingsBuilder;

// ********** End Class UDataLinkNodeHttpSettingsBuilder *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkHttp_Public_DataLinkNodeHttpSettingsBuilder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
