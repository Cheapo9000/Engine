// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonActionHandlerInterface.h"

#ifdef COMMONUI_CommonActionHandlerInterface_generated_h
#error "CommonActionHandlerInterface.generated.h already included, missing '#pragma once' in CommonActionHandlerInterface.h"
#endif
#define COMMONUI_CommonActionHandlerInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FCommonActionCommited *************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_25_DELEGATE \
COMMONUI_API void FCommonActionCommited_DelegateWrapper(const FScriptDelegate& CommonActionCommited, bool& bPassThrough);


// ********** End Delegate FCommonActionCommited ***************************************************

// ********** Begin Delegate FCommonActionCompleteSingle *******************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_32_DELEGATE \
COMMONUI_API void FCommonActionCompleteSingle_DelegateWrapper(const FScriptDelegate& CommonActionCompleteSingle);


// ********** End Delegate FCommonActionCompleteSingle *********************************************

// ********** Begin Delegate FCommonActionComplete *************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_34_DELEGATE \
COMMONUI_API void FCommonActionComplete_DelegateWrapper(const FMulticastScriptDelegate& CommonActionComplete);


// ********** End Delegate FCommonActionComplete ***************************************************

// ********** Begin Delegate FCommonActionProgressSingle *******************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_41_DELEGATE \
COMMONUI_API void FCommonActionProgressSingle_DelegateWrapper(const FScriptDelegate& CommonActionProgressSingle, float HeldPercent);


// ********** End Delegate FCommonActionProgressSingle *********************************************

// ********** Begin Delegate FCommonActionProgress *************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_43_DELEGATE \
COMMONUI_API void FCommonActionProgress_DelegateWrapper(const FMulticastScriptDelegate& CommonActionProgress, float HeldPercent);


// ********** End Delegate FCommonActionProgress ***************************************************

// ********** Begin ScriptStruct FCommonInputActionHandlerData *************************************
struct Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics;
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics; \
	COMMONUI_API static class UScriptStruct* StaticStruct();


struct FCommonInputActionHandlerData;
// ********** End ScriptStruct FCommonInputActionHandlerData ***************************************

// ********** Begin Interface UCommonActionHandlerInterface ****************************************
struct Z_Construct_UClass_UCommonActionHandlerInterface_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonActionHandlerInterface_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_125_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonActionHandlerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonActionHandlerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonActionHandlerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonActionHandlerInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonActionHandlerInterface(UCommonActionHandlerInterface&&) = delete; \
	UCommonActionHandlerInterface(const UCommonActionHandlerInterface&) = delete; \
	virtual ~UCommonActionHandlerInterface() = default;


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_125_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCommonActionHandlerInterface(); \
	friend struct ::Z_Construct_UClass_UCommonActionHandlerInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonActionHandlerInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonActionHandlerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonActionHandlerInterface_NoRegister) \
	DECLARE_SERIALIZER(UCommonActionHandlerInterface)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_125_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_125_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_125_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_125_INCLASS_IINTERFACE \
protected: \
	virtual ~ICommonActionHandlerInterface() {} \
public: \
	typedef UCommonActionHandlerInterface UClassType; \
	typedef ICommonActionHandlerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_122_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_131_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_125_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonActionHandlerInterface;

// ********** End Interface UCommonActionHandlerInterface ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
