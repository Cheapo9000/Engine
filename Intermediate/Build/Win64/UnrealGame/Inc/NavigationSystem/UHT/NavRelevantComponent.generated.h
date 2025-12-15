// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavRelevantComponent.h"

#ifdef NAVIGATIONSYSTEM_NavRelevantComponent_generated_h
#error "NavRelevantComponent.generated.h already included, missing '#pragma once' in NavRelevantComponent.h"
#endif
#define NAVIGATIONSYSTEM_NavRelevantComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNavRelevantComponent ****************************************************
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetNavigationRelevancy);


struct Z_Construct_UClass_UNavRelevantComponent_Statics;
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavRelevantComponent_NoRegister();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUNavRelevantComponent(); \
	friend struct ::Z_Construct_UClass_UNavRelevantComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NAVIGATIONSYSTEM_API UClass* ::Z_Construct_UClass_UNavRelevantComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UNavRelevantComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), Z_Construct_UClass_UNavRelevantComponent_NoRegister) \
	DECLARE_SERIALIZER(UNavRelevantComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UNavRelevantComponent*>(this); }


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavRelevantComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavRelevantComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavRelevantComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavRelevantComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNavRelevantComponent(UNavRelevantComponent&&) = delete; \
	UNavRelevantComponent(const UNavRelevantComponent&) = delete; \
	NAVIGATIONSYSTEM_API virtual ~UNavRelevantComponent();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_13_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_16_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_16_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNavRelevantComponent;

// ********** End Class UNavRelevantComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
