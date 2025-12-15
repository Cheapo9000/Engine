// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLayer/DataLayerFactory.h"

#ifdef DATALAYEREDITOR_DataLayerFactory_generated_h
#error "DataLayerFactory.generated.h already included, missing '#pragma once' in DataLayerFactory.h"
#endif
#define DATALAYEREDITOR_DataLayerFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataLayerFactory ********************************************************
struct Z_Construct_UClass_UDataLayerFactory_Statics;
DATALAYEREDITOR_API UClass* Z_Construct_UClass_UDataLayerFactory_NoRegister();

#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerFactory_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUDataLayerFactory(); \
	friend struct ::Z_Construct_UClass_UDataLayerFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALAYEREDITOR_API UClass* ::Z_Construct_UClass_UDataLayerFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLayerFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLayerEditor"), Z_Construct_UClass_UDataLayerFactory_NoRegister) \
	DECLARE_SERIALIZER(UDataLayerFactory)


#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerFactory_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATALAYEREDITOR_API UDataLayerFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLayerFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALAYEREDITOR_API, UDataLayerFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLayerFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLayerFactory(UDataLayerFactory&&) = delete; \
	UDataLayerFactory(const UDataLayerFactory&) = delete; \
	DATALAYEREDITOR_API virtual ~UDataLayerFactory();


#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerFactory_h_18_PROLOG
#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerFactory_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerFactory_h_21_INCLASS \
	FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerFactory_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLayerFactory;

// ********** End Class UDataLayerFactory **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
