// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SkeletalMeshLODSettings.h"

#ifdef ENGINE_SkeletalMeshLODSettings_generated_h
#error "SkeletalMeshLODSettings.generated.h already included, missing '#pragma once' in SkeletalMeshLODSettings.h"
#endif
#define ENGINE_SkeletalMeshLODSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBoneFilter *******************************************************
struct Z_Construct_UScriptStruct_FBoneFilter_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBoneFilter_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBoneFilter;
// ********** End ScriptStruct FBoneFilter *********************************************************

// ********** Begin ScriptStruct FSkeletalMeshLODGroupSettings *************************************
struct Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSkeletalMeshLODGroupSettings;
// ********** End ScriptStruct FSkeletalMeshLODGroupSettings ***************************************

// ********** Begin Class USkeletalMeshLODSettings *************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_125_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMeshLODSettings, ENGINE_API)


struct Z_Construct_UClass_USkeletalMeshLODSettings_Statics;
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshLODSettings_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_125_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalMeshLODSettings(); \
	friend struct ::Z_Construct_UClass_USkeletalMeshLODSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USkeletalMeshLODSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletalMeshLODSettings, UDataAsset, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USkeletalMeshLODSettings_NoRegister) \
	DECLARE_SERIALIZER(USkeletalMeshLODSettings) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_125_ARCHIVESERIALIZER \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_125_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeletalMeshLODSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshLODSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeletalMeshLODSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshLODSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletalMeshLODSettings(USkeletalMeshLODSettings&&) = delete; \
	USkeletalMeshLODSettings(const USkeletalMeshLODSettings&) = delete; \
	ENGINE_API virtual ~USkeletalMeshLODSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_122_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_125_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_125_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_125_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletalMeshLODSettings;

// ********** End Class USkeletalMeshLODSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h

// ********** Begin Enum EBoneFilterActionOption ***************************************************
#define FOREACH_ENUM_EBONEFILTERACTIONOPTION(op) \
	op(EBoneFilterActionOption::Remove) \
	op(EBoneFilterActionOption::Keep) \
	op(EBoneFilterActionOption::Invalid) 

enum class EBoneFilterActionOption : uint8;
template<> struct TIsUEnumClass<EBoneFilterActionOption> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBoneFilterActionOption>();
// ********** End Enum EBoneFilterActionOption *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
