// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/BrushShape.h"

#ifdef ENGINE_BrushShape_generated_h
#error "BrushShape.generated.h already included, missing '#pragma once' in BrushShape.h"
#endif
#define ENGINE_BrushShape_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABrushShape **************************************************************
struct Z_Construct_UClass_ABrushShape_Statics;
ENGINE_API UClass* Z_Construct_UClass_ABrushShape_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushShape_h_18_INCLASS \
private: \
	static void StaticRegisterNativesABrushShape(); \
	friend struct ::Z_Construct_UClass_ABrushShape_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ABrushShape_NoRegister(); \
public: \
	DECLARE_CLASS2(ABrushShape, ABrush, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ABrushShape_NoRegister) \
	DECLARE_SERIALIZER(ABrushShape)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushShape_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ABrushShape(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABrushShape) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ABrushShape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABrushShape); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABrushShape(ABrushShape&&) = delete; \
	ABrushShape(const ABrushShape&) = delete; \
	ENGINE_API virtual ~ABrushShape();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushShape_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushShape_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushShape_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushShape_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABrushShape;

// ********** End Class ABrushShape ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushShape_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
