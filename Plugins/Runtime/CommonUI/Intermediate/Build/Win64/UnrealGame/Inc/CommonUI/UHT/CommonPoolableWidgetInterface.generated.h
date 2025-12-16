// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonPoolableWidgetInterface.h"

#ifdef COMMONUI_CommonPoolableWidgetInterface_generated_h
#error "CommonPoolableWidgetInterface.generated.h already included, missing '#pragma once' in CommonPoolableWidgetInterface.h"
#endif
#define COMMONUI_CommonPoolableWidgetInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UCommonPoolableWidgetInterface ***************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnReleaseToPool_Implementation() {}; \
	virtual void OnAcquireFromPool_Implementation() {}; \
	DECLARE_FUNCTION(execOnReleaseToPool); \
	DECLARE_FUNCTION(execOnAcquireFromPool);


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_13_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UCommonPoolableWidgetInterface_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonPoolableWidgetInterface_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonPoolableWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonPoolableWidgetInterface(UCommonPoolableWidgetInterface&&) = delete; \
	UCommonPoolableWidgetInterface(const UCommonPoolableWidgetInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonPoolableWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonPoolableWidgetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonPoolableWidgetInterface) \
	virtual ~UCommonPoolableWidgetInterface() = default;


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCommonPoolableWidgetInterface(); \
	friend struct ::Z_Construct_UClass_UCommonPoolableWidgetInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonPoolableWidgetInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonPoolableWidgetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonPoolableWidgetInterface_NoRegister) \
	DECLARE_SERIALIZER(UCommonPoolableWidgetInterface)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICommonPoolableWidgetInterface() {} \
public: \
	typedef UCommonPoolableWidgetInterface UClassType; \
	typedef ICommonPoolableWidgetInterface ThisClass; \
	COMMONUI_API static void Execute_OnAcquireFromPool(UObject* O); \
	COMMONUI_API static void Execute_OnReleaseToPool(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_13_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonPoolableWidgetInterface;

// ********** End Interface UCommonPoolableWidgetInterface *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
