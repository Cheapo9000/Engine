// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionAggregate.h"

#ifdef ENGINE_MaterialExpressionAggregate_generated_h
#error "MaterialExpressionAggregate.generated.h already included, missing '#pragma once' in MaterialExpressionAggregate.h"
#endif
#define ENGINE_MaterialExpressionAggregate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMaterialExpressionAggregateEntry *********************************
struct Z_Construct_UScriptStruct_FMaterialExpressionAggregateEntry_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAggregate_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialExpressionAggregateEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMaterialExpressionAggregateEntry;
// ********** End ScriptStruct FMaterialExpressionAggregateEntry ***********************************

// ********** Begin Class UMaterialExpressionAggregate *********************************************
#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAggregate_h_34_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetPossibleAttributeNames);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAggregate_h_34_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UMaterialExpressionAggregate_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAggregate_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAggregate_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionAggregate(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionAggregate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionAggregate_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionAggregate, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionAggregate_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionAggregate)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAggregate_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionAggregate(UMaterialExpressionAggregate&&) = delete; \
	UMaterialExpressionAggregate(const UMaterialExpressionAggregate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionAggregate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionAggregate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionAggregate) \
	ENGINE_API virtual ~UMaterialExpressionAggregate();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAggregate_h_31_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAggregate_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAggregate_h_34_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAggregate_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAggregate_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionAggregate;

// ********** End Class UMaterialExpressionAggregate ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAggregate_h

// ********** Begin Enum EMaterialExpressionMakeAggregateKind **************************************
#define FOREACH_ENUM_EMATERIALEXPRESSIONMAKEAGGREGATEKIND(op) \
	op(EMaterialExpressionMakeAggregateKind::MaterialAttributes) \
	op(EMaterialExpressionMakeAggregateKind::UserDefined) 

enum class EMaterialExpressionMakeAggregateKind;
template<> struct TIsUEnumClass<EMaterialExpressionMakeAggregateKind> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialExpressionMakeAggregateKind>();
// ********** End Enum EMaterialExpressionMakeAggregateKind ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
