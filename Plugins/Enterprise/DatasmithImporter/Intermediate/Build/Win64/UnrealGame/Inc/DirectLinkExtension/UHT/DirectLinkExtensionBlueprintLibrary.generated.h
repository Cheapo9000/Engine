// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DirectLinkExtensionBlueprintLibrary.h"

#ifdef DIRECTLINKEXTENSION_DirectLinkExtensionBlueprintLibrary_generated_h
#error "DirectLinkExtensionBlueprintLibrary.generated.h already included, missing '#pragma once' in DirectLinkExtensionBlueprintLibrary.h"
#endif
#define DIRECTLINKEXTENSION_DirectLinkExtensionBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDirectLinkExtensionBlueprintLibrary *************************************
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DirectLinkExtension_Public_DirectLinkExtensionBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execParseDirectLinkSourceUri); \
	DECLARE_FUNCTION(execGetAvailableDirectLinkSourcesUri);


struct Z_Construct_UClass_UDirectLinkExtensionBlueprintLibrary_Statics;
DIRECTLINKEXTENSION_API UClass* Z_Construct_UClass_UDirectLinkExtensionBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DirectLinkExtension_Public_DirectLinkExtensionBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDirectLinkExtensionBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UDirectLinkExtensionBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DIRECTLINKEXTENSION_API UClass* ::Z_Construct_UClass_UDirectLinkExtensionBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UDirectLinkExtensionBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DirectLinkExtension"), Z_Construct_UClass_UDirectLinkExtensionBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UDirectLinkExtensionBlueprintLibrary)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DirectLinkExtension_Public_DirectLinkExtensionBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DIRECTLINKEXTENSION_API UDirectLinkExtensionBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDirectLinkExtensionBlueprintLibrary(UDirectLinkExtensionBlueprintLibrary&&) = delete; \
	UDirectLinkExtensionBlueprintLibrary(const UDirectLinkExtensionBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DIRECTLINKEXTENSION_API, UDirectLinkExtensionBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDirectLinkExtensionBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDirectLinkExtensionBlueprintLibrary) \
	DIRECTLINKEXTENSION_API virtual ~UDirectLinkExtensionBlueprintLibrary();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DirectLinkExtension_Public_DirectLinkExtensionBlueprintLibrary_h_11_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DirectLinkExtension_Public_DirectLinkExtensionBlueprintLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DirectLinkExtension_Public_DirectLinkExtensionBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DirectLinkExtension_Public_DirectLinkExtensionBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DirectLinkExtension_Public_DirectLinkExtensionBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDirectLinkExtensionBlueprintLibrary;

// ********** End Class UDirectLinkExtensionBlueprintLibrary ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DirectLinkExtension_Public_DirectLinkExtensionBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
