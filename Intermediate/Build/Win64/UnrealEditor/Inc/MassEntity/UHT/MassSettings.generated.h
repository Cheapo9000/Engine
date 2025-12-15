// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassSettings.h"

#ifdef MASSENTITY_MassSettings_generated_h
#error "MassSettings.generated.h already included, missing '#pragma once' in MassSettings.h"
#endif
#define MASSENTITY_MassSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassModuleSettings ******************************************************
struct Z_Construct_UClass_UMassModuleSettings_Statics;
MASSENTITY_API UClass* Z_Construct_UClass_UMassModuleSettings_NoRegister();

#define FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassModuleSettings(); \
	friend struct ::Z_Construct_UClass_UMassModuleSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSENTITY_API UClass* ::Z_Construct_UClass_UMassModuleSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassModuleSettings, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassEntity"), Z_Construct_UClass_UMassModuleSettings_NoRegister) \
	DECLARE_SERIALIZER(UMassModuleSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Mass");} \



#define FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSENTITY_API UMassModuleSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassModuleSettings(UMassModuleSettings&&) = delete; \
	UMassModuleSettings(const UMassModuleSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSENTITY_API, UMassModuleSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassModuleSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassModuleSettings) \
	MASSENTITY_API virtual ~UMassModuleSettings();


#define FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_15_PROLOG
#define FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassModuleSettings;

// ********** End Class UMassModuleSettings ********************************************************

// ********** Begin Class UMassSettings ************************************************************
struct Z_Construct_UClass_UMassSettings_Statics;
MASSENTITY_API UClass* Z_Construct_UClass_UMassSettings_NoRegister();

#define FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassSettings(); \
	friend struct ::Z_Construct_UClass_UMassSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSENTITY_API UClass* ::Z_Construct_UClass_UMassSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassEntity"), Z_Construct_UClass_UMassSettings_NoRegister) \
	DECLARE_SERIALIZER(UMassSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Mass");} \



#define FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSENTITY_API UMassSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassSettings(UMassSettings&&) = delete; \
	UMassSettings(const UMassSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSENTITY_API, UMassSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassSettings) \
	MASSENTITY_API virtual ~UMassSettings();


#define FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_24_PROLOG
#define FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassSettings;

// ********** End Class UMassSettings **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MassEntity_Public_MassSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
