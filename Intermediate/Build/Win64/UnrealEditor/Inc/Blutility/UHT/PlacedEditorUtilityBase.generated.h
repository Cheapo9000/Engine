// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlacedEditorUtilityBase.h"

#ifdef BLUTILITY_PlacedEditorUtilityBase_generated_h
#error "PlacedEditorUtilityBase.generated.h already included, missing '#pragma once' in PlacedEditorUtilityBase.h"
#endif
#define BLUTILITY_PlacedEditorUtilityBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class ADEPRECATED_PlacedEditorUtilityBase **************************************
#define FID_Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_29_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetActorReference); \
	DECLARE_FUNCTION(execSetActorSelectionState); \
	DECLARE_FUNCTION(execSelectNothing); \
	DECLARE_FUNCTION(execClearActorSelectionSet); \
	DECLARE_FUNCTION(execSetLevelViewportCameraInfo); \
	DECLARE_FUNCTION(execGetLevelViewportCameraInfo); \
	DECLARE_FUNCTION(execGetSelectionSet);


struct Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase_Statics;
BLUTILITY_API UClass* Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase_NoRegister();

#define FID_Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_29_INCLASS \
private: \
	static void StaticRegisterNativesADEPRECATED_PlacedEditorUtilityBase(); \
	friend struct ::Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUTILITY_API UClass* ::Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ADEPRECATED_PlacedEditorUtilityBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/Blutility"), Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase_NoRegister) \
	DECLARE_SERIALIZER(ADEPRECATED_PlacedEditorUtilityBase)


#define FID_Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUTILITY_API ADEPRECATED_PlacedEditorUtilityBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADEPRECATED_PlacedEditorUtilityBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, ADEPRECATED_PlacedEditorUtilityBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADEPRECATED_PlacedEditorUtilityBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADEPRECATED_PlacedEditorUtilityBase(ADEPRECATED_PlacedEditorUtilityBase&&) = delete; \
	ADEPRECATED_PlacedEditorUtilityBase(const ADEPRECATED_PlacedEditorUtilityBase&) = delete; \
	BLUTILITY_API virtual ~ADEPRECATED_PlacedEditorUtilityBase();


#define FID_Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_26_PROLOG
#define FID_Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_29_RPC_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_29_INCLASS \
	FID_Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADEPRECATED_PlacedEditorUtilityBase;

// ********** End Class ADEPRECATED_PlacedEditorUtilityBase ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
