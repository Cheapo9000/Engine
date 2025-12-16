// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VRNotificationsComponent.h"

#ifdef XRBASE_VRNotificationsComponent_generated_h
#error "VRNotificationsComponent.generated.h already included, missing '#pragma once' in VRNotificationsComponent.h"
#endif
#define XRBASE_VRNotificationsComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FVRNotificationsDelegate **********************************************
#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_VRNotificationsComponent_h_25_DELEGATE \
static XRBASE_API void FVRNotificationsDelegate_DelegateWrapper(const FMulticastScriptDelegate& VRNotificationsDelegate);


// ********** End Delegate FVRNotificationsDelegate ************************************************

// ********** Begin Class UVRNotificationsComponent ************************************************
struct Z_Construct_UClass_UVRNotificationsComponent_Statics;
XRBASE_API UClass* Z_Construct_UClass_UVRNotificationsComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_VRNotificationsComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUVRNotificationsComponent(); \
	friend struct ::Z_Construct_UClass_UVRNotificationsComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XRBASE_API UClass* ::Z_Construct_UClass_UVRNotificationsComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UVRNotificationsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XRBase"), Z_Construct_UClass_UVRNotificationsComponent_NoRegister) \
	DECLARE_SERIALIZER(UVRNotificationsComponent)


#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_VRNotificationsComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	XRBASE_API UVRNotificationsComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRNotificationsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(XRBASE_API, UVRNotificationsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRNotificationsComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVRNotificationsComponent(UVRNotificationsComponent&&) = delete; \
	UVRNotificationsComponent(const UVRNotificationsComponent&) = delete; \
	XRBASE_API virtual ~UVRNotificationsComponent();


#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_VRNotificationsComponent_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_VRNotificationsComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_VRNotificationsComponent_h_23_INCLASS \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_VRNotificationsComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVRNotificationsComponent;

// ********** End Class UVRNotificationsComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_VRNotificationsComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
