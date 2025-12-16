// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PSDDocument.h"

#ifdef PSDIMPORTER_PSDDocument_generated_h
#error "PSDDocument.generated.h already included, missing '#pragma once' in PSDDocument.h"
#endif
#define PSDIMPORTER_PSDDocument_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPSDFileLayer;

// ********** Begin Class UPSDDocument *************************************************************
#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDDocument_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWereLayersResizedOnImport); \
	DECLARE_FUNCTION(execGetLayers); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetDocumentName);


struct Z_Construct_UClass_UPSDDocument_Statics;
PSDIMPORTER_API UClass* Z_Construct_UClass_UPSDDocument_NoRegister();

#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDDocument_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPSDDocument(); \
	friend struct ::Z_Construct_UClass_UPSDDocument_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PSDIMPORTER_API UClass* ::Z_Construct_UClass_UPSDDocument_NoRegister(); \
public: \
	DECLARE_CLASS2(UPSDDocument, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PSDImporter"), Z_Construct_UClass_UPSDDocument_NoRegister) \
	DECLARE_SERIALIZER(UPSDDocument)


#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDDocument_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPSDDocument(UPSDDocument&&) = delete; \
	UPSDDocument(const UPSDDocument&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PSDIMPORTER_API, UPSDDocument); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPSDDocument); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPSDDocument) \
	PSDIMPORTER_API virtual ~UPSDDocument();


#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDDocument_h_21_PROLOG
#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDDocument_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDDocument_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDDocument_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDDocument_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPSDDocument;

// ********** End Class UPSDDocument ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDDocument_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
