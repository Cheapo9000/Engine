// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkFaceImporterFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINKFACEIMPORTER_LiveLinkFaceImporterFactory_generated_h
#error "LiveLinkFaceImporterFactory.generated.h already included, missing '#pragma once' in LiveLinkFaceImporterFactory.h"
#endif
#define LIVELINKFACEIMPORTER_LiveLinkFaceImporterFactory_generated_h

#define FID_Engine_Plugins_Experimental_LiveLinkFaceImporter_Source_LiveLinkFaceImporter_Private_LiveLinkFaceImporterFactory_h_14_INCLASS \
private: \
	static void StaticRegisterNativesULiveLinkFaceImporterFactory(); \
	friend struct Z_Construct_UClass_ULiveLinkFaceImporterFactory_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkFaceImporterFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkFaceImporter"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkFaceImporterFactory)


#define FID_Engine_Plugins_Experimental_LiveLinkFaceImporter_Source_LiveLinkFaceImporter_Private_LiveLinkFaceImporterFactory_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkFaceImporterFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkFaceImporterFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkFaceImporterFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkFaceImporterFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULiveLinkFaceImporterFactory(ULiveLinkFaceImporterFactory&&); \
	ULiveLinkFaceImporterFactory(const ULiveLinkFaceImporterFactory&); \
public: \
	NO_API virtual ~ULiveLinkFaceImporterFactory();


#define FID_Engine_Plugins_Experimental_LiveLinkFaceImporter_Source_LiveLinkFaceImporter_Private_LiveLinkFaceImporterFactory_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_LiveLinkFaceImporter_Source_LiveLinkFaceImporter_Private_LiveLinkFaceImporterFactory_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LiveLinkFaceImporter_Source_LiveLinkFaceImporter_Private_LiveLinkFaceImporterFactory_h_14_INCLASS \
	FID_Engine_Plugins_Experimental_LiveLinkFaceImporter_Source_LiveLinkFaceImporter_Private_LiveLinkFaceImporterFactory_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINKFACEIMPORTER_API UClass* StaticClass<class ULiveLinkFaceImporterFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LiveLinkFaceImporter_Source_LiveLinkFaceImporter_Private_LiveLinkFaceImporterFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
