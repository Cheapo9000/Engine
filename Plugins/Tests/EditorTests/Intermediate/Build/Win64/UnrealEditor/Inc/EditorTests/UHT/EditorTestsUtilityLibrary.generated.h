// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorTestsUtilityLibrary.h"

#ifdef EDITORTESTS_EditorTestsUtilityLibrary_generated_h
#error "EditorTestsUtilityLibrary.generated.h already included, missing '#pragma once' in EditorTestsUtilityLibrary.h"
#endif
#define EDITORTESTS_EditorTestsUtilityLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialMergeOptions;
class UMaterialOptions;
class UStaticMeshComponent;
class UWidget;
class UWidgetBlueprint;
enum class EUINavigation : uint8;
enum class EUINavigationRule : uint8;
struct FMeshMergingSettings;
struct FMeshProxySettings;

// ********** Begin Class UEditorTestsUtilityLibrary ***********************************************
#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Public_EditorTestsUtilityLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEditorWidgetNavigationRule); \
	DECLARE_FUNCTION(execSetEditorWidgetNavigationRule); \
	DECLARE_FUNCTION(execGetChildEditorWidgetByName); \
	DECLARE_FUNCTION(execCreateProxyMesh); \
	DECLARE_FUNCTION(execMergeStaticMeshComponents); \
	DECLARE_FUNCTION(execBakeMaterialsForComponent);


struct Z_Construct_UClass_UEditorTestsUtilityLibrary_Statics;
EDITORTESTS_API UClass* Z_Construct_UClass_UEditorTestsUtilityLibrary_NoRegister();

#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Public_EditorTestsUtilityLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorTestsUtilityLibrary(); \
	friend struct ::Z_Construct_UClass_UEditorTestsUtilityLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORTESTS_API UClass* ::Z_Construct_UClass_UEditorTestsUtilityLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorTestsUtilityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorTests"), Z_Construct_UClass_UEditorTestsUtilityLibrary_NoRegister) \
	DECLARE_SERIALIZER(UEditorTestsUtilityLibrary)


#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Public_EditorTestsUtilityLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorTestsUtilityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorTestsUtilityLibrary(UEditorTestsUtilityLibrary&&) = delete; \
	UEditorTestsUtilityLibrary(const UEditorTestsUtilityLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorTestsUtilityLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorTestsUtilityLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorTestsUtilityLibrary) \
	NO_API virtual ~UEditorTestsUtilityLibrary();


#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Public_EditorTestsUtilityLibrary_h_19_PROLOG
#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Public_EditorTestsUtilityLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Public_EditorTestsUtilityLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Public_EditorTestsUtilityLibrary_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Public_EditorTestsUtilityLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorTestsUtilityLibrary;

// ********** End Class UEditorTestsUtilityLibrary *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Public_EditorTestsUtilityLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
