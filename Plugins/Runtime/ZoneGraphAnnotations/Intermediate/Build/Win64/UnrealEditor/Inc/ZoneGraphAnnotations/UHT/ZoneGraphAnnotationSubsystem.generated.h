// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZoneGraphAnnotationSubsystem.h"

#ifdef ZONEGRAPHANNOTATIONS_ZoneGraphAnnotationSubsystem_generated_h
#error "ZoneGraphAnnotationSubsystem.generated.h already included, missing '#pragma once' in ZoneGraphAnnotationSubsystem.h"
#endif
#define ZONEGRAPHANNOTATIONS_ZoneGraphAnnotationSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRegisteredZoneGraphAnnotation ************************************
struct Z_Construct_UScriptStruct_FRegisteredZoneGraphAnnotation_Statics;
#define FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationSubsystem_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRegisteredZoneGraphAnnotation_Statics; \
	ZONEGRAPHANNOTATIONS_API static class UScriptStruct* StaticStruct();


struct FRegisteredZoneGraphAnnotation;
// ********** End ScriptStruct FRegisteredZoneGraphAnnotation **************************************

// ********** Begin Class UZoneGraphAnnotationSubsystem ********************************************
struct Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics;
ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_UZoneGraphAnnotationSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationSubsystem_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZoneGraphAnnotationSubsystem(); \
	friend struct ::Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ZONEGRAPHANNOTATIONS_API UClass* ::Z_Construct_UClass_UZoneGraphAnnotationSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UZoneGraphAnnotationSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ZoneGraphAnnotations"), Z_Construct_UClass_UZoneGraphAnnotationSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UZoneGraphAnnotationSubsystem)


#define FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationSubsystem_h_73_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZoneGraphAnnotationSubsystem(UZoneGraphAnnotationSubsystem&&) = delete; \
	UZoneGraphAnnotationSubsystem(const UZoneGraphAnnotationSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ZONEGRAPHANNOTATIONS_API, UZoneGraphAnnotationSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZoneGraphAnnotationSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UZoneGraphAnnotationSubsystem) \
	ZONEGRAPHANNOTATIONS_API virtual ~UZoneGraphAnnotationSubsystem();


#define FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationSubsystem_h_70_PROLOG
#define FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationSubsystem_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationSubsystem_h_73_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationSubsystem_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZoneGraphAnnotationSubsystem;

// ********** End Class UZoneGraphAnnotationSubsystem **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
