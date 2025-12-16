// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonBorder.h"

#ifdef COMMONUI_CommonBorder_generated_h
#error "CommonBorder.generated.h already included, missing '#pragma once' in CommonBorder.h"
#endif
#define COMMONUI_CommonBorder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UCommonBorderStyle;
struct FSlateBrush;

// ********** Begin Class UCommonBorderStyle *******************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonBorder_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBackgroundBrush);


struct Z_Construct_UClass_UCommonBorderStyle_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonBorderStyle_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonBorder_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonBorderStyle(); \
	friend struct ::Z_Construct_UClass_UCommonBorderStyle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonBorderStyle_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonBorderStyle, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonBorderStyle_NoRegister) \
	DECLARE_SERIALIZER(UCommonBorderStyle)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonBorder_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonBorderStyle(UCommonBorderStyle&&) = delete; \
	UCommonBorderStyle(const UCommonBorderStyle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonBorderStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonBorderStyle); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCommonBorderStyle) \
	COMMONUI_API virtual ~UCommonBorderStyle();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonBorder_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonBorder_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonBorder_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonBorder_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonBorder_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonBorderStyle;

// ********** End Class UCommonBorderStyle *********************************************************

// ********** Begin Class UCommonBorder ************************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonBorder_h_38_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetStyle);


struct Z_Construct_UClass_UCommonBorder_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonBorder_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonBorder_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUCommonBorder(); \
	friend struct ::Z_Construct_UClass_UCommonBorder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonBorder_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonBorder, UBorder, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonBorder_NoRegister) \
	DECLARE_SERIALIZER(UCommonBorder) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("CommonUI");} \



#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonBorder_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonBorder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonBorder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonBorder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonBorder); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonBorder(UCommonBorder&&) = delete; \
	UCommonBorder(const UCommonBorder&) = delete; \
	COMMONUI_API virtual ~UCommonBorder();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonBorder_h_35_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonBorder_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonBorder_h_38_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonBorder_h_38_INCLASS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonBorder_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonBorder;

// ********** End Class UCommonBorder **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonBorder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
