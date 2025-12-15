// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionFeatureLevelSwitch.h"

#ifdef ENGINE_MaterialExpressionFeatureLevelSwitch_generated_h
#error "MaterialExpressionFeatureLevelSwitch.generated.h already included, missing '#pragma once' in MaterialExpressionFeatureLevelSwitch.h"
#endif
#define ENGINE_MaterialExpressionFeatureLevelSwitch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionFeatureLevelSwitch ************************************
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFeatureLevelSwitch_h_19_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UMaterialExpressionFeatureLevelSwitch, ENGINE_API)


struct Z_Construct_UClass_UMaterialExpressionFeatureLevelSwitch_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFeatureLevelSwitch_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFeatureLevelSwitch_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionFeatureLevelSwitch(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionFeatureLevelSwitch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionFeatureLevelSwitch_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionFeatureLevelSwitch, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionFeatureLevelSwitch_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionFeatureLevelSwitch) \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFeatureLevelSwitch_h_19_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFeatureLevelSwitch_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionFeatureLevelSwitch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionFeatureLevelSwitch(UMaterialExpressionFeatureLevelSwitch&&) = delete; \
	UMaterialExpressionFeatureLevelSwitch(const UMaterialExpressionFeatureLevelSwitch&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionFeatureLevelSwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionFeatureLevelSwitch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionFeatureLevelSwitch) \
	ENGINE_API virtual ~UMaterialExpressionFeatureLevelSwitch();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFeatureLevelSwitch_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFeatureLevelSwitch_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFeatureLevelSwitch_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFeatureLevelSwitch_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionFeatureLevelSwitch;

// ********** End Class UMaterialExpressionFeatureLevelSwitch **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFeatureLevelSwitch_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
