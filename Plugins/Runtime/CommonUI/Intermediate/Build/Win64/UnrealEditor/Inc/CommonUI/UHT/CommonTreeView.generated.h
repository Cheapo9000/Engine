// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonTreeView.h"

#ifdef COMMONUI_CommonTreeView_generated_h
#error "CommonTreeView.generated.h already included, missing '#pragma once' in CommonTreeView.h"
#endif
#define COMMONUI_CommonTreeView_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCommonTreeView **********************************************************
struct Z_Construct_UClass_UCommonTreeView_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonTreeView_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTreeView_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonTreeView(); \
	friend struct ::Z_Construct_UClass_UCommonTreeView_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonTreeView_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonTreeView, UTreeView, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonTreeView_NoRegister) \
	DECLARE_SERIALIZER(UCommonTreeView)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTreeView_h_94_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonTreeView(UCommonTreeView&&) = delete; \
	UCommonTreeView(const UCommonTreeView&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonTreeView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonTreeView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonTreeView) \
	COMMONUI_API virtual ~UCommonTreeView();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTreeView_h_91_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTreeView_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTreeView_h_94_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTreeView_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonTreeView;

// ********** End Class UCommonTreeView ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonTreeView_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
