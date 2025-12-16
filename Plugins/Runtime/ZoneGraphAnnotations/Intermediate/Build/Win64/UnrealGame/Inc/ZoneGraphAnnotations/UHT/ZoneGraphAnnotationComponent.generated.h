// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZoneGraphAnnotationComponent.h"

#ifdef ZONEGRAPHANNOTATIONS_ZoneGraphAnnotationComponent_generated_h
#error "ZoneGraphAnnotationComponent.generated.h already included, missing '#pragma once' in ZoneGraphAnnotationComponent.h"
#endif
#define ZONEGRAPHANNOTATIONS_ZoneGraphAnnotationComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UZoneGraphAnnotationComponent ********************************************
struct Z_Construct_UClass_UZoneGraphAnnotationComponent_Statics;
ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_UZoneGraphAnnotationComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationComponent_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZoneGraphAnnotationComponent(); \
	friend struct ::Z_Construct_UClass_UZoneGraphAnnotationComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ZONEGRAPHANNOTATIONS_API UClass* ::Z_Construct_UClass_UZoneGraphAnnotationComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UZoneGraphAnnotationComponent, UDebugDrawComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZoneGraphAnnotations"), Z_Construct_UClass_UZoneGraphAnnotationComponent_NoRegister) \
	DECLARE_SERIALIZER(UZoneGraphAnnotationComponent)


#define FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationComponent_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZoneGraphAnnotationComponent(UZoneGraphAnnotationComponent&&) = delete; \
	UZoneGraphAnnotationComponent(const UZoneGraphAnnotationComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ZONEGRAPHANNOTATIONS_API, UZoneGraphAnnotationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZoneGraphAnnotationComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZoneGraphAnnotationComponent) \
	ZONEGRAPHANNOTATIONS_API virtual ~UZoneGraphAnnotationComponent();


#define FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationComponent_h_37_PROLOG
#define FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationComponent_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationComponent_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationComponent_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZoneGraphAnnotationComponent;

// ********** End Class UZoneGraphAnnotationComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
