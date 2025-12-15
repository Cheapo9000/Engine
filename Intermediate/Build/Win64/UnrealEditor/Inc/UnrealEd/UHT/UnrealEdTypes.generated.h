// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editor/UnrealEdTypes.h"

#ifdef UNREALED_UnrealEdTypes_generated_h
#error "UnrealEdTypes.generated.h already included, missing '#pragma once' in UnrealEdTypes.h"
#endif
#define UNREALED_UnrealEdTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLightmassParameterValue ******************************************
struct Z_Construct_UScriptStruct_FLightmassParameterValue_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLightmassParameterValue_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FLightmassParameterValue;
// ********** End ScriptStruct FLightmassParameterValue ********************************************

// ********** Begin ScriptStruct FLightmassBooleanParameterValue ***********************************
struct Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct(); \
	typedef FLightmassParameterValue Super;


struct FLightmassBooleanParameterValue;
// ********** End ScriptStruct FLightmassBooleanParameterValue *************************************

// ********** Begin ScriptStruct FLightmassScalarParameterValue ************************************
struct Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct(); \
	typedef FLightmassParameterValue Super;


struct FLightmassScalarParameterValue;
// ********** End ScriptStruct FLightmassScalarParameterValue **************************************

// ********** Begin ScriptStruct FLightmassParameterizedMaterialSettings ***************************
struct Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_78_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FLightmassParameterizedMaterialSettings;
// ********** End ScriptStruct FLightmassParameterizedMaterialSettings *****************************

// ********** Begin Class UUnrealEdTypes ***********************************************************
struct Z_Construct_UClass_UUnrealEdTypes_Statics;
UNREALED_API UClass* Z_Construct_UClass_UUnrealEdTypes_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_166_INCLASS \
private: \
	static void StaticRegisterNativesUUnrealEdTypes(); \
	friend struct ::Z_Construct_UClass_UUnrealEdTypes_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UUnrealEdTypes_NoRegister(); \
public: \
	DECLARE_CLASS2(UUnrealEdTypes, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UUnrealEdTypes_NoRegister) \
	DECLARE_SERIALIZER(UUnrealEdTypes) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("UnrealEd");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_166_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealEdTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealEdTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealEdTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealEdTypes); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUnrealEdTypes(UUnrealEdTypes&&) = delete; \
	UUnrealEdTypes(const UUnrealEdTypes&) = delete; \
	NO_API virtual ~UUnrealEdTypes();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_163_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_166_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_166_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_166_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUnrealEdTypes;

// ********** End Class UUnrealEdTypes *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h

// ********** Begin Enum ELevelViewportType ********************************************************
#define FOREACH_ENUM_ELEVELVIEWPORTTYPE(op) \
	op(LVT_OrthoXY) \
	op(LVT_OrthoXZ) \
	op(LVT_OrthoYZ) \
	op(LVT_Perspective) \
	op(LVT_OrthoFreelook) \
	op(LVT_OrthoNegativeXY) \
	op(LVT_OrthoNegativeXZ) \
	op(LVT_OrthoNegativeYZ) \
	op(LVT_OrthoTop) \
	op(LVT_OrthoLeft) \
	op(LVT_OrthoFront) \
	op(LVT_OrthoBack) \
	op(LVT_OrthoBottom) \
	op(LVT_OrthoRight) \
	op(LVT_MAX) 

enum ELevelViewportType : int;
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<ELevelViewportType>();
// ********** End Enum ELevelViewportType **********************************************************

// ********** Begin Enum EDestructiveAssetActions **************************************************
#define FOREACH_ENUM_EDESTRUCTIVEASSETACTIONS(op) \
	op(AssetDelete) \
	op(AssetRename) \
	op(AssetMove) \
	op(AssetPrivatize) 

enum EDestructiveAssetActions : int;
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EDestructiveAssetActions>();
// ********** End Enum EDestructiveAssetActions ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
