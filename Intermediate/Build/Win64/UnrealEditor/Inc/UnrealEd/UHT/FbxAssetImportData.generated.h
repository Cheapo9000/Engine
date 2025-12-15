// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/FbxAssetImportData.h"

#ifdef UNREALED_FbxAssetImportData_generated_h
#error "FbxAssetImportData.generated.h already included, missing '#pragma once' in FbxAssetImportData.h"
#endif
#define UNREALED_FbxAssetImportData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFbxAssetImportData ******************************************************
struct Z_Construct_UClass_UFbxAssetImportData_Statics;
UNREALED_API UClass* Z_Construct_UClass_UFbxAssetImportData_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAssetImportData_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUFbxAssetImportData(); \
	friend struct ::Z_Construct_UClass_UFbxAssetImportData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UFbxAssetImportData_NoRegister(); \
public: \
	DECLARE_CLASS2(UFbxAssetImportData, UAssetImportData, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UFbxAssetImportData_NoRegister) \
	DECLARE_SERIALIZER(UFbxAssetImportData) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAssetImportData_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxAssetImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxAssetImportData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxAssetImportData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxAssetImportData); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFbxAssetImportData(UFbxAssetImportData&&) = delete; \
	UFbxAssetImportData(const UFbxAssetImportData&) = delete; \
	UNREALED_API virtual ~UFbxAssetImportData();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAssetImportData_h_24_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAssetImportData_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAssetImportData_h_27_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAssetImportData_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFbxAssetImportData;

// ********** End Class UFbxAssetImportData ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAssetImportData_h

// ********** Begin Enum ECoordinateSystemPolicy ***************************************************
#define FOREACH_ENUM_ECOORDINATESYSTEMPOLICY(op) \
	op(ECoordinateSystemPolicy::MatchUpForwardAxes) \
	op(ECoordinateSystemPolicy::MatchUpAxis) \
	op(ECoordinateSystemPolicy::KeepXYZAxes) 

enum class ECoordinateSystemPolicy : uint8;
template<> struct TIsUEnumClass<ECoordinateSystemPolicy> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<ECoordinateSystemPolicy>();
// ********** End Enum ECoordinateSystemPolicy *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
