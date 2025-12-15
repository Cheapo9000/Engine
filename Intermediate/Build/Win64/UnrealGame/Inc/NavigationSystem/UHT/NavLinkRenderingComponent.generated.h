// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavLinkRenderingComponent.h"

#ifdef NAVIGATIONSYSTEM_NavLinkRenderingComponent_generated_h
#error "NavLinkRenderingComponent.generated.h already included, missing '#pragma once' in NavLinkRenderingComponent.h"
#endif
#define NAVIGATIONSYSTEM_NavLinkRenderingComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNavLinkRenderingComponent ***********************************************
struct Z_Construct_UClass_UNavLinkRenderingComponent_Statics;
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkRenderingComponent_NoRegister();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkRenderingComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUNavLinkRenderingComponent(); \
	friend struct ::Z_Construct_UClass_UNavLinkRenderingComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NAVIGATIONSYSTEM_API UClass* ::Z_Construct_UClass_UNavLinkRenderingComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UNavLinkRenderingComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), Z_Construct_UClass_UNavLinkRenderingComponent_NoRegister) \
	DECLARE_SERIALIZER(UNavLinkRenderingComponent)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkRenderingComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavLinkRenderingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavLinkRenderingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavLinkRenderingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavLinkRenderingComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNavLinkRenderingComponent(UNavLinkRenderingComponent&&) = delete; \
	UNavLinkRenderingComponent(const UNavLinkRenderingComponent&) = delete; \
	NAVIGATIONSYSTEM_API virtual ~UNavLinkRenderingComponent();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkRenderingComponent_h_16_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkRenderingComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkRenderingComponent_h_19_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkRenderingComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNavLinkRenderingComponent;

// ********** End Class UNavLinkRenderingComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkRenderingComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
