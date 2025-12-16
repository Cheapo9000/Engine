// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonLoadGuard.h"

#ifdef COMMONUI_CommonLoadGuard_generated_h
#error "CommonLoadGuard.generated.h already included, missing '#pragma once' in CommonLoadGuard.h"
#endif
#define COMMONUI_CommonLoadGuard_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FMargin;

// ********** Begin Class ULoadGuardSlot ***********************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding);


struct Z_Construct_UClass_ULoadGuardSlot_Statics;
COMMONUI_API UClass* Z_Construct_UClass_ULoadGuardSlot_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_103_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoadGuardSlot(); \
	friend struct ::Z_Construct_UClass_ULoadGuardSlot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_ULoadGuardSlot_NoRegister(); \
public: \
	DECLARE_CLASS2(ULoadGuardSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_ULoadGuardSlot_NoRegister) \
	DECLARE_SERIALIZER(ULoadGuardSlot)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_103_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API ULoadGuardSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULoadGuardSlot(ULoadGuardSlot&&) = delete; \
	ULoadGuardSlot(const ULoadGuardSlot&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, ULoadGuardSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadGuardSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadGuardSlot) \
	COMMONUI_API virtual ~ULoadGuardSlot();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_100_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_103_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_103_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULoadGuardSlot;

// ********** End Class ULoadGuardSlot *************************************************************

// ********** Begin Delegate FOnLoadGuardStateChangedDynamic ***************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_140_DELEGATE \
COMMONUI_API void FOnLoadGuardStateChangedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnLoadGuardStateChangedDynamic, bool bIsLoading);


// ********** End Delegate FOnLoadGuardStateChangedDynamic *****************************************

// ********** Begin Delegate FOnAssetLoaded ********************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_205_DELEGATE \
static COMMONUI_API void FOnAssetLoaded_DelegateWrapper(const FScriptDelegate& OnAssetLoaded, UObject* Object);


// ********** End Delegate FOnAssetLoaded **********************************************************

// ********** Begin Class UCommonLoadGuard *********************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_153_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBP_GuardAndLoadAsset); \
	DECLARE_FUNCTION(execIsLoading); \
	DECLARE_FUNCTION(execSetIsLoading); \
	DECLARE_FUNCTION(execSetLoadingText);


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_153_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCommonLoadGuard, COMMONUI_API)


struct Z_Construct_UClass_UCommonLoadGuard_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonLoadGuard_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_153_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonLoadGuard(); \
	friend struct ::Z_Construct_UClass_UCommonLoadGuard_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonLoadGuard_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonLoadGuard, UContentWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonLoadGuard_NoRegister) \
	DECLARE_SERIALIZER(UCommonLoadGuard) \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_153_ARCHIVESERIALIZER \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_153_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonLoadGuard(UCommonLoadGuard&&) = delete; \
	UCommonLoadGuard(const UCommonLoadGuard&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonLoadGuard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonLoadGuard); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonLoadGuard) \
	COMMONUI_API virtual ~UCommonLoadGuard();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_150_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_153_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_153_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_153_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_153_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonLoadGuard;

// ********** End Class UCommonLoadGuard ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
