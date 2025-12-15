// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeSceneImportAsset.h"

#ifdef INTERCHANGEENGINE_InterchangeSceneImportAsset_generated_h
#error "InterchangeSceneImportAsset.generated.h already included, missing '#pragma once' in InterchangeSceneImportAsset.h"
#endif
#define INTERCHANGEENGINE_InterchangeSceneImportAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeSceneImportAsset *********************************************
struct Z_Construct_UClass_UInterchangeSceneImportAsset_Statics;
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeSceneImportAsset_NoRegister();

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeSceneImportAsset_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSceneImportAsset(); \
	friend struct ::Z_Construct_UClass_UInterchangeSceneImportAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEENGINE_API UClass* ::Z_Construct_UClass_UInterchangeSceneImportAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeSceneImportAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeEngine"), Z_Construct_UClass_UInterchangeSceneImportAsset_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeSceneImportAsset) \
	virtual UObject* _getUObject() const override { return const_cast<UInterchangeSceneImportAsset*>(this); }


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeSceneImportAsset_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEENGINE_API UInterchangeSceneImportAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeSceneImportAsset(UInterchangeSceneImportAsset&&) = delete; \
	UInterchangeSceneImportAsset(const UInterchangeSceneImportAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEENGINE_API, UInterchangeSceneImportAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSceneImportAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeSceneImportAsset)


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeSceneImportAsset_h_20_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeSceneImportAsset_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeSceneImportAsset_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeSceneImportAsset_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeSceneImportAsset;

// ********** End Class UInterchangeSceneImportAsset ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeSceneImportAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
