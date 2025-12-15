// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionCameraVectorWS.h"

#ifdef ENGINE_MaterialExpressionCameraVectorWS_generated_h
#error "MaterialExpressionCameraVectorWS.generated.h already included, missing '#pragma once' in MaterialExpressionCameraVectorWS.h"
#endif
#define ENGINE_MaterialExpressionCameraVectorWS_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionCameraVectorWS ****************************************
struct Z_Construct_UClass_UMaterialExpressionCameraVectorWS_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCameraVectorWS_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCameraVectorWS_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionCameraVectorWS(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionCameraVectorWS_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionCameraVectorWS_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionCameraVectorWS, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionCameraVectorWS_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionCameraVectorWS)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCameraVectorWS_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionCameraVectorWS(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionCameraVectorWS(UMaterialExpressionCameraVectorWS&&) = delete; \
	UMaterialExpressionCameraVectorWS(const UMaterialExpressionCameraVectorWS&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionCameraVectorWS); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionCameraVectorWS); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionCameraVectorWS) \
	ENGINE_API virtual ~UMaterialExpressionCameraVectorWS();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCameraVectorWS_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCameraVectorWS_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCameraVectorWS_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCameraVectorWS_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionCameraVectorWS;

// ********** End Class UMaterialExpressionCameraVectorWS ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCameraVectorWS_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
