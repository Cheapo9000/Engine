// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialAggregate.h"

#ifdef ENGINE_MaterialAggregate_generated_h
#error "MaterialAggregate.generated.h already included, missing '#pragma once' in MaterialAggregate.h"
#endif
#define ENGINE_MaterialAggregate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMaterialAggregateAttribute ***************************************
struct Z_Construct_UScriptStruct_FMaterialAggregateAttribute_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialAggregate_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialAggregateAttribute_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMaterialAggregateAttribute;
// ********** End ScriptStruct FMaterialAggregateAttribute *****************************************

// ********** Begin Class UMaterialAggregate *******************************************************
struct Z_Construct_UClass_UMaterialAggregate_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialAggregate_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialAggregate_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialAggregate(); \
	friend struct ::Z_Construct_UClass_UMaterialAggregate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialAggregate_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialAggregate, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialAggregate_NoRegister) \
	DECLARE_SERIALIZER(UMaterialAggregate)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialAggregate_h_83_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialAggregate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialAggregate(UMaterialAggregate&&) = delete; \
	UMaterialAggregate(const UMaterialAggregate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialAggregate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialAggregate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialAggregate) \
	ENGINE_API virtual ~UMaterialAggregate();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialAggregate_h_80_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialAggregate_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialAggregate_h_83_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialAggregate_h_83_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialAggregate;

// ********** End Class UMaterialAggregate *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialAggregate_h

// ********** Begin Enum EMaterialAggregateAttributeType *******************************************
#define FOREACH_ENUM_EMATERIALAGGREGATEATTRIBUTETYPE(op) \
	op(EMaterialAggregateAttributeType::Bool1) \
	op(EMaterialAggregateAttributeType::Bool2) \
	op(EMaterialAggregateAttributeType::Bool3) \
	op(EMaterialAggregateAttributeType::Bool4) \
	op(EMaterialAggregateAttributeType::UInt1) \
	op(EMaterialAggregateAttributeType::UInt2) \
	op(EMaterialAggregateAttributeType::UInt3) \
	op(EMaterialAggregateAttributeType::UInt4) \
	op(EMaterialAggregateAttributeType::Float1) \
	op(EMaterialAggregateAttributeType::Float2) \
	op(EMaterialAggregateAttributeType::Float3) \
	op(EMaterialAggregateAttributeType::Float4) \
	op(EMaterialAggregateAttributeType::ShadingModel) \
	op(EMaterialAggregateAttributeType::MaterialAttributes) \
	op(EMaterialAggregateAttributeType::Aggregate) 

enum class EMaterialAggregateAttributeType;
template<> struct TIsUEnumClass<EMaterialAggregateAttributeType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialAggregateAttributeType>();
// ********** End Enum EMaterialAggregateAttributeType *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
