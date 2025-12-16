// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDStageImportOptions.h"

#ifdef USDSTAGEIMPORTER_USDStageImportOptions_generated_h
#error "USDStageImportOptions.generated.h already included, missing '#pragma once' in USDStageImportOptions.h"
#endif
#define USDSTAGEIMPORTER_USDStageImportOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUsdStageImportOptions ***************************************************
struct Z_Construct_UClass_UUsdStageImportOptions_Statics;
USDSTAGEIMPORTER_API UClass* Z_Construct_UClass_UUsdStageImportOptions_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Public_USDStageImportOptions_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUUsdStageImportOptions(); \
	friend struct ::Z_Construct_UClass_UUsdStageImportOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDSTAGEIMPORTER_API UClass* ::Z_Construct_UClass_UUsdStageImportOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UUsdStageImportOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/USDStageImporter"), Z_Construct_UClass_UUsdStageImportOptions_NoRegister) \
	DECLARE_SERIALIZER(UUsdStageImportOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Public_USDStageImportOptions_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	USDSTAGEIMPORTER_API UUsdStageImportOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUsdStageImportOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(USDSTAGEIMPORTER_API, UUsdStageImportOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUsdStageImportOptions); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUsdStageImportOptions(UUsdStageImportOptions&&) = delete; \
	UUsdStageImportOptions(const UUsdStageImportOptions&) = delete; \
	USDSTAGEIMPORTER_API virtual ~UUsdStageImportOptions();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Public_USDStageImportOptions_h_48_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Public_USDStageImportOptions_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Public_USDStageImportOptions_h_51_INCLASS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Public_USDStageImportOptions_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUsdStageImportOptions;

// ********** End Class UUsdStageImportOptions *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Public_USDStageImportOptions_h

// ********** Begin Enum EReplaceActorPolicy *******************************************************
#define FOREACH_ENUM_EREPLACEACTORPOLICY(op) \
	op(EReplaceActorPolicy::Append) \
	op(EReplaceActorPolicy::Replace) \
	op(EReplaceActorPolicy::UpdateTransform) \
	op(EReplaceActorPolicy::Ignore) 

enum class EReplaceActorPolicy : uint8;
template<> struct TIsUEnumClass<EReplaceActorPolicy> { enum { Value = true }; };
template<> USDSTAGEIMPORTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EReplaceActorPolicy>();
// ********** End Enum EReplaceActorPolicy *********************************************************

// ********** Begin Enum EReplaceAssetPolicy *******************************************************
#define FOREACH_ENUM_EREPLACEASSETPOLICY(op) \
	op(EReplaceAssetPolicy::Append) \
	op(EReplaceAssetPolicy::Replace) \
	op(EReplaceAssetPolicy::Ignore) 

enum class EReplaceAssetPolicy : uint8;
template<> struct TIsUEnumClass<EReplaceAssetPolicy> { enum { Value = true }; };
template<> USDSTAGEIMPORTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EReplaceAssetPolicy>();
// ********** End Enum EReplaceAssetPolicy *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
