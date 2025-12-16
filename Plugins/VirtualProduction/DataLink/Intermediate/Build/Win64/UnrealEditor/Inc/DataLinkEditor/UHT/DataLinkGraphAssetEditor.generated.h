// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLinkGraphAssetEditor.h"

#ifdef DATALINKEDITOR_DataLinkGraphAssetEditor_generated_h
#error "DataLinkGraphAssetEditor.generated.h already included, missing '#pragma once' in DataLinkGraphAssetEditor.h"
#endif
#define DATALINKEDITOR_DataLinkGraphAssetEditor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataLinkGraphAssetEditor ************************************************
struct Z_Construct_UClass_UDataLinkGraphAssetEditor_Statics;
DATALINKEDITOR_API UClass* Z_Construct_UClass_UDataLinkGraphAssetEditor_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Private_DataLinkGraphAssetEditor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkGraphAssetEditor(); \
	friend struct ::Z_Construct_UClass_UDataLinkGraphAssetEditor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINKEDITOR_API UClass* ::Z_Construct_UClass_UDataLinkGraphAssetEditor_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkGraphAssetEditor, UAssetEditor, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DataLinkEditor"), Z_Construct_UClass_UDataLinkGraphAssetEditor_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkGraphAssetEditor)


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Private_DataLinkGraphAssetEditor_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataLinkGraphAssetEditor(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkGraphAssetEditor(UDataLinkGraphAssetEditor&&) = delete; \
	UDataLinkGraphAssetEditor(const UDataLinkGraphAssetEditor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataLinkGraphAssetEditor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkGraphAssetEditor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataLinkGraphAssetEditor) \
	NO_API virtual ~UDataLinkGraphAssetEditor();


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Private_DataLinkGraphAssetEditor_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Private_DataLinkGraphAssetEditor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Private_DataLinkGraphAssetEditor_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Private_DataLinkGraphAssetEditor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkGraphAssetEditor;

// ********** End Class UDataLinkGraphAssetEditor **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEditor_Private_DataLinkGraphAssetEditor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
