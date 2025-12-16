// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExternalTextureMaterialExpression.h"

#ifdef APPLEARKIT_ExternalTextureMaterialExpression_generated_h
#error "ExternalTextureMaterialExpression.generated.h already included, missing '#pragma once' in ExternalTextureMaterialExpression.h"
#endif
#define APPLEARKIT_ExternalTextureMaterialExpression_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDEPRECATED_MaterialExpressionARKitPassthroughCamera *********************
struct Z_Construct_UClass_UDEPRECATED_MaterialExpressionARKitPassthroughCamera_Statics;
APPLEARKIT_API UClass* Z_Construct_UClass_UDEPRECATED_MaterialExpressionARKitPassthroughCamera_NoRegister();

#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ExternalTextureMaterialExpression_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_MaterialExpressionARKitPassthroughCamera(); \
	friend struct ::Z_Construct_UClass_UDEPRECATED_MaterialExpressionARKitPassthroughCamera_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend APPLEARKIT_API UClass* ::Z_Construct_UClass_UDEPRECATED_MaterialExpressionARKitPassthroughCamera_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEPRECATED_MaterialExpressionARKitPassthroughCamera, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/AppleARKit"), Z_Construct_UClass_UDEPRECATED_MaterialExpressionARKitPassthroughCamera_NoRegister) \
	DECLARE_SERIALIZER(UDEPRECATED_MaterialExpressionARKitPassthroughCamera)


#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ExternalTextureMaterialExpression_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_MaterialExpressionARKitPassthroughCamera(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_MaterialExpressionARKitPassthroughCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_MaterialExpressionARKitPassthroughCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_MaterialExpressionARKitPassthroughCamera); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEPRECATED_MaterialExpressionARKitPassthroughCamera(UDEPRECATED_MaterialExpressionARKitPassthroughCamera&&) = delete; \
	UDEPRECATED_MaterialExpressionARKitPassthroughCamera(const UDEPRECATED_MaterialExpressionARKitPassthroughCamera&) = delete; \
	NO_API virtual ~UDEPRECATED_MaterialExpressionARKitPassthroughCamera();


#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ExternalTextureMaterialExpression_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ExternalTextureMaterialExpression_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ExternalTextureMaterialExpression_h_23_INCLASS \
	FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ExternalTextureMaterialExpression_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEPRECATED_MaterialExpressionARKitPassthroughCamera;

// ********** End Class UDEPRECATED_MaterialExpressionARKitPassthroughCamera ***********************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ExternalTextureMaterialExpression_h

// ********** Begin Enum EARKitTextureType *********************************************************
#define FOREACH_ENUM_EARKITTEXTURETYPE(op) \
	op(TextureY) \
	op(TextureCbCr) 

enum EARKitTextureType : int;
template<> APPLEARKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EARKitTextureType>();
// ********** End Enum EARKitTextureType ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
