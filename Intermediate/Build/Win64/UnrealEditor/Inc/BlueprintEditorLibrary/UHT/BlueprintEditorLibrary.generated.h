// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintEditorLibrary.h"

#ifdef BLUEPRINTEDITORLIBRARY_BlueprintEditorLibrary_generated_h
#error "BlueprintEditorLibrary.generated.h already included, missing '#pragma once' in BlueprintEditorLibrary.h"
#endif
#define BLUEPRINTEDITORLIBRARY_BlueprintEditorLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlueprint;
class UClass;
class UEdGraph;
class UObject;
class UScriptStruct;
enum class EAssetSaveVersionComparisonResults : uint8;
struct FEdGraphPinType;

// ********** Begin Class UBlueprintEditorLibrary **************************************************
#define FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_49_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetMapType); \
	DECLARE_FUNCTION(execGetSetType); \
	DECLARE_FUNCTION(execGetArrayType); \
	DECLARE_FUNCTION(execGetObjectReferenceType); \
	DECLARE_FUNCTION(execGetClassReferenceType); \
	DECLARE_FUNCTION(execGetStructType); \
	DECLARE_FUNCTION(execGetBasicTypeByName); \
	DECLARE_FUNCTION(execAddMemberVariable); \
	DECLARE_FUNCTION(execCreateBlueprintAssetWithParent); \
	DECLARE_FUNCTION(execSetBlueprintVariableInstanceEditable); \
	DECLARE_FUNCTION(execSetBlueprintVariableExposeToCinematics); \
	DECLARE_FUNCTION(execSetBlueprintVariableExposeOnSpawn); \
	DECLARE_FUNCTION(execGeneratedClass); \
	DECLARE_FUNCTION(execRemoveUnusedVariables); \
	DECLARE_FUNCTION(execReparentBlueprint); \
	DECLARE_FUNCTION(execRefreshAllOpenBlueprintEditors); \
	DECLARE_FUNCTION(execRefreshOpenEditorsForBlueprint); \
	DECLARE_FUNCTION(execGetBlueprintForClass); \
	DECLARE_FUNCTION(execGetBlueprintAsset); \
	DECLARE_FUNCTION(execRenameGraph); \
	DECLARE_FUNCTION(execRemoveGraph); \
	DECLARE_FUNCTION(execRemoveUnusedNodes); \
	DECLARE_FUNCTION(execRemoveFunctionGraph); \
	DECLARE_FUNCTION(execAddFunctionGraph); \
	DECLARE_FUNCTION(execCompileBlueprint); \
	DECLARE_FUNCTION(execUpgradeOperatorNodes); \
	DECLARE_FUNCTION(execFindGraph); \
	DECLARE_FUNCTION(execGetCurrentEngineVersion); \
	DECLARE_FUNCTION(execGetSavedByEngineVersion); \
	DECLARE_FUNCTION(execCompareSoftObjectSaveVersionTo); \
	DECLARE_FUNCTION(execCompareAssetSaveVersionTo); \
	DECLARE_FUNCTION(execFindEventGraph); \
	DECLARE_FUNCTION(execReplaceVariableReferences);


struct Z_Construct_UClass_UBlueprintEditorLibrary_Statics;
	struct Z_Construct_UFunction_UBlueprintEditorLibrary_AddMemberVariableWithValue_Statics; \
BLUEPRINTEDITORLIBRARY_API UClass* Z_Construct_UClass_UBlueprintEditorLibrary_NoRegister();

#define FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintEditorLibrary(); \
	friend struct ::Z_Construct_UClass_UBlueprintEditorLibrary_Statics; \
	friend struct ::Z_Construct_UFunction_UBlueprintEditorLibrary_AddMemberVariableWithValue_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTEDITORLIBRARY_API UClass* ::Z_Construct_UClass_UBlueprintEditorLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintEditorLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintEditorLibrary"), Z_Construct_UClass_UBlueprintEditorLibrary_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintEditorLibrary)


#define FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTEDITORLIBRARY_API UBlueprintEditorLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintEditorLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTEDITORLIBRARY_API, UBlueprintEditorLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintEditorLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintEditorLibrary(UBlueprintEditorLibrary&&) = delete; \
	UBlueprintEditorLibrary(const UBlueprintEditorLibrary&) = delete; \
	BLUEPRINTEDITORLIBRARY_API virtual ~UBlueprintEditorLibrary();


#define FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_46_PROLOG
#define FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_49_RPC_WRAPPERS \
	FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_49_INCLASS \
	FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintEditorLibrary;

// ********** End Class UBlueprintEditorLibrary ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h

// ********** Begin Enum EAssetSaveVersionComparisonResults ****************************************
#define FOREACH_ENUM_EASSETSAVEVERSIONCOMPARISONRESULTS(op) \
	op(EAssetSaveVersionComparisonResults::InvalidComparison) \
	op(EAssetSaveVersionComparisonResults::Identical) \
	op(EAssetSaveVersionComparisonResults::Newer) \
	op(EAssetSaveVersionComparisonResults::Older) 

enum class EAssetSaveVersionComparisonResults : uint8;
template<> struct TIsUEnumClass<EAssetSaveVersionComparisonResults> { enum { Value = true }; };
template<> BLUEPRINTEDITORLIBRARY_NON_ATTRIBUTED_API UEnum* StaticEnum<EAssetSaveVersionComparisonResults>();
// ********** End Enum EAssetSaveVersionComparisonResults ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
