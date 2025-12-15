// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionMaterialCache.h"

#ifdef ENGINE_MaterialExpressionMaterialCache_generated_h
#error "MaterialExpressionMaterialCache.generated.h already included, missing '#pragma once' in MaterialExpressionMaterialCache.h"
#endif
#define ENGINE_MaterialExpressionMaterialCache_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMaterialExpressionMaterialCacheAttribute *************************
struct Z_Construct_UScriptStruct_FMaterialExpressionMaterialCacheAttribute_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialCache_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialExpressionMaterialCacheAttribute_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMaterialExpressionMaterialCacheAttribute;
// ********** End ScriptStruct FMaterialExpressionMaterialCacheAttribute ***************************

// ********** Begin Class UMaterialExpressionMaterialCache *****************************************
struct Z_Construct_UClass_UMaterialExpressionMaterialCache_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialCache_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialCache_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionMaterialCache(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionMaterialCache_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionMaterialCache_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionMaterialCache, UMaterialExpressionCustomOutput, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionMaterialCache_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionMaterialCache)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialCache_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionMaterialCache(UMaterialExpressionMaterialCache&&) = delete; \
	UMaterialExpressionMaterialCache(const UMaterialExpressionMaterialCache&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionMaterialCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionMaterialCache); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionMaterialCache) \
	NO_API virtual ~UMaterialExpressionMaterialCache();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialCache_h_32_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialCache_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialCache_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialCache_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionMaterialCache;

// ********** End Class UMaterialExpressionMaterialCache *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialCache_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
