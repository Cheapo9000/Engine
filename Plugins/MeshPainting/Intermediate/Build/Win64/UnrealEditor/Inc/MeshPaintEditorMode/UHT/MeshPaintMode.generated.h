// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshPaintMode.h"

#ifdef MESHPAINTEDITORMODE_MeshPaintMode_generated_h
#error "MeshPaintMode.generated.h already included, missing '#pragma once' in MeshPaintMode.h"
#endif
#define MESHPAINTEDITORMODE_MeshPaintMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMeshPaintMode ***********************************************************
struct Z_Construct_UClass_UMeshPaintMode_Statics;
MESHPAINTEDITORMODE_API UClass* Z_Construct_UClass_UMeshPaintMode_NoRegister();

#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintMode_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshPaintMode(); \
	friend struct ::Z_Construct_UClass_UMeshPaintMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHPAINTEDITORMODE_API UClass* ::Z_Construct_UClass_UMeshPaintMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshPaintMode, UEdMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshPaintEditorMode"), Z_Construct_UClass_UMeshPaintMode_NoRegister) \
	DECLARE_SERIALIZER(UMeshPaintMode) \
	virtual UObject* _getUObject() const override { return const_cast<UMeshPaintMode*>(this); }


#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintMode_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshPaintMode(UMeshPaintMode&&) = delete; \
	UMeshPaintMode(const UMeshPaintMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshPaintMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshPaintMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMeshPaintMode) \
	NO_API virtual ~UMeshPaintMode();


#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintMode_h_24_PROLOG
#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintMode_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintMode_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintMode_h_28_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshPaintMode;

// ********** End Class UMeshPaintMode *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
