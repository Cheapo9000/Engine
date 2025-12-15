// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/TransformProviderData.h"

#ifdef ENGINE_TransformProviderData_generated_h
#error "TransformProviderData.generated.h already included, missing '#pragma once' in TransformProviderData.h"
#endif
#define ENGINE_TransformProviderData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTransformProviderData ***************************************************
struct Z_Construct_UClass_UTransformProviderData_Statics;
ENGINE_API UClass* Z_Construct_UClass_UTransformProviderData_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_TransformProviderData_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransformProviderData(); \
	friend struct ::Z_Construct_UClass_UTransformProviderData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UTransformProviderData_NoRegister(); \
public: \
	DECLARE_CLASS2(UTransformProviderData, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UTransformProviderData_NoRegister) \
	DECLARE_SERIALIZER(UTransformProviderData)


#define FID_Engine_Source_Runtime_Engine_Public_Animation_TransformProviderData_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTransformProviderData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTransformProviderData(UTransformProviderData&&) = delete; \
	UTransformProviderData(const UTransformProviderData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTransformProviderData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransformProviderData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransformProviderData) \
	ENGINE_API virtual ~UTransformProviderData();


#define FID_Engine_Source_Runtime_Engine_Public_Animation_TransformProviderData_h_36_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Animation_TransformProviderData_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Animation_TransformProviderData_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_TransformProviderData_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTransformProviderData;

// ********** End Class UTransformProviderData *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_TransformProviderData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
