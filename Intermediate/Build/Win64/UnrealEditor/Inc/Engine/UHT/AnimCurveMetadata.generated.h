// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimCurveMetadata.h"

#ifdef ENGINE_AnimCurveMetadata_generated_h
#error "AnimCurveMetadata.generated.h already included, missing '#pragma once' in AnimCurveMetadata.h"
#endif
#define ENGINE_AnimCurveMetadata_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimCurveType ****************************************************
struct Z_Construct_UScriptStruct_FAnimCurveType_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveMetadata_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimCurveType_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimCurveType;
// ********** End ScriptStruct FAnimCurveType ******************************************************

// ********** Begin ScriptStruct FCurveMetaData ****************************************************
struct Z_Construct_UScriptStruct_FCurveMetaData_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveMetadata_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCurveMetaData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCurveMetaData;
// ********** End ScriptStruct FCurveMetaData ******************************************************

// ********** Begin Interface UInterface_AnimCurveMetaData *****************************************
struct Z_Construct_UClass_UInterface_AnimCurveMetaData_Statics;
ENGINE_API UClass* Z_Construct_UClass_UInterface_AnimCurveMetaData_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveMetadata_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterface_AnimCurveMetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterface_AnimCurveMetaData(UInterface_AnimCurveMetaData&&) = delete; \
	UInterface_AnimCurveMetaData(const UInterface_AnimCurveMetaData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterface_AnimCurveMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_AnimCurveMetaData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_AnimCurveMetaData) \
	virtual ~UInterface_AnimCurveMetaData() = default;


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveMetadata_h_64_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterface_AnimCurveMetaData(); \
	friend struct ::Z_Construct_UClass_UInterface_AnimCurveMetaData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UInterface_AnimCurveMetaData_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterface_AnimCurveMetaData, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UInterface_AnimCurveMetaData_NoRegister) \
	DECLARE_SERIALIZER(UInterface_AnimCurveMetaData)


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveMetadata_h_64_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveMetadata_h_64_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveMetadata_h_64_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveMetadata_h_64_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterface_AnimCurveMetaData() {} \
public: \
	typedef UInterface_AnimCurveMetaData UClassType; \
	typedef IInterface_AnimCurveMetaData ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveMetadata_h_61_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveMetadata_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveMetadata_h_64_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterface_AnimCurveMetaData;

// ********** End Interface UInterface_AnimCurveMetaData *******************************************

// ********** Begin Class UAnimCurveMetaData *******************************************************
struct Z_Construct_UClass_UAnimCurveMetaData_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimCurveMetaData_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveMetadata_h_201_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimCurveMetaData(); \
	friend struct ::Z_Construct_UClass_UAnimCurveMetaData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimCurveMetaData_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimCurveMetaData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimCurveMetaData_NoRegister) \
	DECLARE_SERIALIZER(UAnimCurveMetaData) \
	virtual UObject* _getUObject() const override { return const_cast<UAnimCurveMetaData*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveMetadata_h_201_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimCurveMetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimCurveMetaData(UAnimCurveMetaData&&) = delete; \
	UAnimCurveMetaData(const UAnimCurveMetaData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimCurveMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimCurveMetaData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimCurveMetaData) \
	ENGINE_API virtual ~UAnimCurveMetaData();


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveMetadata_h_198_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveMetadata_h_201_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveMetadata_h_201_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveMetadata_h_201_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimCurveMetaData;

// ********** End Class UAnimCurveMetaData *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveMetadata_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
