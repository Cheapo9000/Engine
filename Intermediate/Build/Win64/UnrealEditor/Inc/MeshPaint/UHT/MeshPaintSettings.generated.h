// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshPaintSettings.h"

#ifdef MESHPAINT_MeshPaintSettings_generated_h
#error "MeshPaintSettings.generated.h already included, missing '#pragma once' in MeshPaintSettings.h"
#endif
#define MESHPAINT_MeshPaintSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPaintBrushSettings ******************************************************
struct Z_Construct_UClass_UPaintBrushSettings_Statics;
MESHPAINT_API UClass* Z_Construct_UClass_UPaintBrushSettings_NoRegister();

#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUPaintBrushSettings(); \
	friend struct ::Z_Construct_UClass_UPaintBrushSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHPAINT_API UClass* ::Z_Construct_UClass_UPaintBrushSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPaintBrushSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshPaint"), Z_Construct_UClass_UPaintBrushSettings_NoRegister) \
	DECLARE_SERIALIZER(UPaintBrushSettings)


#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHPAINT_API UPaintBrushSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaintBrushSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHPAINT_API, UPaintBrushSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaintBrushSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPaintBrushSettings(UPaintBrushSettings&&) = delete; \
	UPaintBrushSettings(const UPaintBrushSettings&) = delete;


#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_34_PROLOG
#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_37_INCLASS \
	FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPaintBrushSettings;

// ********** End Class UPaintBrushSettings ********************************************************

// ********** Begin Class UMeshPaintSettings *******************************************************
struct Z_Construct_UClass_UMeshPaintSettings_Statics;
MESHPAINT_API UClass* Z_Construct_UClass_UMeshPaintSettings_NoRegister();

#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshPaintSettings(); \
	friend struct ::Z_Construct_UClass_UMeshPaintSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHPAINT_API UClass* ::Z_Construct_UClass_UMeshPaintSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshPaintSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MeshPaint"), Z_Construct_UClass_UMeshPaintSettings_NoRegister) \
	DECLARE_SERIALIZER(UMeshPaintSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHPAINT_API UMeshPaintSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshPaintSettings(UMeshPaintSettings&&) = delete; \
	UMeshPaintSettings(const UMeshPaintSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHPAINT_API, UMeshPaintSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshPaintSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshPaintSettings) \
	MESHPAINT_API virtual ~UMeshPaintSettings();


#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_84_PROLOG
#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_87_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshPaintSettings;

// ********** End Class UMeshPaintSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h

// ********** Begin Enum EMeshPaintColorViewMode ***************************************************
#define FOREACH_ENUM_EMESHPAINTCOLORVIEWMODE(op) \
	op(EMeshPaintColorViewMode::Normal) \
	op(EMeshPaintColorViewMode::RGB) \
	op(EMeshPaintColorViewMode::Alpha) \
	op(EMeshPaintColorViewMode::Red) \
	op(EMeshPaintColorViewMode::Green) \
	op(EMeshPaintColorViewMode::Blue) 

enum class EMeshPaintColorViewMode : uint8;
template<> struct TIsUEnumClass<EMeshPaintColorViewMode> { enum { Value = true }; };
template<> MESHPAINT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMeshPaintColorViewMode>();
// ********** End Enum EMeshPaintColorViewMode *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
