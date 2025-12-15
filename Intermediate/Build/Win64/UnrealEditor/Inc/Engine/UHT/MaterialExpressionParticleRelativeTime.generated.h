// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionParticleRelativeTime.h"

#ifdef ENGINE_MaterialExpressionParticleRelativeTime_generated_h
#error "MaterialExpressionParticleRelativeTime.generated.h already included, missing '#pragma once' in MaterialExpressionParticleRelativeTime.h"
#endif
#define ENGINE_MaterialExpressionParticleRelativeTime_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionParticleRelativeTime **********************************
struct Z_Construct_UClass_UMaterialExpressionParticleRelativeTime_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleRelativeTime_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRelativeTime_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionParticleRelativeTime(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionParticleRelativeTime_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionParticleRelativeTime_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionParticleRelativeTime, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionParticleRelativeTime_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionParticleRelativeTime)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRelativeTime_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionParticleRelativeTime(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionParticleRelativeTime(UMaterialExpressionParticleRelativeTime&&) = delete; \
	UMaterialExpressionParticleRelativeTime(const UMaterialExpressionParticleRelativeTime&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionParticleRelativeTime); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionParticleRelativeTime); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionParticleRelativeTime) \
	NO_API virtual ~UMaterialExpressionParticleRelativeTime();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRelativeTime_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRelativeTime_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRelativeTime_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRelativeTime_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionParticleRelativeTime;

// ********** End Class UMaterialExpressionParticleRelativeTime ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionParticleRelativeTime_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
