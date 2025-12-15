// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionLocalPosition.h"

#ifdef ENGINE_MaterialExpressionLocalPosition_generated_h
#error "MaterialExpressionLocalPosition.generated.h already included, missing '#pragma once' in MaterialExpressionLocalPosition.h"
#endif
#define ENGINE_MaterialExpressionLocalPosition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionLocalPosition *****************************************
struct Z_Construct_UClass_UMaterialExpressionLocalPosition_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLocalPosition_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLocalPosition_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionLocalPosition(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionLocalPosition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionLocalPosition_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionLocalPosition, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionLocalPosition_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionLocalPosition)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLocalPosition_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionLocalPosition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLocalPosition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionLocalPosition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLocalPosition); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionLocalPosition(UMaterialExpressionLocalPosition&&) = delete; \
	UMaterialExpressionLocalPosition(const UMaterialExpressionLocalPosition&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionLocalPosition();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLocalPosition_h_36_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLocalPosition_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLocalPosition_h_39_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLocalPosition_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionLocalPosition;

// ********** End Class UMaterialExpressionLocalPosition *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLocalPosition_h

// ********** Begin Enum EPositionIncludedOffsets **************************************************
#define FOREACH_ENUM_EPOSITIONINCLUDEDOFFSETS(op) \
	op(EPositionIncludedOffsets::IncludeOffsets) \
	op(EPositionIncludedOffsets::ExcludeOffsets) 

enum class EPositionIncludedOffsets;
template<> struct TIsUEnumClass<EPositionIncludedOffsets> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPositionIncludedOffsets>();
// ********** End Enum EPositionIncludedOffsets ****************************************************

// ********** Begin Enum ELocalPositionOrigin ******************************************************
#define FOREACH_ENUM_ELOCALPOSITIONORIGIN(op) \
	op(ELocalPositionOrigin::Instance) \
	op(ELocalPositionOrigin::InstancePreSkinning) \
	op(ELocalPositionOrigin::Primitive) 

enum class ELocalPositionOrigin;
template<> struct TIsUEnumClass<ELocalPositionOrigin> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELocalPositionOrigin>();
// ********** End Enum ELocalPositionOrigin ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
