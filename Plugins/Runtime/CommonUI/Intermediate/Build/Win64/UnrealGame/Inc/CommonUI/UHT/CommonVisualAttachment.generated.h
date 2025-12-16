// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonVisualAttachment.h"

#ifdef COMMONUI_CommonVisualAttachment_generated_h
#error "CommonVisualAttachment.generated.h already included, missing '#pragma once' in CommonVisualAttachment.h"
#endif
#define COMMONUI_CommonVisualAttachment_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCommonVisualAttachment **************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisualAttachment_h_17_ACCESSORS \
static void GetContentAnchor_WrapperImpl(const void* Object, void* OutValue); \
static void SetContentAnchor_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UCommonVisualAttachment_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonVisualAttachment_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisualAttachment_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonVisualAttachment(); \
	friend struct ::Z_Construct_UClass_UCommonVisualAttachment_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonVisualAttachment_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonVisualAttachment, USizeBox, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonVisualAttachment_NoRegister) \
	DECLARE_SERIALIZER(UCommonVisualAttachment)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisualAttachment_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonVisualAttachment(UCommonVisualAttachment&&) = delete; \
	UCommonVisualAttachment(const UCommonVisualAttachment&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonVisualAttachment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonVisualAttachment); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonVisualAttachment) \
	COMMONUI_API virtual ~UCommonVisualAttachment();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisualAttachment_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisualAttachment_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisualAttachment_h_17_ACCESSORS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisualAttachment_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisualAttachment_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonVisualAttachment;

// ********** End Class UCommonVisualAttachment ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonVisualAttachment_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
