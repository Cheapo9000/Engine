// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Import/MetaHumanPackageFactory.h"

#ifdef METAHUMANSDKEDITOR_MetaHumanPackageFactory_generated_h
#error "MetaHumanPackageFactory.generated.h already included, missing '#pragma once' in MetaHumanPackageFactory.h"
#endif
#define METAHUMANSDKEDITOR_MetaHumanPackageFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMetaHumanPackageFactory *************************************************
struct Z_Construct_UClass_UMetaHumanPackageFactory_Statics;
METAHUMANSDKEDITOR_API UClass* Z_Construct_UClass_UMetaHumanPackageFactory_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Private_Import_MetaHumanPackageFactory_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUMetaHumanPackageFactory(); \
	friend struct ::Z_Construct_UClass_UMetaHumanPackageFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANSDKEDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanPackageFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanPackageFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanSDKEditor"), Z_Construct_UClass_UMetaHumanPackageFactory_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanPackageFactory)


#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Private_Import_MetaHumanPackageFactory_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanPackageFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanPackageFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanPackageFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanPackageFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanPackageFactory(UMetaHumanPackageFactory&&) = delete; \
	UMetaHumanPackageFactory(const UMetaHumanPackageFactory&) = delete; \
	NO_API virtual ~UMetaHumanPackageFactory();


#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Private_Import_MetaHumanPackageFactory_h_8_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Private_Import_MetaHumanPackageFactory_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Private_Import_MetaHumanPackageFactory_h_11_INCLASS \
	FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Private_Import_MetaHumanPackageFactory_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanPackageFactory;

// ********** End Class UMetaHumanPackageFactory ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Private_Import_MetaHumanPackageFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
