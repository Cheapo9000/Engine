// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetActionUtility.h"

#ifdef BLUTILITY_AssetActionUtility_generated_h
#error "AssetActionUtility.generated.h already included, missing '#pragma once' in AssetActionUtility.h"
#endif
#define BLUTILITY_AssetActionUtility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UObject;

// ********** Begin ScriptStruct FAssetActionSupportCondition **************************************
struct Z_Construct_UScriptStruct_FAssetActionSupportCondition_Statics;
#define FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAssetActionSupportCondition_Statics; \
	BLUTILITY_API static class UScriptStruct* StaticStruct();


struct FAssetActionSupportCondition;
// ********** End ScriptStruct FAssetActionSupportCondition ****************************************

// ********** Begin Class UAssetActionUtility ******************************************************
#define FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	BLUTILITY_API virtual bool IsActionForBlueprints_Implementation() const; \
	DECLARE_FUNCTION(execGetSupportedClasses); \
	DECLARE_FUNCTION(execIsActionForBlueprints);


#define FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_62_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UAssetActionUtility_Statics;
BLUTILITY_API UClass* Z_Construct_UClass_UAssetActionUtility_NoRegister();

#define FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetActionUtility(); \
	friend struct ::Z_Construct_UClass_UAssetActionUtility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUTILITY_API UClass* ::Z_Construct_UClass_UAssetActionUtility_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetActionUtility, UEditorUtilityObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Blutility"), Z_Construct_UClass_UAssetActionUtility_NoRegister) \
	DECLARE_SERIALIZER(UAssetActionUtility) \
	virtual UObject* _getUObject() const override { return const_cast<UAssetActionUtility*>(this); }


#define FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUTILITY_API UAssetActionUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetActionUtility(UAssetActionUtility&&) = delete; \
	UAssetActionUtility(const UAssetActionUtility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, UAssetActionUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetActionUtility); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetActionUtility) \
	BLUTILITY_API virtual ~UAssetActionUtility();


#define FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_59_PROLOG
#define FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_62_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetActionUtility;

// ********** End Class UAssetActionUtility ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
