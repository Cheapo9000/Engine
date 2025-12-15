// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLayer/ExternalDataLayerFactory.h"

#ifdef DATALAYEREDITOR_ExternalDataLayerFactory_generated_h
#error "ExternalDataLayerFactory.generated.h already included, missing '#pragma once' in ExternalDataLayerFactory.h"
#endif
#define DATALAYEREDITOR_ExternalDataLayerFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UExternalDataLayerFactory ************************************************
struct Z_Construct_UClass_UExternalDataLayerFactory_Statics;
DATALAYEREDITOR_API UClass* Z_Construct_UClass_UExternalDataLayerFactory_NoRegister();

#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_ExternalDataLayerFactory_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUExternalDataLayerFactory(); \
	friend struct ::Z_Construct_UClass_UExternalDataLayerFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALAYEREDITOR_API UClass* ::Z_Construct_UClass_UExternalDataLayerFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UExternalDataLayerFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLayerEditor"), Z_Construct_UClass_UExternalDataLayerFactory_NoRegister) \
	DECLARE_SERIALIZER(UExternalDataLayerFactory)


#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_ExternalDataLayerFactory_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATALAYEREDITOR_API UExternalDataLayerFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExternalDataLayerFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALAYEREDITOR_API, UExternalDataLayerFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExternalDataLayerFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UExternalDataLayerFactory(UExternalDataLayerFactory&&) = delete; \
	UExternalDataLayerFactory(const UExternalDataLayerFactory&) = delete; \
	DATALAYEREDITOR_API virtual ~UExternalDataLayerFactory();


#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_ExternalDataLayerFactory_h_9_PROLOG
#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_ExternalDataLayerFactory_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_ExternalDataLayerFactory_h_12_INCLASS \
	FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_ExternalDataLayerFactory_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UExternalDataLayerFactory;

// ********** End Class UExternalDataLayerFactory **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_ExternalDataLayerFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
