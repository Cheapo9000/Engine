// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UIFPresenter.h"

#ifdef UIFRAMEWORK_UIFPresenter_generated_h
#error "UIFPresenter.generated.h already included, missing '#pragma once' in UIFPresenter.h"
#endif
#define UIFRAMEWORK_UIFPresenter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUIFrameworkPresenter ****************************************************
struct Z_Construct_UClass_UUIFrameworkPresenter_Statics;
UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkPresenter_NoRegister();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPresenter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkPresenter(); \
	friend struct ::Z_Construct_UClass_UUIFrameworkPresenter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIFRAMEWORK_API UClass* ::Z_Construct_UClass_UUIFrameworkPresenter_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIFrameworkPresenter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UIFramework"), Z_Construct_UClass_UUIFrameworkPresenter_NoRegister) \
	DECLARE_SERIALIZER(UUIFrameworkPresenter) \
	DECLARE_WITHIN(UUIFrameworkPlayerComponent)


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPresenter_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UIFRAMEWORK_API UUIFrameworkPresenter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIFrameworkPresenter(UUIFrameworkPresenter&&) = delete; \
	UUIFrameworkPresenter(const UUIFrameworkPresenter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UIFRAMEWORK_API, UUIFrameworkPresenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkPresenter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIFrameworkPresenter) \
	UIFRAMEWORK_API virtual ~UUIFrameworkPresenter();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPresenter_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPresenter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPresenter_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPresenter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIFrameworkPresenter;

// ********** End Class UUIFrameworkPresenter ******************************************************

// ********** Begin Class UUIFrameworkGameViewportPresenter ****************************************
struct Z_Construct_UClass_UUIFrameworkGameViewportPresenter_Statics;
UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkGameViewportPresenter_NoRegister();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPresenter_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkGameViewportPresenter(); \
	friend struct ::Z_Construct_UClass_UUIFrameworkGameViewportPresenter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIFRAMEWORK_API UClass* ::Z_Construct_UClass_UUIFrameworkGameViewportPresenter_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIFrameworkGameViewportPresenter, UUIFrameworkPresenter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), Z_Construct_UClass_UUIFrameworkGameViewportPresenter_NoRegister) \
	DECLARE_SERIALIZER(UUIFrameworkGameViewportPresenter)


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPresenter_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UIFRAMEWORK_API UUIFrameworkGameViewportPresenter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIFrameworkGameViewportPresenter(UUIFrameworkGameViewportPresenter&&) = delete; \
	UUIFrameworkGameViewportPresenter(const UUIFrameworkGameViewportPresenter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UIFRAMEWORK_API, UUIFrameworkGameViewportPresenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkGameViewportPresenter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIFrameworkGameViewportPresenter) \
	UIFRAMEWORK_API virtual ~UUIFrameworkGameViewportPresenter();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPresenter_h_42_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPresenter_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPresenter_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPresenter_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIFrameworkGameViewportPresenter;

// ********** End Class UUIFrameworkGameViewportPresenter ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPresenter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
