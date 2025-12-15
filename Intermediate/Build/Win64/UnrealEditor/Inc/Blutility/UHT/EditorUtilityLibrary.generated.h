// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorUtilityLibrary.h"

#ifdef BLUTILITY_EditorUtilityLibrary_generated_h
#error "EditorUtilityLibrary.generated.h already included, missing '#pragma once' in EditorUtilityLibrary.h"
#endif
#define BLUTILITY_EditorUtilityLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAsyncEditorDelay;
class UAsyncEditorOpenMapAndFocusActor;
class UAsyncEditorWaitForGameWorld;
class UClass;
class UObject;
class UWidget;
class UWidgetBlueprint;
class UWorld;
enum class ECastToWidgetBlueprintCases : uint8;
struct FAssetData;
struct FContentBrowserItemPath;
struct FSoftObjectPath;

// ********** Begin Class UEditorUtilityBlueprintAsyncActionBase ***********************************
struct Z_Construct_UClass_UEditorUtilityBlueprintAsyncActionBase_Statics;
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityBlueprintAsyncActionBase_NoRegister();

#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUEditorUtilityBlueprintAsyncActionBase(); \
	friend struct ::Z_Construct_UClass_UEditorUtilityBlueprintAsyncActionBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUTILITY_API UClass* ::Z_Construct_UClass_UEditorUtilityBlueprintAsyncActionBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorUtilityBlueprintAsyncActionBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), Z_Construct_UClass_UEditorUtilityBlueprintAsyncActionBase_NoRegister) \
	DECLARE_SERIALIZER(UEditorUtilityBlueprintAsyncActionBase)


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUTILITY_API UEditorUtilityBlueprintAsyncActionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityBlueprintAsyncActionBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, UEditorUtilityBlueprintAsyncActionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityBlueprintAsyncActionBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorUtilityBlueprintAsyncActionBase(UEditorUtilityBlueprintAsyncActionBase&&) = delete; \
	UEditorUtilityBlueprintAsyncActionBase(const UEditorUtilityBlueprintAsyncActionBase&) = delete; \
	BLUTILITY_API virtual ~UEditorUtilityBlueprintAsyncActionBase();


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_40_PROLOG
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_INCLASS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorUtilityBlueprintAsyncActionBase;

// ********** End Class UEditorUtilityBlueprintAsyncActionBase *************************************

// ********** Begin Delegate FAsyncDelayComplete ***************************************************
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_50_DELEGATE \
BLUTILITY_API void FAsyncDelayComplete_DelegateWrapper(const FMulticastScriptDelegate& AsyncDelayComplete);


// ********** End Delegate FAsyncDelayComplete *****************************************************

// ********** Begin Class UAsyncEditorDelay ********************************************************
#if WITH_EDITOR
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_55_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execAsyncEditorDelay);
#else // WITH_EDITOR
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_55_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UAsyncEditorDelay_Statics;
BLUTILITY_API UClass* Z_Construct_UClass_UAsyncEditorDelay_NoRegister();

#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncEditorDelay(); \
	friend struct ::Z_Construct_UClass_UAsyncEditorDelay_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUTILITY_API UClass* ::Z_Construct_UClass_UAsyncEditorDelay_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncEditorDelay, UEditorUtilityBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), Z_Construct_UClass_UAsyncEditorDelay_NoRegister) \
	DECLARE_SERIALIZER(UAsyncEditorDelay)


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUTILITY_API UAsyncEditorDelay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncEditorDelay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, UAsyncEditorDelay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncEditorDelay); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncEditorDelay(UAsyncEditorDelay&&) = delete; \
	UAsyncEditorDelay(const UAsyncEditorDelay&) = delete; \
	BLUTILITY_API virtual ~UAsyncEditorDelay();


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_52_PROLOG
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_55_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_55_INCLASS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncEditorDelay;

// ********** End Class UAsyncEditorDelay **********************************************************

// ********** Begin Delegate FAsyncEditorWaitForGameWorldEvent *************************************
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_82_DELEGATE \
BLUTILITY_API void FAsyncEditorWaitForGameWorldEvent_DelegateWrapper(const FMulticastScriptDelegate& AsyncEditorWaitForGameWorldEvent, UWorld* World);


// ********** End Delegate FAsyncEditorWaitForGameWorldEvent ***************************************

// ********** Begin Class UAsyncEditorWaitForGameWorld *********************************************
#if WITH_EDITOR
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_87_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execAsyncWaitForGameWorld);
#else // WITH_EDITOR
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_87_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UAsyncEditorWaitForGameWorld_Statics;
BLUTILITY_API UClass* Z_Construct_UClass_UAsyncEditorWaitForGameWorld_NoRegister();

