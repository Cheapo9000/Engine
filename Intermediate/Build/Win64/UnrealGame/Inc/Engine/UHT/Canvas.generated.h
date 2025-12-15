// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Canvas.h"

#ifdef ENGINE_Canvas_generated_h
#error "Canvas.generated.h already included, missing '#pragma once' in Canvas.h"
#endif
#define ENGINE_Canvas_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFont;
class UMaterialInterface;
class UTexture;
struct FCanvasUVTri;
struct FLinearColor;

// ********** Begin ScriptStruct FCanvasIcon *******************************************************
struct Z_Construct_UScriptStruct_FCanvasIcon_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCanvasIcon_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCanvasIcon;
// ********** End ScriptStruct FCanvasIcon *********************************************************

// ********** Begin Class UCanvas ******************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_160_RPC_WRAPPERS \
	DECLARE_FUNCTION(execK2_TextSize); \
	DECLARE_FUNCTION(execK2_StrLen); \
	DECLARE_FUNCTION(execK2_Deproject); \
	DECLARE_FUNCTION(execK2_Project); \
	DECLARE_FUNCTION(execK2_DrawPolygon); \
	DECLARE_FUNCTION(execK2_DrawMaterialTriangle); \
	DECLARE_FUNCTION(execK2_DrawTriangle); \
	DECLARE_FUNCTION(execK2_DrawBox); \
	DECLARE_FUNCTION(execK2_DrawBorder); \
	DECLARE_FUNCTION(execK2_DrawText); \
	DECLARE_FUNCTION(execK2_DrawMaterial); \
	DECLARE_FUNCTION(execK2_DrawTexture); \
	DECLARE_FUNCTION(execK2_DrawLine);


struct Z_Construct_UClass_UCanvas_Statics;
ENGINE_API UClass* Z_Construct_UClass_UCanvas_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_160_INCLASS \
private: \
	static void StaticRegisterNativesUCanvas(); \
	friend struct ::Z_Construct_UClass_UCanvas_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UCanvas_NoRegister(); \
public: \
	DECLARE_CLASS2(UCanvas, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UCanvas_NoRegister) \
	DECLARE_SERIALIZER(UCanvas)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_160_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCanvas(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCanvas) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCanvas); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCanvas); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCanvas(UCanvas&&) = delete; \
	UCanvas(const UCanvas&) = delete; \
	ENGINE_API virtual ~UCanvas();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_156_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_160_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_160_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_160_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_160_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCanvas;

// ********** End Class UCanvas ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
