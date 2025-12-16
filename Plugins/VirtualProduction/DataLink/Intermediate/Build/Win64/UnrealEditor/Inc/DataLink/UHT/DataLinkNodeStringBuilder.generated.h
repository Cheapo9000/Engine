// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/String/DataLinkNodeStringBuilder.h"

#ifdef DATALINK_DataLinkNodeStringBuilder_generated_h
#error "DataLinkNodeStringBuilder.generated.h already included, missing '#pragma once' in DataLinkNodeStringBuilder.h"
#endif
#define DATALINK_DataLinkNodeStringBuilder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataLinkNodeStringBuilder ***********************************************
struct Z_Construct_UClass_UDataLinkNodeStringBuilder_Statics;
DATALINK_API UClass* Z_Construct_UClass_UDataLinkNodeStringBuilder_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_String_DataLinkNodeStringBuilder_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkNodeStringBuilder(); \
	friend struct ::Z_Construct_UClass_UDataLinkNodeStringBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINK_API UClass* ::Z_Construct_UClass_UDataLinkNodeStringBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkNodeStringBuilder, UDataLinkNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLink"), Z_Construct_UClass_UDataLinkNodeStringBuilder_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkNodeStringBuilder)


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_String_DataLinkNodeStringBuilder_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATALINK_API UDataLinkNodeStringBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkNodeStringBuilder(UDataLinkNodeStringBuilder&&) = delete; \
	UDataLinkNodeStringBuilder(const UDataLinkNodeStringBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALINK_API, UDataLinkNodeStringBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkNodeStringBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLinkNodeStringBuilder) \
	DATALINK_API virtual ~UDataLinkNodeStringBuilder();


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_String_DataLinkNodeStringBuilder_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_String_DataLinkNodeStringBuilder_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_String_DataLinkNodeStringBuilder_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_String_DataLinkNodeStringBuilder_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkNodeStringBuilder;

// ********** End Class UDataLinkNodeStringBuilder *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_String_DataLinkNodeStringBuilder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
