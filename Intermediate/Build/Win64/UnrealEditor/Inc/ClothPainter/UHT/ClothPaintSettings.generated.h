// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClothPaintSettings.h"

#ifdef CLOTHPAINTER_ClothPaintSettings_generated_h
#error "ClothPaintSettings.generated.h already included, missing '#pragma once' in ClothPaintSettings.h"
#endif
#define CLOTHPAINTER_ClothPaintSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UClothPainterSettings ****************************************************
struct Z_Construct_UClass_UClothPainterSettings_Statics;
CLOTHPAINTER_API UClass* Z_Construct_UClass_UClothPainterSettings_NoRegister();

#define FID_Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothPainterSettings(); \
	friend struct ::Z_Construct_UClass_UClothPainterSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLOTHPAINTER_API UClass* ::Z_Construct_UClass_UClothPainterSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UClothPainterSettings, UMeshPaintSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClothPainter"), Z_Construct_UClass_UClothPainterSettings_NoRegister) \
	DECLARE_SERIALIZER(UClothPainterSettings)


#define FID_Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClothPainterSettings(UClothPainterSettings&&) = delete; \
	UClothPainterSettings(const UClothPainterSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClothPainterSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothPainterSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UClothPainterSettings) \
	NO_API virtual ~UClothPainterSettings();


#define FID_Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_26_PROLOG
#define FID_Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClothPainterSettings;

// ********** End Class UClothPainterSettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h

// ********** Begin Enum EPaintableClothProperty ***************************************************
#define FOREACH_ENUM_EPAINTABLECLOTHPROPERTY(op) \
	op(EPaintableClothProperty::MaxDistances) \
	op(EPaintableClothProperty::BackstopDistances) \
	op(EPaintableClothProperty::BackstopRadius) 

enum class EPaintableClothProperty;
template<> struct TIsUEnumClass<EPaintableClothProperty> { enum { Value = true }; };
template<> CLOTHPAINTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EPaintableClothProperty>();
// ********** End Enum EPaintableClothProperty *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
