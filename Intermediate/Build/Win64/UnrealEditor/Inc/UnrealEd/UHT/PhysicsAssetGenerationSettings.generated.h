// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsAssetGenerationSettings.h"

#ifdef UNREALED_PhysicsAssetGenerationSettings_generated_h
#error "PhysicsAssetGenerationSettings.generated.h already included, missing '#pragma once' in PhysicsAssetGenerationSettings.h"
#endif
#define UNREALED_PhysicsAssetGenerationSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPhysicsAssetGenerationSettings ******************************************
struct Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics;
UNREALED_API UClass* Z_Construct_UClass_UPhysicsAssetGenerationSettings_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_PhysicsAssetGenerationSettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsAssetGenerationSettings(); \
	friend struct ::Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UPhysicsAssetGenerationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsAssetGenerationSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UPhysicsAssetGenerationSettings_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsAssetGenerationSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Public_PhysicsAssetGenerationSettings_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsAssetGenerationSettings(UPhysicsAssetGenerationSettings&&) = delete; \
	UPhysicsAssetGenerationSettings(const UPhysicsAssetGenerationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UPhysicsAssetGenerationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsAssetGenerationSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPhysicsAssetGenerationSettings) \
	UNREALED_API virtual ~UPhysicsAssetGenerationSettings();


#define FID_Engine_Source_Editor_UnrealEd_Public_PhysicsAssetGenerationSettings_h_9_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_PhysicsAssetGenerationSettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_PhysicsAssetGenerationSettings_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_PhysicsAssetGenerationSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsAssetGenerationSettings;

// ********** End Class UPhysicsAssetGenerationSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_PhysicsAssetGenerationSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
