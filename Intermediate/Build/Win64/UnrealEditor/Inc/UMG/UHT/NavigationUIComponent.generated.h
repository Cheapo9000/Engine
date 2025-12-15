// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Extensions/UIComponents/NavigationUIComponent.h"

#ifdef UMG_NavigationUIComponent_generated_h
#error "NavigationUIComponent.generated.h already included, missing '#pragma once' in NavigationUIComponent.h"
#endif
#define UMG_NavigationUIComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
enum class EUINavigation : uint8;

// ********** Begin Delegate FOnNavigationTransition ***********************************************
#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponents_NavigationUIComponent_h_18_DELEGATE \
UMG_API void FOnNavigationTransition_DelegateWrapper(const FMulticastScriptDelegate& OnNavigationTransition, EUINavigation Type, UWidget* OldFocusedWidget, UWidget* NewFocusedWidget);


// ********** End Delegate FOnNavigationTransition *************************************************

// ********** Begin Class UNavigationUIComponent ***************************************************
struct Z_Construct_UClass_UNavigationUIComponent_Statics;
UMG_API UClass* Z_Construct_UClass_UNavigationUIComponent_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponents_NavigationUIComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationUIComponent(); \
	friend struct ::Z_Construct_UClass_UNavigationUIComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UNavigationUIComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UNavigationUIComponent, UUIComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UNavigationUIComponent_NoRegister) \
	DECLARE_SERIALIZER(UNavigationUIComponent)


#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponents_NavigationUIComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavigationUIComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNavigationUIComponent(UNavigationUIComponent&&) = delete; \
	UNavigationUIComponent(const UNavigationUIComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationUIComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationUIComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationUIComponent) \
	NO_API virtual ~UNavigationUIComponent();


#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponents_NavigationUIComponent_h_20_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponents_NavigationUIComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponents_NavigationUIComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponents_NavigationUIComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNavigationUIComponent;

// ********** End Class UNavigationUIComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponents_NavigationUIComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
