// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/DataLinkConstant.h"

#ifdef DATALINK_DataLinkConstant_generated_h
#error "DataLinkConstant.generated.h already included, missing '#pragma once' in DataLinkConstant.h"
#endif
#define DATALINK_DataLinkConstant_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataLinkConstant ********************************************************
struct Z_Construct_UClass_UDataLinkConstant_Statics;
DATALINK_API UClass* Z_Construct_UClass_UDataLinkConstant_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_DataLinkConstant_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkConstant(); \
	friend struct ::Z_Construct_UClass_UDataLinkConstant_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINK_API UClass* ::Z_Construct_UClass_UDataLinkConstant_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkConstant, UDataLinkNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLink"), Z_Construct_UClass_UDataLinkConstant_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkConstant)


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_DataLinkConstant_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATALINK_API UDataLinkConstant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkConstant(UDataLinkConstant&&) = delete; \
	UDataLinkConstant(const UDataLinkConstant&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALINK_API, UDataLinkConstant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkConstant); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLinkConstant) \
	DATALINK_API virtual ~UDataLinkConstant();


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_DataLinkConstant_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_DataLinkConstant_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_DataLinkConstant_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_DataLinkConstant_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkConstant;

// ********** End Class UDataLinkConstant **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_DataLinkConstant_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
