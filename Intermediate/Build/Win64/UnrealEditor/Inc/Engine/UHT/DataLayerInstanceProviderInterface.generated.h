// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/DataLayer/DataLayerInstanceProviderInterface.h"

#ifdef ENGINE_DataLayerInstanceProviderInterface_generated_h
#error "DataLayerInstanceProviderInterface.generated.h already included, missing '#pragma once' in DataLayerInstanceProviderInterface.h"
#endif
#define ENGINE_DataLayerInstanceProviderInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UDataLayerInstanceProvider *******************************************
struct Z_Construct_UClass_UDataLayerInstanceProvider_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstanceProvider_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceProviderInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDataLayerInstanceProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLayerInstanceProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDataLayerInstanceProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLayerInstanceProvider); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLayerInstanceProvider(UDataLayerInstanceProvider&&) = delete; \
	UDataLayerInstanceProvider(const UDataLayerInstanceProvider&) = delete; \
	virtual ~UDataLayerInstanceProvider() = default;


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceProviderInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDataLayerInstanceProvider(); \
	friend struct ::Z_Construct_UClass_UDataLayerInstanceProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDataLayerInstanceProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLayerInstanceProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDataLayerInstanceProvider_NoRegister) \
	DECLARE_SERIALIZER(UDataLayerInstanceProvider)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceProviderInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceProviderInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceProviderInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceProviderInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IDataLayerInstanceProvider() {} \
public: \
	typedef UDataLayerInstanceProvider UClassType; \
	typedef IDataLayerInstanceProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceProviderInterface_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceProviderInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceProviderInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLayerInstanceProvider;

// ********** End Interface UDataLayerInstanceProvider *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceProviderInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
