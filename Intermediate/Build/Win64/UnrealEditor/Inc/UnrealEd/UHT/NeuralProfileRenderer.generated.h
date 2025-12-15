// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThumbnailRendering/NeuralProfileRenderer.h"

#ifdef UNREALED_NeuralProfileRenderer_generated_h
#error "NeuralProfileRenderer.generated.h already included, missing '#pragma once' in NeuralProfileRenderer.h"
#endif
#define UNREALED_NeuralProfileRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNeuralProfileRenderer ***************************************************
struct Z_Construct_UClass_UNeuralProfileRenderer_Statics;
UNREALED_API UClass* Z_Construct_UClass_UNeuralProfileRenderer_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_NeuralProfileRenderer_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUNeuralProfileRenderer(); \
	friend struct ::Z_Construct_UClass_UNeuralProfileRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UNeuralProfileRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(UNeuralProfileRenderer, UTextureThumbnailRenderer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UNeuralProfileRenderer_NoRegister) \
	DECLARE_SERIALIZER(UNeuralProfileRenderer)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_NeuralProfileRenderer_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNeuralProfileRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNeuralProfileRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNeuralProfileRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNeuralProfileRenderer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNeuralProfileRenderer(UNeuralProfileRenderer&&) = delete; \
	UNeuralProfileRenderer(const UNeuralProfileRenderer&) = delete; \
	NO_API virtual ~UNeuralProfileRenderer();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_NeuralProfileRenderer_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_NeuralProfileRenderer_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_NeuralProfileRenderer_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_NeuralProfileRenderer_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNeuralProfileRenderer;

// ********** End Class UNeuralProfileRenderer *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_NeuralProfileRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
