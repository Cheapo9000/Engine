// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshPaintModeSettings.h"

#ifdef MESHPAINTEDITORMODE_MeshPaintModeSettings_generated_h
#error "MeshPaintModeSettings.generated.h already included, missing '#pragma once' in MeshPaintModeSettings.h"
#endif
#define MESHPAINTEDITORMODE_MeshPaintModeSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMeshPaintModeSettings ***************************************************
struct Z_Construct_UClass_UMeshPaintModeSettings_Statics;
MESHPAINTEDITORMODE_API UClass* Z_Construct_UClass_UMeshPaintModeSettings_NoRegister();

#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintModeSettings_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshPaintModeSettings(); \
	friend struct ::Z_Construct_UClass_UMeshPaintModeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHPAINTEDITORMODE_API UClass* ::Z_Construct_UClass_UMeshPaintModeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshPaintModeSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MeshPaintEditorMode"), Z_Construct_UClass_UMeshPaintModeSettings_NoRegister) \
	DECLARE_SERIALIZER(UMeshPaintModeSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintModeSettings_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHPAINTEDITORMODE_API UMeshPaintModeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshPaintModeSettings(UMeshPaintModeSettings&&) = delete; \
	UMeshPaintModeSettings(const UMeshPaintModeSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHPAINTEDITORMODE_API, UMeshPaintModeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshPaintModeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshPaintModeSettings) \
	MESHPAINTEDITORMODE_API virtual ~UMeshPaintModeSettings();


#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintModeSettings_h_35_PROLOG
#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintModeSettings_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintModeSettings_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintModeSettings_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshPaintModeSettings;

// ********** End Class UMeshPaintModeSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintModeSettings_h

// ********** Begin Enum EMeshPaintColorView *******************************************************
#define FOREACH_ENUM_EMESHPAINTCOLORVIEW(op) \
	op(EMeshPaintColorView::Normal) \
	op(EMeshPaintColorView::RGB) \
	op(EMeshPaintColorView::Alpha) \
	op(EMeshPaintColorView::Red) \
	op(EMeshPaintColorView::Green) \
	op(EMeshPaintColorView::Blue) 

enum class EMeshPaintColorView : uint8;
template<> struct TIsUEnumClass<EMeshPaintColorView> { enum { Value = true }; };
template<> MESHPAINTEDITORMODE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMeshPaintColorView>();
// ********** End Enum EMeshPaintColorView *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
