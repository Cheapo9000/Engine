// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetDefinition.h"

#ifdef ASSETDEFINITION_AssetDefinition_generated_h
#error "AssetDefinition.generated.h already included, missing '#pragma once' in AssetDefinition.h"
#endif
#define ASSETDEFINITION_AssetDefinition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRevisionInfo *****************************************************
struct Z_Construct_UScriptStruct_FRevisionInfo_Statics;
#define FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_229_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRevisionInfo_Statics; \
	ASSETDEFINITION_API static class UScriptStruct* StaticStruct();


struct FRevisionInfo;
// ********** End ScriptStruct FRevisionInfo *******************************************************

// ********** Begin Class UAssetDefinition *********************************************************
struct Z_Construct_UClass_UAssetDefinition_Statics;
ASSETDEFINITION_API UClass* Z_Construct_UClass_UAssetDefinition_NoRegister();

#define FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_456_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSETDEFINITION_API UClass* ::Z_Construct_UClass_UAssetDefinition_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AssetDefinition"), Z_Construct_UClass_UAssetDefinition_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition)


#define FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_456_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition(UAssetDefinition&&) = delete; \
	UAssetDefinition(const UAssetDefinition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASSETDEFINITION_API, UAssetDefinition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition) \
	ASSETDEFINITION_API virtual ~UAssetDefinition();


#define FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_453_PROLOG
#define FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_456_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_456_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_456_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition;

// ********** End Class UAssetDefinition ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h

// ********** Begin Enum EAssetActivationMethod ****************************************************
#define FOREACH_ENUM_EASSETACTIVATIONMETHOD(op) \
	op(EAssetActivationMethod::DoubleClicked) \
	op(EAssetActivationMethod::Opened) \
	op(EAssetActivationMethod::Previewed) 

enum class EAssetActivationMethod : uint8;
template<> struct TIsUEnumClass<EAssetActivationMethod> { enum { Value = true }; };
template<> ASSETDEFINITION_NON_ATTRIBUTED_API UEnum* StaticEnum<EAssetActivationMethod>();
// ********** End Enum EAssetActivationMethod ******************************************************

// ********** Begin Enum EAssetCommandResult *******************************************************
#define FOREACH_ENUM_EASSETCOMMANDRESULT(op) \
	op(EAssetCommandResult::Handled) \
	op(EAssetCommandResult::Unhandled) 

enum class EAssetCommandResult : uint8;
template<> struct TIsUEnumClass<EAssetCommandResult> { enum { Value = true }; };
template<> ASSETDEFINITION_NON_ATTRIBUTED_API UEnum* StaticEnum<EAssetCommandResult>();
// ********** End Enum EAssetCommandResult *********************************************************

// ********** Begin Enum EAssetOpenMethod **********************************************************
#define FOREACH_ENUM_EASSETOPENMETHOD(op) \
	op(EAssetOpenMethod::Edit) \
	op(EAssetOpenMethod::View) 

enum class EAssetOpenMethod : uint8;
template<> struct TIsUEnumClass<EAssetOpenMethod> { enum { Value = true }; };
template<> ASSETDEFINITION_NON_ATTRIBUTED_API UEnum* StaticEnum<EAssetOpenMethod>();
// ********** End Enum EAssetOpenMethod ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
