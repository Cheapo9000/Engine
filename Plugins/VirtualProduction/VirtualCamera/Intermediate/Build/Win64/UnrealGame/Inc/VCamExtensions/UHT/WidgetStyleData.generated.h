// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Styling/WidgetStyleData.h"

#ifdef VCAMEXTENSIONS_WidgetStyleData_generated_h
#error "WidgetStyleData.generated.h already included, missing '#pragma once' in WidgetStyleData.h"
#endif
#define VCAMEXTENSIONS_WidgetStyleData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWidgetStyleData *********************************************************
struct Z_Construct_UClass_UWidgetStyleData_Statics;
VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UWidgetStyleData_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_WidgetStyleData_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetStyleData(); \
	friend struct ::Z_Construct_UClass_UWidgetStyleData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMEXTENSIONS_API UClass* ::Z_Construct_UClass_UWidgetStyleData_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetStyleData, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VCamExtensions"), Z_Construct_UClass_UWidgetStyleData_NoRegister) \
	DECLARE_SERIALIZER(UWidgetStyleData)


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_WidgetStyleData_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetStyleData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetStyleData(UWidgetStyleData&&) = delete; \
	UWidgetStyleData(const UWidgetStyleData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetStyleData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetStyleData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetStyleData) \
	NO_API virtual ~UWidgetStyleData();


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_WidgetStyleData_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_WidgetStyleData_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_WidgetStyleData_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_WidgetStyleData_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetStyleData;

// ********** End Class UWidgetStyleData ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_WidgetStyleData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
