// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FabSettings.h"

#ifdef FAB_FabSettings_generated_h
#error "FabSettings.generated.h already included, missing '#pragma once' in FabSettings.h"
#endif
#define FAB_FabSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFabSettings *************************************************************
struct Z_Construct_UClass_UFabSettings_Statics;
FAB_API UClass* Z_Construct_UClass_UFabSettings_NoRegister();

#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabSettings_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFabSettings(); \
	friend struct ::Z_Construct_UClass_UFabSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FAB_API UClass* ::Z_Construct_UClass_UFabSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UFabSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fab"), Z_Construct_UClass_UFabSettings_NoRegister) \
	DECLARE_SERIALIZER(UFabSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabSettings_h_39_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFabSettings(UFabSettings&&) = delete; \
	UFabSettings(const UFabSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFabSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFabSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFabSettings) \
	NO_API virtual ~UFabSettings();


#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabSettings_h_36_PROLOG
#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabSettings_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabSettings_h_39_INCLASS_NO_PURE_DECLS \
	FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabSettings_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFabSettings;

// ********** End Class UFabSettings ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabSettings_h

// ********** Begin Enum EFabEnvironment ***********************************************************
#define FOREACH_ENUM_EFABENVIRONMENT(op) \
	op(EFabEnvironment::Prod) \
	op(EFabEnvironment::Gamedev) \
	op(EFabEnvironment::Test) \
	op(EFabEnvironment::CustomUrl) 

enum class EFabEnvironment : uint8;
template<> struct TIsUEnumClass<EFabEnvironment> { enum { Value = true }; };
template<> FAB_NON_ATTRIBUTED_API UEnum* StaticEnum<EFabEnvironment>();
// ********** End Enum EFabEnvironment *************************************************************

// ********** Begin Enum EFabPreferredFormats ******************************************************
#define FOREACH_ENUM_EFABPREFERREDFORMATS(op) \
	op(EFabPreferredFormats::GLTF) \
	op(EFabPreferredFormats::FBX) 

enum class EFabPreferredFormats : uint8;
template<> struct TIsUEnumClass<EFabPreferredFormats> { enum { Value = true }; };
template<> FAB_NON_ATTRIBUTED_API UEnum* StaticEnum<EFabPreferredFormats>();
// ********** End Enum EFabPreferredFormats ********************************************************

// ********** Begin Enum EFabPreferredQualityTier **************************************************
#define FOREACH_ENUM_EFABPREFERREDQUALITYTIER(op) \
	op(EFabPreferredQualityTier::Low) \
	op(EFabPreferredQualityTier::Medium) \
	op(EFabPreferredQualityTier::High) \
	op(EFabPreferredQualityTier::Raw) 

enum class EFabPreferredQualityTier : uint8;
template<> struct TIsUEnumClass<EFabPreferredQualityTier> { enum { Value = true }; };
template<> FAB_NON_ATTRIBUTED_API UEnum* StaticEnum<EFabPreferredQualityTier>();
// ********** End Enum EFabPreferredQualityTier ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
