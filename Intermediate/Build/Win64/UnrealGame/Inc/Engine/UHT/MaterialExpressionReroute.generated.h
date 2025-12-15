// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionReroute.h"

#ifdef ENGINE_MaterialExpressionReroute_generated_h
#error "MaterialExpressionReroute.generated.h already included, missing '#pragma once' in MaterialExpressionReroute.h"
#endif
#define ENGINE_MaterialExpressionReroute_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionReroute ***********************************************
struct Z_Construct_UClass_UMaterialExpressionReroute_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionReroute_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionReroute_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionReroute(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionReroute_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionReroute_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionReroute, UMaterialExpressionRerouteBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionReroute_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionReroute)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionReroute_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionReroute(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionReroute(UMaterialExpressionReroute&&) = delete; \
	UMaterialExpressionReroute(const UMaterialExpressionReroute&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionReroute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionReroute); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionReroute) \
	ENGINE_API virtual ~UMaterialExpressionReroute();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionReroute_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionReroute_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionReroute_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionReroute_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionReroute;

// ********** End Class UMaterialExpressionReroute *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionReroute_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
