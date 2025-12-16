// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonUIVisibilitySubsystem.h"

#ifdef COMMONUI_CommonUIVisibilitySubsystem_generated_h
#error "CommonUIVisibilitySubsystem.generated.h already included, missing '#pragma once' in CommonUIVisibilitySubsystem.h"
#endif
#define COMMONUI_CommonUIVisibilitySubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonUIVisibilitySubsystem;

// ********** Begin Delegate FHardwareVisibilityTagsChangedDynamicEvent ****************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_19_DELEGATE \
COMMONUI_API void FHardwareVisibilityTagsChangedDynamicEvent_DelegateWrapper(const FMulticastScriptDelegate& HardwareVisibilityTagsChangedDynamicEvent, UCommonUIVisibilitySubsystem* TagSubsystem);


// ********** End Delegate FHardwareVisibilityTagsChangedDynamicEvent ******************************

// ********** Begin Class UCommonUIVisibilitySubsystem *********************************************
struct Z_Construct_UClass_UCommonUIVisibilitySubsystem_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonUIVisibilitySubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonUIVisibilitySubsystem(); \
	friend struct ::Z_Construct_UClass_UCommonUIVisibilitySubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonUIVisibilitySubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonUIVisibilitySubsystem, ULocalPlayerSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonUIVisibilitySubsystem_NoRegister) \
	DECLARE_SERIALIZER(UCommonUIVisibilitySubsystem)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonUIVisibilitySubsystem(UCommonUIVisibilitySubsystem&&) = delete; \
	UCommonUIVisibilitySubsystem(const UCommonUIVisibilitySubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonUIVisibilitySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUIVisibilitySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonUIVisibilitySubsystem) \
	COMMONUI_API virtual ~UCommonUIVisibilitySubsystem();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonUIVisibilitySubsystem;

// ********** End Class UCommonUIVisibilitySubsystem ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
