// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UIFWidget.h"

#ifdef UIFRAMEWORK_UIFWidget_generated_h
#error "UIFWidget.generated.h already included, missing '#pragma once' in UIFWidget.h"
#endif
#define UIFRAMEWORK_UIFWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UUIFrameworkWidgetWrapperInterface ***********************************
struct Z_Construct_UClass_UUIFrameworkWidgetWrapperInterface_Statics;
UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkWidgetWrapperInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UIFRAMEWORK_API UUIFrameworkWidgetWrapperInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIFrameworkWidgetWrapperInterface(UUIFrameworkWidgetWrapperInterface&&) = delete; \
	UUIFrameworkWidgetWrapperInterface(const UUIFrameworkWidgetWrapperInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UIFRAMEWORK_API, UUIFrameworkWidgetWrapperInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkWidgetWrapperInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIFrameworkWidgetWrapperInterface) \
	virtual ~UUIFrameworkWidgetWrapperInterface() = default;


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_29_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUIFrameworkWidgetWrapperInterface(); \
	friend struct ::Z_Construct_UClass_UUIFrameworkWidgetWrapperInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIFRAMEWORK_API UClass* ::Z_Construct_UClass_UUIFrameworkWidgetWrapperInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIFrameworkWidgetWrapperInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UIFramework"), Z_Construct_UClass_UUIFrameworkWidgetWrapperInterface_NoRegister) \
	DECLARE_SERIALIZER(UUIFrameworkWidgetWrapperInterface)


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_29_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_29_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_29_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_29_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUIFrameworkWidgetWrapperInterface() {} \
public: \
	typedef UUIFrameworkWidgetWrapperInterface UClassType; \
	typedef IUIFrameworkWidgetWrapperInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_26_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_29_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIFrameworkWidgetWrapperInterface;

// ********** End Interface UUIFrameworkWidgetWrapperInterface *************************************

// ********** Begin Class UUIFrameworkWidget *******************************************************
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_RenderOpacity); \
	DECLARE_FUNCTION(execOnRep_Visibility); \
	DECLARE_FUNCTION(execOnRep_IsEnabled);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_43_ACCESSORS \
static void GetbIsEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIsEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetVisibility_WrapperImpl(const void* Object, void* OutValue); \
static void SetVisibility_WrapperImpl(void* Object, const void* InValue); \
static void GetbIsHitTestVisible_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIsHitTestVisible_WrapperImpl(void* Object, const void* InValue); \
static void GetRenderOpacity_WrapperImpl(const void* Object, void* OutValue); \
static void SetRenderOpacity_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UUIFrameworkWidget_Statics;
UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkWidget_NoRegister();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkWidget(); \
	friend struct ::Z_Construct_UClass_UUIFrameworkWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIFRAMEWORK_API UClass* ::Z_Construct_UClass_UUIFrameworkWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIFrameworkWidget, UMVVMViewModelBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UIFramework"), Z_Construct_UClass_UUIFrameworkWidget_NoRegister) \
	DECLARE_SERIALIZER(UUIFrameworkWidget) \
	UIFRAMEWORK_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsEnabled=NETFIELD_REP_START, \
		Visibility, \
		RenderOpacity, \
		WidgetClass, \
		Id, \
		NETFIELD_REP_END=Id	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(UIFRAMEWORK_API) \
private: \
	REPLICATED_BASE_CLASS(UUIFrameworkWidget) \
public:


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_43_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIFrameworkWidget(UUIFrameworkWidget&&) = delete; \
	UUIFrameworkWidget(const UUIFrameworkWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UIFRAMEWORK_API, UUIFrameworkWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIFrameworkWidget) \
	UIFRAMEWORK_API virtual ~UUIFrameworkWidget();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_40_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_43_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIFrameworkWidget;

// ********** End Class UUIFrameworkWidget *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
