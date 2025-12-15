// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Interface_AssetUserData.h"

#ifdef ENGINE_Interface_AssetUserData_generated_h
#error "Interface_AssetUserData.generated.h already included, missing '#pragma once' in Interface_AssetUserData.h"
#endif
#define ENGINE_Interface_AssetUserData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAssetUserData;
class UClass;

// ********** Begin Interface UInterface_AssetUserData *********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execAddAssetUserDataOfClass); \
	DECLARE_FUNCTION(execHasAssetUserDataOfClass); \
	DECLARE_FUNCTION(execGetAssetUserDataOfClass);


struct Z_Construct_UClass_UInterface_AssetUserData_Statics;
ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterface_AssetUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_AssetUserData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterface_AssetUserData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_AssetUserData); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterface_AssetUserData(UInterface_AssetUserData&&) = delete; \
	UInterface_AssetUserData(const UInterface_AssetUserData&) = delete; \
	virtual ~UInterface_AssetUserData() = default;


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterface_AssetUserData(); \
	friend struct ::Z_Construct_UClass_UInterface_AssetUserData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UInterface_AssetUserData_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterface_AssetUserData, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UInterface_AssetUserData_NoRegister) \
	DECLARE_SERIALIZER(UInterface_AssetUserData)


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IInterface_AssetUserData() {} \
public: \
	typedef UInterface_AssetUserData UClassType; \
	typedef IInterface_AssetUserData ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_16_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterface_AssetUserData;

// ********** End Interface UInterface_AssetUserData ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
