// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/CommonActivatableWidgetContainer.h"

#ifdef COMMONUI_CommonActivatableWidgetContainer_generated_h
#error "CommonActivatableWidgetContainer.generated.h already included, missing '#pragma once' in CommonActivatableWidgetContainer.h"
#endif
#define COMMONUI_CommonActivatableWidgetContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UCommonActivatableWidget;

// ********** Begin Class UCommonActivatableWidgetContainerBase ************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Widgets_CommonActivatableWidgetContainer_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveWidget); \
	DECLARE_FUNCTION(execBP_AddWidget); \
	DECLARE_FUNCTION(execGetTransitionDuration); \
	DECLARE_FUNCTION(execSetTransitionDuration); \
	DECLARE_FUNCTION(execClearWidgets); \
	DECLARE_FUNCTION(execGetActiveWidget);


struct Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidgetContainerBase_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Widgets_CommonActivatableWidgetContainer_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonActivatableWidgetContainerBase(); \
	friend struct ::Z_Construct_UClass_UCommonActivatableWidgetContainerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonActivatableWidgetContainerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonActivatableWidgetContainerBase, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonActivatableWidgetContainerBase_NoRegister) \
	DECLARE_SERIALIZER(UCommonActivatableWidgetContainerBase)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Widgets_CommonActivatableWidgetContainer_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonActivatableWidgetContainerBase(UCommonActivatableWidgetContainerBase&&) = delete; \
	UCommonActivatableWidgetContainerBase(const UCommonActivatableWidgetContainerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonActivatableWidgetContainerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonActivatableWidgetContainerBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonActivatableWidgetContainerBase) \
	COMMONUI_API virtual ~UCommonActivatableWidgetContainerBase();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Widgets_CommonActivatableWidgetContainer_h_23_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Widgets_CommonActivatableWidgetContainer_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Widgets_CommonActivatableWidgetContainer_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Widgets_CommonActivatableWidgetContainer_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Widgets_CommonActivatableWidgetContainer_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonActivatableWidgetContainerBase;

// ********** End Class UCommonActivatableWidgetContainerBase **************************************

// ********** Begin Class UCommonActivatableWidgetStack ********************************************
struct Z_Construct_UClass_UCommonActivatableWidgetStack_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidgetStack_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Widgets_CommonActivatableWidgetContainer_h_204_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonActivatableWidgetStack(); \
	friend struct ::Z_Construct_UClass_UCommonActivatableWidgetStack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonActivatableWidgetStack_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonActivatableWidgetStack, UCommonActivatableWidgetContainerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonActivatableWidgetStack_NoRegister) \
	DECLARE_SERIALIZER(UCommonActivatableWidgetStack)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Widgets_CommonActivatableWidgetContainer_h_204_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonActivatableWidgetStack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonActivatableWidgetStack(UCommonActivatableWidgetStack&&) = delete; \
	UCommonActivatableWidgetStack(const UCommonActivatableWidgetStack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonActivatableWidgetStack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonActivatableWidgetStack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonActivatableWidgetStack) \
	COMMONUI_API virtual ~UCommonActivatableWidgetStack();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Widgets_CommonActivatableWidgetContainer_h_201_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Widgets_CommonActivatableWidgetContainer_h_204_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Widgets_CommonActivatableWidgetContainer_h_204_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Widgets_CommonActivatableWidgetContainer_h_204_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonActivatableWidgetStack;

// ********** End Class UCommonActivatableWidgetStack **********************************************

// ********** Begin Class UCommonActivatableWidgetQueue ********************************************
struct Z_Construct_UClass_UCommonActivatableWidgetQueue_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidgetQueue_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Widgets_CommonActivatableWidgetContainer_h_237_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonActivatableWidgetQueue(); \
	friend struct ::Z_Construct_UClass_UCommonActivatableWidgetQueue_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonActivatableWidgetQueue_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonActivatableWidgetQueue, UCommonActivatableWidgetContainerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonActivatableWidgetQueue_NoRegister) \
	DECLARE_SERIALIZER(UCommonActivatableWidgetQueue)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Widgets_CommonActivatableWidgetContainer_h_237_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonActivatableWidgetQueue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonActivatableWidgetQueue(UCommonActivatableWidgetQueue&&) = delete; \
	UCommonActivatableWidgetQueue(const UCommonActivatableWidgetQueue&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonActivatableWidgetQueue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonActivatableWidgetQueue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonActivatableWidgetQueue) \
	COMMONUI_API virtual ~UCommonActivatableWidgetQueue();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Widgets_CommonActivatableWidgetContainer_h_234_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Widgets_CommonActivatableWidgetContainer_h_237_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Widgets_CommonActivatableWidgetContainer_h_237_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Widgets_CommonActivatableWidgetContainer_h_237_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonActivatableWidgetQueue;

// ********** End Class UCommonActivatableWidgetQueue **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Widgets_CommonActivatableWidgetContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
