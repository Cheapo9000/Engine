// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionTextureObjectFromCollection.h"

#ifdef ENGINE_MaterialExpressionTextureObjectFromCollection_generated_h
#error "MaterialExpressionTextureObjectFromCollection.generated.h already included, missing '#pragma once' in MaterialExpressionTextureObjectFromCollection.h"
#endif
#define ENGINE_MaterialExpressionTextureObjectFromCollection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionTextureObjectFromCollection ***************************
struct Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureObjectFromCollection_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTextureObjectFromCollection(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionTextureObjectFromCollection, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionTextureObjectFromCollection_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionTextureObjectFromCollection)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureObjectFromCollection_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTextureObjectFromCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionTextureObjectFromCollection(UMaterialExpressionTextureObjectFromCollection&&) = delete; \
	UMaterialExpressionTextureObjectFromCollection(const UMaterialExpressionTextureObjectFromCollection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTextureObjectFromCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTextureObjectFromCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTextureObjectFromCollection) \
	ENGINE_API virtual ~UMaterialExpressionTextureObjectFromCollection();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureObjectFromCollection_h_36_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureObjectFromCollection_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureObjectFromCollection_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureObjectFromCollection_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionTextureObjectFromCollection;

// ********** End Class UMaterialExpressionTextureObjectFromCollection *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureObjectFromCollection_h

// ********** Begin Enum ETextureCollectionMemberType **********************************************
#define FOREACH_ENUM_ETEXTURECOLLECTIONMEMBERTYPE(op) \
	op(ETextureCollectionMemberType::Texture2D) \
	op(ETextureCollectionMemberType::TextureCube) \
	op(ETextureCollectionMemberType::Texture2DArray) \
	op(ETextureCollectionMemberType::TextureCubeArray) \
	op(ETextureCollectionMemberType::TextureVolume) \
	op(ETextureCollectionMemberType::Max) 

enum class ETextureCollectionMemberType : uint8;
template<> struct TIsUEnumClass<ETextureCollectionMemberType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETextureCollectionMemberType>();
// ********** End Enum ETextureCollectionMemberType ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
