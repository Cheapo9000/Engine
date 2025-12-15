// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavGraph/NavigationGraphNodeComponent.h"

#ifdef NAVIGATIONSYSTEM_NavigationGraphNodeComponent_generated_h
#error "NavigationGraphNodeComponent.generated.h already included, missing '#pragma once' in NavigationGraphNodeComponent.h"
#endif
#define NAVIGATIONSYSTEM_NavigationGraphNodeComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNavigationGraphNodeComponent ********************************************
struct Z_Construct_UClass_UNavigationGraphNodeComponent_Statics;
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationGraphNodeComponent_NoRegister();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUNavigationGraphNodeComponent(); \
	friend struct ::Z_Construct_UClass_UNavigationGraphNodeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NAVIGATIONSYSTEM_API UClass* ::Z_Construct_UClass_UNavigationGraphNodeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UNavigationGraphNodeComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), Z_Construct_UClass_UNavigationGraphNodeComponent_NoRegister) \
	DECLARE_SERIALIZER(UNavigationGraphNodeComponent)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavigationGraphNodeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationGraphNodeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavigationGraphNodeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationGraphNodeComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNavigationGraphNodeComponent(UNavigationGraphNodeComponent&&) = delete; \
	UNavigationGraphNodeComponent(const UNavigationGraphNodeComponent&) = delete; \
	NAVIGATIONSYSTEM_API virtual ~UNavigationGraphNodeComponent();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_13_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_16_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNavigationGraphNodeComponent;

// ********** End Class UNavigationGraphNodeComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
