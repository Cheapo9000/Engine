// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorUtilityCamera.h"

#ifdef BLUTILITY_EditorUtilityCamera_generated_h
#error "EditorUtilityCamera.generated.h already included, missing '#pragma once' in EditorUtilityCamera.h"
#endif
#define BLUTILITY_EditorUtilityCamera_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AEditorUtilityCamera *****************************************************
struct Z_Construct_UClass_AEditorUtilityCamera_Statics;
BLUTILITY_API UClass* Z_Construct_UClass_AEditorUtilityCamera_NoRegister();

#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityCamera_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAEditorUtilityCamera(); \
	friend struct ::Z_Construct_UClass_AEditorUtilityCamera_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUTILITY_API UClass* ::Z_Construct_UClass_AEditorUtilityCamera_NoRegister(); \
public: \
	DECLARE_CLASS2(AEditorUtilityCamera, ACameraActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blutility"), Z_Construct_UClass_AEditorUtilityCamera_NoRegister) \
	DECLARE_SERIALIZER(AEditorUtilityCamera)


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityCamera_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUTILITY_API AEditorUtilityCamera(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEditorUtilityCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, AEditorUtilityCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEditorUtilityCamera); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEditorUtilityCamera(AEditorUtilityCamera&&) = delete; \
	AEditorUtilityCamera(const AEditorUtilityCamera&) = delete; \
	BLUTILITY_API virtual ~AEditorUtilityCamera();


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityCamera_h_18_PROLOG
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityCamera_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityCamera_h_21_INCLASS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityCamera_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEditorUtilityCamera;

// ********** End Class AEditorUtilityCamera *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityCamera_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
