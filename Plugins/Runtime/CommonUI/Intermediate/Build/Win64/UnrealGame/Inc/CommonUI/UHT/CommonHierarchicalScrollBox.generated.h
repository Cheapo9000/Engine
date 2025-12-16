// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonHierarchicalScrollBox.h"

#ifdef COMMONUI_CommonHierarchicalScrollBox_generated_h
#error "CommonHierarchicalScrollBox.generated.h already included, missing '#pragma once' in CommonHierarchicalScrollBox.h"
#endif
#define COMMONUI_CommonHierarchicalScrollBox_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCommonHierarchicalScrollBox *********************************************
struct Z_Construct_UClass_UCommonHierarchicalScrollBox_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonHierarchicalScrollBox_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonHierarchicalScrollBox_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCommonHierarchicalScrollBox(); \
	friend struct ::Z_Construct_UClass_UCommonHierarchicalScrollBox_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonHierarchicalScrollBox_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonHierarchicalScrollBox, UScrollBox, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonHierarchicalScrollBox_NoRegister) \
	DECLARE_SERIALIZER(UCommonHierarchicalScrollBox)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonHierarchicalScrollBox_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonHierarchicalScrollBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonHierarchicalScrollBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonHierarchicalScrollBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonHierarchicalScrollBox); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonHierarchicalScrollBox(UCommonHierarchicalScrollBox&&) = delete; \
	UCommonHierarchicalScrollBox(const UCommonHierarchicalScrollBox&) = delete; \
	COMMONUI_API virtual ~UCommonHierarchicalScrollBox();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonHierarchicalScrollBox_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonHierarchicalScrollBox_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonHierarchicalScrollBox_h_16_INCLASS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonHierarchicalScrollBox_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonHierarchicalScrollBox;

// ********** End Class UCommonHierarchicalScrollBox ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonHierarchicalScrollBox_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
