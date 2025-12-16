// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeFbxAssetImportDataConverter.h"

#ifdef INTERCHANGEEDITOR_InterchangeFbxAssetImportDataConverter_generated_h
#error "InterchangeFbxAssetImportDataConverter.generated.h already included, missing '#pragma once' in InterchangeFbxAssetImportDataConverter.h"
#endif
#define INTERCHANGEEDITOR_InterchangeFbxAssetImportDataConverter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeFbxAssetImportDataConverter **********************************
struct Z_Construct_UClass_UInterchangeFbxAssetImportDataConverter_Statics;
INTERCHANGEEDITOR_API UClass* Z_Construct_UClass_UInterchangeFbxAssetImportDataConverter_NoRegister();

#define FID_Engine_Plugins_Interchange_Editor_Source_InterchangeEditor_Public_InterchangeFbxAssetImportDataConverter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeFbxAssetImportDataConverter(); \
	friend struct ::Z_Construct_UClass_UInterchangeFbxAssetImportDataConverter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEEDITOR_API UClass* ::Z_Construct_UClass_UInterchangeFbxAssetImportDataConverter_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeFbxAssetImportDataConverter, UInterchangeAssetImportDataConverterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeEditor"), Z_Construct_UClass_UInterchangeFbxAssetImportDataConverter_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeFbxAssetImportDataConverter)


#define FID_Engine_Plugins_Interchange_Editor_Source_InterchangeEditor_Public_InterchangeFbxAssetImportDataConverter_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEEDITOR_API UInterchangeFbxAssetImportDataConverter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeFbxAssetImportDataConverter(UInterchangeFbxAssetImportDataConverter&&) = delete; \
	UInterchangeFbxAssetImportDataConverter(const UInterchangeFbxAssetImportDataConverter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEEDITOR_API, UInterchangeFbxAssetImportDataConverter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeFbxAssetImportDataConverter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeFbxAssetImportDataConverter) \
	INTERCHANGEEDITOR_API virtual ~UInterchangeFbxAssetImportDataConverter();


#define FID_Engine_Plugins_Interchange_Editor_Source_InterchangeEditor_Public_InterchangeFbxAssetImportDataConverter_h_14_PROLOG
#define FID_Engine_Plugins_Interchange_Editor_Source_InterchangeEditor_Public_InterchangeFbxAssetImportDataConverter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Editor_Source_InterchangeEditor_Public_InterchangeFbxAssetImportDataConverter_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Editor_Source_InterchangeEditor_Public_InterchangeFbxAssetImportDataConverter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeFbxAssetImportDataConverter;

// ********** End Class UInterchangeFbxAssetImportDataConverter ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Editor_Source_InterchangeEditor_Public_InterchangeFbxAssetImportDataConverter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
