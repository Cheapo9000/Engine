// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionRecordTextureStreamingInfo.h"

#ifdef ENGINE_MaterialExpressionRecordTextureStreamingInfo_generated_h
#error "MaterialExpressionRecordTextureStreamingInfo.generated.h already included, missing '#pragma once' in MaterialExpressionRecordTextureStreamingInfo.h"
#endif
#define ENGINE_MaterialExpressionRecordTextureStreamingInfo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionRecordTextureStreamingInfo ****************************
struct Z_Construct_UClass_UMaterialExpressionRecordTextureStreamingInfo_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRecordTextureStreamingInfo_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRecordTextureStreamingInfo_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionRecordTextureStreamingInfo(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionRecordTextureStreamingInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionRecordTextureStreamingInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionRecordTextureStreamingInfo, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionRecordTextureStreamingInfo_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionRecordTextureStreamingInfo)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRecordTextureStreamingInfo_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionRecordTextureStreamingInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionRecordTextureStreamingInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionRecordTextureStreamingInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionRecordTextureStreamingInfo); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionRecordTextureStreamingInfo(UMaterialExpressionRecordTextureStreamingInfo&&) = delete; \
	UMaterialExpressionRecordTextureStreamingInfo(const UMaterialExpressionRecordTextureStreamingInfo&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionRecordTextureStreamingInfo();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRecordTextureStreamingInfo_h_9_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRecordTextureStreamingInfo_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRecordTextureStreamingInfo_h_12_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRecordTextureStreamingInfo_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionRecordTextureStreamingInfo;

// ********** End Class UMaterialExpressionRecordTextureStreamingInfo ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRecordTextureStreamingInfo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
