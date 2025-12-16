// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkFaceImporterFactory.h"

#ifdef LIVELINKFACEIMPORTER_LiveLinkFaceImporterFactory_generated_h
#error "LiveLinkFaceImporterFactory.generated.h already included, missing '#pragma once' in LiveLinkFaceImporterFactory.h"
#endif
#define LIVELINKFACEIMPORTER_LiveLinkFaceImporterFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkFaceImporterFactory *********************************************
struct Z_Construct_UClass_ULiveLinkFaceImporterFactory_Statics;
LIVELINKFACEIMPORTER_API UClass* Z_Construct_UClass_ULiveLinkFaceImporterFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_LiveLinkFaceImporter_Source_LiveLinkFaceImporter_Private_LiveLinkFaceImporterFactory_h_14_INCLASS \
private: \
	static void StaticRegisterNativesULiveLinkFaceImporterFactory(); \
	friend struct ::Z_Construct_UClass_ULiveLinkFaceImporterFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKFACEIMPORTER_API UClass* ::Z_Construct_UClass_ULiveLinkFaceImporterFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkFaceImporterFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkFaceImporter"), Z_Construct_UClass_ULiveLinkFaceImporterFactory_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkFaceImporterFactory)


#define FID_Engine_Plugins_Experimental_LiveLinkFaceImporter_Source_LiveLinkFaceImporter_Private_LiveLinkFaceImporterFactory_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkFaceImporterFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkFaceImporterFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkFaceImporterFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkFaceImporterFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkFaceImporterFactory(ULiveLinkFaceImporterFactory&&) = delete; \
	ULiveLinkFaceImporterFactory(const ULiveLinkFaceImporterFactory&) = delete; \
	NO_API virtual ~ULiveLinkFaceImporterFactory();


#define FID_Engine_Plugins_Experimental_LiveLinkFaceImporter_Source_LiveLinkFaceImporter_Private_LiveLinkFaceImporterFactory_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_LiveLinkFaceImporter_Source_LiveLinkFaceImporter_Private_LiveLinkFaceImporterFactory_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LiveLinkFaceImporter_Source_LiveLinkFaceImporter_Private_LiveLinkFaceImporterFactory_h_14_INCLASS \
	FID_Engine_Plugins_Experimental_LiveLinkFaceImporter_Source_LiveLinkFaceImporter_Private_LiveLinkFaceImporterFactory_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkFaceImporterFactory;

// ********** End Class ULiveLinkFaceImporterFactory ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LiveLinkFaceImporter_Source_LiveLinkFaceImporter_Private_LiveLinkFaceImporterFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
