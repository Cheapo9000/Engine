// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnalogSlider.h"

#ifdef COMMONUI_AnalogSlider_generated_h
#error "AnalogSlider.generated.h already included, missing '#pragma once' in AnalogSlider.h"
#endif
#define COMMONUI_AnalogSlider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnalogSlider ************************************************************
struct Z_Construct_UClass_UAnalogSlider_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UAnalogSlider_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_AnalogSlider_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUAnalogSlider(); \
	friend struct ::Z_Construct_UClass_UAnalogSlider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UAnalogSlider_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnalogSlider, USlider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UAnalogSlider_NoRegister) \
	DECLARE_SERIALIZER(UAnalogSlider)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_AnalogSlider_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UAnalogSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnalogSlider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UAnalogSlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnalogSlider); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnalogSlider(UAnalogSlider&&) = delete; \
	UAnalogSlider(const UAnalogSlider&) = delete; \
	COMMONUI_API virtual ~UAnalogSlider();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_AnalogSlider_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_AnalogSlider_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_AnalogSlider_h_24_INCLASS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_AnalogSlider_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnalogSlider;

// ********** End Class UAnalogSlider **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_AnalogSlider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
