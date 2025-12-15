// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/WidgetNavigation.h"

#ifdef UMG_WidgetNavigation_generated_h
#error "WidgetNavigation.generated.h already included, missing '#pragma once' in WidgetNavigation.h"
#endif
#define UMG_WidgetNavigation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
enum class EUINavigation : uint8;

// ********** Begin Delegate FCustomWidgetNavigationDelegate ***************************************
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_17_DELEGATE \
UMG_API UWidget* FCustomWidgetNavigationDelegate_DelegateWrapper(const FScriptDelegate& CustomWidgetNavigationDelegate, EUINavigation Navigation);


// ********** End Delegate FCustomWidgetNavigationDelegate *****************************************

// ********** Begin ScriptStruct FWidgetNavigationData *********************************************
struct Z_Construct_UScriptStruct_FWidgetNavigationData_Statics;
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWidgetNavigationData_Statics; \
	UMG_API static class UScriptStruct* StaticStruct();


struct FWidgetNavigationData;
// ********** End ScriptStruct FWidgetNavigationData ***********************************************

// ********** Begin Class UWidgetNavigation ********************************************************
struct Z_Construct_UClass_UWidgetNavigation_Statics;
UMG_API UClass* Z_Construct_UClass_UWidgetNavigation_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_54_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetNavigation(); \
	friend struct ::Z_Construct_UClass_UWidgetNavigation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UWidgetNavigation_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetNavigation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UWidgetNavigation_NoRegister) \
	DECLARE_SERIALIZER(UWidgetNavigation)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UWidgetNavigation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetNavigation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UWidgetNavigation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetNavigation); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetNavigation(UWidgetNavigation&&) = delete; \
	UWidgetNavigation(const UWidgetNavigation&) = delete; \
	UMG_API virtual ~UWidgetNavigation();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_51_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_54_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetNavigation;

// ********** End Class UWidgetNavigation **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
