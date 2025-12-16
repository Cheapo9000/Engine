// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FunctionLibraries/AssetFilteringAndSortingFunctionLibrary.h"

#ifdef VIRTUALCAMERA_AssetFilteringAndSortingFunctionLibrary_generated_h
#error "AssetFilteringAndSortingFunctionLibrary.generated.h already included, missing '#pragma once' in AssetFilteringAndSortingFunctionLibrary.h"
#endif
#define VIRTUALCAMERA_AssetFilteringAndSortingFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UObject;
enum class EAssetTagMetaDataSortType : uint8;
enum class ESortOrder : uint8;
struct FAssetData;

// ********** Begin Delegate FAssetSortingPredicate ************************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_31_DELEGATE \
VIRTUALCAMERA_API bool FAssetSortingPredicate_DelegateWrapper(const FScriptDelegate& AssetSortingPredicate, FAssetData const& Left, FAssetData const& Right);


// ********** End Delegate FAssetSortingPredicate **************************************************

// ********** Begin Class UDEPRECATED_AssetFilteringAndSortingFunctionLibrary **********************
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSortByMetaData); \
	DECLARE_FUNCTION(execSortByAssetName); \
	DECLARE_FUNCTION(execSortByCustomPredicate); \
	DECLARE_FUNCTION(execGetAllAssetsByMetaDataTags);


struct Z_Construct_UClass_UDEPRECATED_AssetFilteringAndSortingFunctionLibrary_Statics;
VIRTUALCAMERA_API UClass* Z_Construct_UClass_UDEPRECATED_AssetFilteringAndSortingFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_AssetFilteringAndSortingFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UDEPRECATED_AssetFilteringAndSortingFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIRTUALCAMERA_API UClass* ::Z_Construct_UClass_UDEPRECATED_AssetFilteringAndSortingFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEPRECATED_AssetFilteringAndSortingFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/VirtualCamera"), Z_Construct_UClass_UDEPRECATED_AssetFilteringAndSortingFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UDEPRECATED_AssetFilteringAndSortingFunctionLibrary)


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_AssetFilteringAndSortingFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEPRECATED_AssetFilteringAndSortingFunctionLibrary(UDEPRECATED_AssetFilteringAndSortingFunctionLibrary&&) = delete; \
	UDEPRECATED_AssetFilteringAndSortingFunctionLibrary(const UDEPRECATED_AssetFilteringAndSortingFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_AssetFilteringAndSortingFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_AssetFilteringAndSortingFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_AssetFilteringAndSortingFunctionLibrary) \
	NO_API virtual ~UDEPRECATED_AssetFilteringAndSortingFunctionLibrary();


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_34_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEPRECATED_AssetFilteringAndSortingFunctionLibrary;

// ********** End Class UDEPRECATED_AssetFilteringAndSortingFunctionLibrary ************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h

// ********** Begin Enum ESortOrder ****************************************************************
#define FOREACH_ENUM_ESORTORDER(op) \
	op(ESortOrder::Ascending) \
	op(ESortOrder::Descending) 

enum class ESortOrder : uint8;
template<> struct TIsUEnumClass<ESortOrder> { enum { Value = true }; };
template<> VIRTUALCAMERA_NON_ATTRIBUTED_API UEnum* StaticEnum<ESortOrder>();
// ********** End Enum ESortOrder ******************************************************************

// ********** Begin Enum EAssetTagMetaDataSortType *************************************************
#define FOREACH_ENUM_EASSETTAGMETADATASORTTYPE(op) \
	op(EAssetTagMetaDataSortType::String) \
	op(EAssetTagMetaDataSortType::Numeric) \
	op(EAssetTagMetaDataSortType::DateTime) 

enum class EAssetTagMetaDataSortType : uint8;
template<> struct TIsUEnumClass<EAssetTagMetaDataSortType> { enum { Value = true }; };
template<> VIRTUALCAMERA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAssetTagMetaDataSortType>();
// ********** End Enum EAssetTagMetaDataSortType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
