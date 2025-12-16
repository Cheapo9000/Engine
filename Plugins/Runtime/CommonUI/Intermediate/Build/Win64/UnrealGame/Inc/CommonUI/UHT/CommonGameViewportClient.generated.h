// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonGameViewportClient.h"

#ifdef COMMONUI_CommonGameViewportClient_generated_h
#error "CommonGameViewportClient.generated.h already included, missing '#pragma once' in CommonGameViewportClient.h"
#endif
#define COMMONUI_CommonGameViewportClient_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCommonGameViewportClient ************************************************
struct Z_Construct_UClass_UCommonGameViewportClient_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonGameViewportClient_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonGameViewportClient_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonGameViewportClient(); \
	friend struct ::Z_Construct_UClass_UCommonGameViewportClient_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonGameViewportClient_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonGameViewportClient, UGameViewportClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonGameViewportClient_NoRegister) \
	DECLARE_SERIALIZER(UCommonGameViewportClient)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonGameViewportClient_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonGameViewportClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonGameViewportClient(UCommonGameViewportClient&&) = delete; \
	UCommonGameViewportClient(const UCommonGameViewportClient&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonGameViewportClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonGameViewportClient) \
	COMMONUI_API virtual ~UCommonGameViewportClient();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonGameViewportClient_h_23_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonGameViewportClient_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonGameViewportClient_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonGameViewportClient_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonGameViewportClient;

// ********** End Class UCommonGameViewportClient **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonGameViewportClient_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
