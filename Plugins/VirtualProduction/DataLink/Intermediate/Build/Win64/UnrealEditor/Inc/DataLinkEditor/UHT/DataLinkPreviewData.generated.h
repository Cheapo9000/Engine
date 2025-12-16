// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Preview/DataLinkPreviewData.h"

#ifdef DATALINKEDITOR_DataLinkPreviewData_generated_h
#error "DataLinkPreviewData.generated.h already included, missing '#pragma once' in DataLinkPreviewData.h"
#endif
#define DATALINKEDITOR_DataLinkPreviewData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataLinkPreviewData *****************************************************
struct Z_Construct_UClass_UDataLinkPreviewData_Statics;
DATALINKEDITOR_API UClass* Z_Construct_UClass_UDataLinkPreviewData_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Private_Preview_DataLinkPreviewData_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkPreviewData(); \
	friend struct ::Z_Construct_UClass_UDataLinkPreviewData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINKEDITOR_API UClass* ::Z_Construct_UClass_UDataLinkPreviewData_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkPreviewData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLinkEditor"), Z_Construct_UClass_UDataLinkPreviewData_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkPreviewData)


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Private_Preview_DataLinkPreviewData_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataLinkPreviewData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkPreviewData(UDataLinkPreviewData&&) = delete; \
	UDataLinkPreviewData(const UDataLinkPreviewData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataLinkPreviewData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkPreviewData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLinkPreviewData) \
	NO_API virtual ~UDataLinkPreviewData();


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Private_Preview_DataLinkPreviewData_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Private_Preview_DataLinkPreviewData_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Private_Preview_DataLinkPreviewData_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Private_Preview_DataLinkPreviewData_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkPreviewData;

// ********** End Class UDataLinkPreviewData *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Private_Preview_DataLinkPreviewData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
