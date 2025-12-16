// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonUILibrary.h"

#ifdef COMMONUI_CommonUILibrary_generated_h
#error "CommonUILibrary.generated.h already included, missing '#pragma once' in CommonUILibrary.h"
#endif
#define COMMONUI_CommonUILibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UWidget;

// ********** Begin Class UCommonUILibrary *********************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execFindParentWidgetOfType);


struct Z_Construct_UClass_UCommonUILibrary_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonUILibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCommonUILibrary(); \
	friend struct ::Z_Construct_UClass_UCommonUILibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonUILibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonUILibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonUILibrary_NoRegister) \
	DECLARE_SERIALIZER(UCommonUILibrary)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonUILibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonUILibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonUILibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUILibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonUILibrary(UCommonUILibrary&&) = delete; \
	UCommonUILibrary(const UCommonUILibrary&) = delete; \
	COMMONUI_API virtual ~UCommonUILibrary();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_16_INCLASS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonUILibrary;

// ********** End Class UCommonUILibrary ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUILibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
