// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClothingAssetFactory.h"

#ifdef CLOTHINGSYSTEMEDITOR_ClothingAssetFactory_generated_h
#error "ClothingAssetFactory.generated.h already included, missing '#pragma once' in ClothingAssetFactory.h"
#endif
#define CLOTHINGSYSTEMEDITOR_ClothingAssetFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UClothingAssetFactory ****************************************************
struct Z_Construct_UClass_UClothingAssetFactory_Statics;
CLOTHINGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UClothingAssetFactory_NoRegister();

#define FID_Engine_Source_Editor_ClothingSystemEditor_Public_ClothingAssetFactory_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothingAssetFactory(); \
	friend struct ::Z_Construct_UClass_UClothingAssetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLOTHINGSYSTEMEDITOR_API UClass* ::Z_Construct_UClass_UClothingAssetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UClothingAssetFactory, UClothingAssetFactoryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClothingSystemEditor"), Z_Construct_UClass_UClothingAssetFactory_NoRegister) \
	DECLARE_SERIALIZER(UClothingAssetFactory)


#define FID_Engine_Source_Editor_ClothingSystemEditor_Public_ClothingAssetFactory_h_48_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClothingAssetFactory(UClothingAssetFactory&&) = delete; \
	UClothingAssetFactory(const UClothingAssetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLOTHINGSYSTEMEDITOR_API, UClothingAssetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothingAssetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothingAssetFactory) \
	CLOTHINGSYSTEMEDITOR_API virtual ~UClothingAssetFactory();


#define FID_Engine_Source_Editor_ClothingSystemEditor_Public_ClothingAssetFactory_h_45_PROLOG
#define FID_Engine_Source_Editor_ClothingSystemEditor_Public_ClothingAssetFactory_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ClothingSystemEditor_Public_ClothingAssetFactory_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ClothingSystemEditor_Public_ClothingAssetFactory_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClothingAssetFactory;

// ********** End Class UClothingAssetFactory ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ClothingSystemEditor_Public_ClothingAssetFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
