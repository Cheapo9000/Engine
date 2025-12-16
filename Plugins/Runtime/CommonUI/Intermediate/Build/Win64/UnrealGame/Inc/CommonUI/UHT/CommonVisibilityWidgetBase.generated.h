// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonVisibilityWidgetBase.h"

#ifdef COMMONUI_CommonVisibilityWidgetBase_generated_h
#error "CommonVisibilityWidgetBase.generated.h already included, missing '#pragma once' in CommonVisibilityWidgetBase.h"
#endif
#define COMMONUI_CommonVisibilityWidgetBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDEPRECATED_UCommonVisibilityWidgetBase **********************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisibilityWidgetBase_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetRegisteredPlatforms);


struct Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisibilityWidgetBase_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_UCommonVisibilityWidgetBase(); \
	friend struct ::Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEPRECATED_UCommonVisibilityWidgetBase, UCommonBorder, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_NoRegister) \
	DECLARE_SERIALIZER(UDEPRECATED_UCommonVisibilityWidgetBase)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisibilityWidgetBase_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UDEPRECATED_UCommonVisibilityWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_UCommonVisibilityWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UDEPRECATED_UCommonVisibilityWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_UCommonVisibilityWidgetBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEPRECATED_UCommonVisibilityWidgetBase(UDEPRECATED_UCommonVisibilityWidgetBase&&) = delete; \
	UDEPRECATED_UCommonVisibilityWidgetBase(const UDEPRECATED_UCommonVisibilityWidgetBase&) = delete; \
	COMMONUI_API virtual ~UDEPRECATED_UCommonVisibilityWidgetBase();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisibilityWidgetBase_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisibilityWidgetBase_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisibilityWidgetBase_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisibilityWidgetBase_h_20_INCLASS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisibilityWidgetBase_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEPRECATED_UCommonVisibilityWidgetBase;

// ********** End Class UDEPRECATED_UCommonVisibilityWidgetBase ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisibilityWidgetBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
