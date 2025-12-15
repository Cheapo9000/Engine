// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GlobalEditorUtilityBase.h"

#ifdef BLUTILITY_GlobalEditorUtilityBase_generated_h
#error "GlobalEditorUtilityBase.generated.h already included, missing '#pragma once' in GlobalEditorUtilityBase.h"
#endif
#define BLUTILITY_GlobalEditorUtilityBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UEditorPerProjectUserSettings;
class UObject;

// ********** Begin Delegate FForEachActorIteratorSignature ****************************************
#define FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_28_DELEGATE \
BLUTILITY_API void FForEachActorIteratorSignature_DelegateWrapper(const FMulticastScriptDelegate& ForEachActorIteratorSignature, AActor* Actor, int32 Index);


// ********** End Delegate FForEachActorIteratorSignature ******************************************

// ********** Begin Delegate FForEachAssetIteratorSignature ****************************************
#define FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_29_DELEGATE \
BLUTILITY_API void FForEachAssetIteratorSignature_DelegateWrapper(const FMulticastScriptDelegate& ForEachAssetIteratorSignature, UObject* Asset, int32 Index);


// ********** End Delegate FForEachAssetIteratorSignature ******************************************

// ********** Begin Class UDEPRECATED_GlobalEditorUtilityBase **************************************
#define FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_35_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRenameAsset); \
	DECLARE_FUNCTION(execGetSelectionBounds); \
	DECLARE_FUNCTION(execSetActorSelectionState); \
	DECLARE_FUNCTION(execSelectNothing); \
	DECLARE_FUNCTION(execClearActorSelectionSet); \
	DECLARE_FUNCTION(execGetEditorUserSettings); \
	DECLARE_FUNCTION(execGetSelectedAssets); \
	DECLARE_FUNCTION(execForEachSelectedAsset); \
	DECLARE_FUNCTION(execForEachSelectedActor); \
	DECLARE_FUNCTION(execGetActorReference); \
	DECLARE_FUNCTION(execGetSelectionSet);


#define FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_35_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics;
BLUTILITY_API UClass* Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_NoRegister();

#define FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_GlobalEditorUtilityBase(); \
	friend struct ::Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUTILITY_API UClass* ::Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEPRECATED_GlobalEditorUtilityBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/Blutility"), Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_NoRegister) \
	DECLARE_SERIALIZER(UDEPRECATED_GlobalEditorUtilityBase)


#define FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUTILITY_API UDEPRECATED_GlobalEditorUtilityBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_GlobalEditorUtilityBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, UDEPRECATED_GlobalEditorUtilityBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_GlobalEditorUtilityBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEPRECATED_GlobalEditorUtilityBase(UDEPRECATED_GlobalEditorUtilityBase&&) = delete; \
	UDEPRECATED_GlobalEditorUtilityBase(const UDEPRECATED_GlobalEditorUtilityBase&) = delete; \
	BLUTILITY_API virtual ~UDEPRECATED_GlobalEditorUtilityBase();


#define FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_32_PROLOG
#define FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_35_RPC_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_35_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_35_INCLASS \
	FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEPRECATED_GlobalEditorUtilityBase;

// ********** End Class UDEPRECATED_GlobalEditorUtilityBase ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
