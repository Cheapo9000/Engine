// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClothingAssetExporter.h"

#ifdef CLOTHPAINTER_ClothingAssetExporter_generated_h
#error "ClothingAssetExporter.generated.h already included, missing '#pragma once' in ClothingAssetExporter.h"
#endif
#define CLOTHPAINTER_ClothingAssetExporter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UClothingAssetExporter ***************************************************
struct Z_Construct_UClass_UClothingAssetExporter_Statics;
CLOTHPAINTER_API UClass* Z_Construct_UClass_UClothingAssetExporter_NoRegister();

#define FID_Engine_Source_Editor_ClothPainter_Public_ClothingAssetExporter_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothingAssetExporter(); \
	friend struct ::Z_Construct_UClass_UClothingAssetExporter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLOTHPAINTER_API UClass* ::Z_Construct_UClass_UClothingAssetExporter_NoRegister(); \
public: \
	DECLARE_CLASS2(UClothingAssetExporter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClothPainter"), Z_Construct_UClass_UClothingAssetExporter_NoRegister) \
	DECLARE_SERIALIZER(UClothingAssetExporter)


#define FID_Engine_Source_Editor_ClothPainter_Public_ClothingAssetExporter_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CLOTHPAINTER_API UClothingAssetExporter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClothingAssetExporter(UClothingAssetExporter&&) = delete; \
	UClothingAssetExporter(const UClothingAssetExporter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLOTHPAINTER_API, UClothingAssetExporter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothingAssetExporter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothingAssetExporter) \
	CLOTHPAINTER_API virtual ~UClothingAssetExporter();


#define FID_Engine_Source_Editor_ClothPainter_Public_ClothingAssetExporter_h_31_PROLOG
#define FID_Engine_Source_Editor_ClothPainter_Public_ClothingAssetExporter_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ClothPainter_Public_ClothingAssetExporter_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ClothPainter_Public_ClothingAssetExporter_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClothingAssetExporter;

// ********** End Class UClothingAssetExporter *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ClothPainter_Public_ClothingAssetExporter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
