// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataRegistryFactory.h"

#ifdef DATAREGISTRYEDITOR_DataRegistryFactory_generated_h
#error "DataRegistryFactory.generated.h already included, missing '#pragma once' in DataRegistryFactory.h"
#endif
#define DATAREGISTRYEDITOR_DataRegistryFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataRegistryFactory *****************************************************
struct Z_Construct_UClass_UDataRegistryFactory_Statics;
DATAREGISTRYEDITOR_API UClass* Z_Construct_UClass_UDataRegistryFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistryEditor_Private_DataRegistryFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUDataRegistryFactory(); \
	friend struct ::Z_Construct_UClass_UDataRegistryFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAREGISTRYEDITOR_API UClass* ::Z_Construct_UClass_UDataRegistryFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataRegistryFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataRegistryEditor"), Z_Construct_UClass_UDataRegistryFactory_NoRegister) \
	DECLARE_SERIALIZER(UDataRegistryFactory)


#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistryEditor_Private_DataRegistryFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataRegistryFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataRegistryFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataRegistryFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataRegistryFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataRegistryFactory(UDataRegistryFactory&&) = delete; \
	UDataRegistryFactory(const UDataRegistryFactory&) = delete; \
	NO_API virtual ~UDataRegistryFactory();


#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistryEditor_Private_DataRegistryFactory_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistryEditor_Private_DataRegistryFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistryEditor_Private_DataRegistryFactory_h_13_INCLASS \
	FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistryEditor_Private_DataRegistryFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataRegistryFactory;

// ********** End Class UDataRegistryFactory *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistryEditor_Private_DataRegistryFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
