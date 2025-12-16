// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonCustomNavigation.h"

#ifdef COMMONUI_CommonCustomNavigation_generated_h
#error "CommonCustomNavigation.generated.h already included, missing '#pragma once' in CommonCustomNavigation.h"
#endif
#define COMMONUI_CommonCustomNavigation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EUINavigation : uint8;

// ********** Begin Delegate FOnCustomNavigationEvent **********************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_19_DELEGATE \
static COMMONUI_API bool FOnCustomNavigationEvent_DelegateWrapper(const FScriptDelegate& OnCustomNavigationEvent, EUINavigation NavigationType);


// ********** End Delegate FOnCustomNavigationEvent ************************************************

// ********** Begin Class UCommonCustomNavigation **************************************************
struct Z_Construct_UClass_UCommonCustomNavigation_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonCustomNavigation_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCommonCustomNavigation(); \
	friend struct ::Z_Construct_UClass_UCommonCustomNavigation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonCustomNavigation_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonCustomNavigation, UBorder, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonCustomNavigation_NoRegister) \
	DECLARE_SERIALIZER(UCommonCustomNavigation) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("CommonUI");} \



#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonCustomNavigation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonCustomNavigation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonCustomNavigation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonCustomNavigation); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonCustomNavigation(UCommonCustomNavigation&&) = delete; \
	UCommonCustomNavigation(const UCommonCustomNavigation&) = delete; \
	COMMONUI_API virtual ~UCommonCustomNavigation();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_16_INCLASS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonCustomNavigation;

// ********** End Class UCommonCustomNavigation ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