#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_87_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncEditorWaitForGameWorld(); \
	friend struct ::Z_Construct_UClass_UAsyncEditorWaitForGameWorld_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUTILITY_API UClass* ::Z_Construct_UClass_UAsyncEditorWaitForGameWorld_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncEditorWaitForGameWorld, UEditorUtilityBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), Z_Construct_UClass_UAsyncEditorWaitForGameWorld_NoRegister) \
	DECLARE_SERIALIZER(UAsyncEditorWaitForGameWorld)


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_87_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUTILITY_API UAsyncEditorWaitForGameWorld(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncEditorWaitForGameWorld) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, UAsyncEditorWaitForGameWorld); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncEditorWaitForGameWorld); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncEditorWaitForGameWorld(UAsyncEditorWaitForGameWorld&&) = delete; \
	UAsyncEditorWaitForGameWorld(const UAsyncEditorWaitForGameWorld&) = delete; \
	BLUTILITY_API virtual ~UAsyncEditorWaitForGameWorld();


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_84_PROLOG
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_87_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_87_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_87_INCLASS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_87_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncEditorWaitForGameWorld;

// ********** End Class UAsyncEditorWaitForGameWorld ***********************************************

// ********** Begin Class UAsyncEditorOpenMapAndFocusActor *****************************************
#if WITH_EDITOR
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_117_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execAsyncEditorOpenMapAndFocusActor);
#else // WITH_EDITOR
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_117_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_Statics;
BLUTILITY_API UClass* Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_NoRegister();

#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_117_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncEditorOpenMapAndFocusActor(); \
	friend struct ::Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUTILITY_API UClass* ::Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncEditorOpenMapAndFocusActor, UEditorUtilityBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_NoRegister) \
	DECLARE_SERIALIZER(UAsyncEditorOpenMapAndFocusActor)


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_117_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUTILITY_API UAsyncEditorOpenMapAndFocusActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncEditorOpenMapAndFocusActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, UAsyncEditorOpenMapAndFocusActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncEditorOpenMapAndFocusActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncEditorOpenMapAndFocusActor(UAsyncEditorOpenMapAndFocusActor&&) = delete; \
	UAsyncEditorOpenMapAndFocusActor(const UAsyncEditorOpenMapAndFocusActor&) = delete; \
	BLUTILITY_API virtual ~UAsyncEditorOpenMapAndFocusActor();


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_114_PROLOG
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_117_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_117_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_117_INCLASS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_117_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncEditorOpenMapAndFocusActor;

// ********** End Class UAsyncEditorOpenMapAndFocusActor *******************************************

// ********** Begin Class UEditorUtilityLibrary ****************************************************
#if WITH_EDITOR
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_149_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execAddSourceWidget); \
	DECLARE_FUNCTION(execFindSourceWidgetByName); \
	DECLARE_FUNCTION(execCastToWidgetBlueprint); \
	DECLARE_FUNCTION(execConvertToEditorUtilityWidget); \
	DECLARE_FUNCTION(execSyncBrowserToFolders); \
	DECLARE_FUNCTION(execGetSelectedPathViewFolderPaths); \
	DECLARE_FUNCTION(execGetSelectedFolderPaths); \
	DECLARE_FUNCTION(execGetCurrentContentBrowserItemPath); \
	DECLARE_FUNCTION(execGetCurrentContentBrowserPath); \
	DECLARE_FUNCTION(execGetActorReference); \
	DECLARE_FUNCTION(execRenameAsset); \
	DECLARE_FUNCTION(execGetSelectedAssetData); \
	DECLARE_FUNCTION(execGetSelectedBlueprintClasses); \
	DECLARE_FUNCTION(execGetSelectedAssetsOfClass); \
	DECLARE_FUNCTION(execGetSelectedAssets); \
	DECLARE_FUNCTION(execGetSelectionBounds); \
	DECLARE_FUNCTION(execGetSelectionSet);
#else // WITH_EDITOR
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_149_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UEditorUtilityLibrary_Statics;
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityLibrary_NoRegister();

#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_149_INCLASS \
private: \
	static void StaticRegisterNativesUEditorUtilityLibrary(); \
	friend struct ::Z_Construct_UClass_UEditorUtilityLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUTILITY_API UClass* ::Z_Construct_UClass_UEditorUtilityLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorUtilityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), Z_Construct_UClass_UEditorUtilityLibrary_NoRegister) \
	DECLARE_SERIALIZER(UEditorUtilityLibrary)


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_149_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUTILITY_API UEditorUtilityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, UEditorUtilityLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorUtilityLibrary(UEditorUtilityLibrary&&) = delete; \
	UEditorUtilityLibrary(const UEditorUtilityLibrary&) = delete; \
	BLUTILITY_API virtual ~UEditorUtilityLibrary();


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_146_PROLOG
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_149_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_149_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_149_INCLASS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_149_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorUtilityLibrary;

// ********** End Class UEditorUtilityLibrary ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h

// ********** Begin Enum ECastToWidgetBlueprintCases ***********************************************
#define FOREACH_ENUM_ECASTTOWIDGETBLUEPRINTCASES(op) \
	op(ECastToWidgetBlueprintCases::CastSucceeded) \
	op(ECastToWidgetBlueprintCases::CastFailed) 

enum class ECastToWidgetBlueprintCases : uint8;
template<> struct TIsUEnumClass<ECastToWidgetBlueprintCases> { enum { Value = true }; };
template<> BLUTILITY_NON_ATTRIBUTED_API UEnum* StaticEnum<ECastToWidgetBlueprintCases>();
// ********** End Enum ECastToWidgetBlueprintCases *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
