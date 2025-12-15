// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Exporters/FbxExportOption.h"

#ifdef UNREALED_FbxExportOption_generated_h
#error "FbxExportOption.generated.h already included, missing '#pragma once' in FbxExportOption.h"
#endif
#define UNREALED_FbxExportOption_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFbxMaterialBakeSize **********************************************
struct Z_Construct_UScriptStruct_FFbxMaterialBakeSize_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_FbxExportOption_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFbxMaterialBakeSize_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FFbxMaterialBakeSize;
// ********** End ScriptStruct FFbxMaterialBakeSize ************************************************

// ********** Begin Class UFbxExportOption *********************************************************
struct Z_Construct_UClass_UFbxExportOption_Statics;
UNREALED_API UClass* Z_Construct_UClass_UFbxExportOption_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_FbxExportOption_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUFbxExportOption(); \
	friend struct ::Z_Construct_UClass_UFbxExportOption_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UFbxExportOption_NoRegister(); \
public: \
	DECLARE_CLASS2(UFbxExportOption, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UFbxExportOption_NoRegister) \
	DECLARE_SERIALIZER(UFbxExportOption) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_FbxExportOption_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxExportOption(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxExportOption) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxExportOption); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxExportOption); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFbxExportOption(UFbxExportOption&&) = delete; \
	UFbxExportOption(const UFbxExportOption&) = delete; \
	UNREALED_API virtual ~UFbxExportOption();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_FbxExportOption_h_63_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_FbxExportOption_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_FbxExportOption_h_66_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_FbxExportOption_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFbxExportOption;

// ********** End Class UFbxExportOption ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_FbxExportOption_h

// ********** Begin Enum EFbxExportCompatibility ***************************************************
#define FOREACH_ENUM_EFBXEXPORTCOMPATIBILITY(op) \
	op(EFbxExportCompatibility::FBX_2011) \
	op(EFbxExportCompatibility::FBX_2012) \
	op(EFbxExportCompatibility::FBX_2013) \
	op(EFbxExportCompatibility::FBX_2014) \
	op(EFbxExportCompatibility::FBX_2016) \
	op(EFbxExportCompatibility::FBX_2018) \
	op(EFbxExportCompatibility::FBX_2019) \
	op(EFbxExportCompatibility::FBX_2020) 

enum class EFbxExportCompatibility : uint8;
template<> struct TIsUEnumClass<EFbxExportCompatibility> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EFbxExportCompatibility>();
// ********** End Enum EFbxExportCompatibility *****************************************************

// ********** Begin Enum EMovieSceneBakeType *******************************************************
#define FOREACH_ENUM_EMOVIESCENEBAKETYPE(op) \
	op(EMovieSceneBakeType::None) \
	op(EMovieSceneBakeType::BakeChannels) \
	op(EMovieSceneBakeType::BakeTransforms) \
	op(EMovieSceneBakeType::BakeAll) 

enum class EMovieSceneBakeType : uint8;
template<> struct TIsUEnumClass<EMovieSceneBakeType> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieSceneBakeType>();
// ********** End Enum EMovieSceneBakeType *********************************************************

// ********** Begin Enum EFbxMaterialBakeMode ******************************************************
#define FOREACH_ENUM_EFBXMATERIALBAKEMODE(op) \
	op(EFbxMaterialBakeMode::Disabled) \
	op(EFbxMaterialBakeMode::Simple) \
	op(EFbxMaterialBakeMode::UseMeshData) 

enum class EFbxMaterialBakeMode : uint8;
template<> struct TIsUEnumClass<EFbxMaterialBakeMode> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EFbxMaterialBakeMode>();
// ********** End Enum EFbxMaterialBakeMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
