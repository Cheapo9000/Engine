// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/LiveLinkLightController.h"

#ifdef LIVELINKCOMPONENTS_LiveLinkLightController_generated_h
#error "LiveLinkLightController.generated.h already included, missing '#pragma once' in LiveLinkLightController.h"
#endif
#define LIVELINKCOMPONENTS_LiveLinkLightController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkLightController *************************************************
struct Z_Construct_UClass_ULiveLinkLightController_Statics;
LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkLightController_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkLightController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkLightController(); \
	friend struct ::Z_Construct_UClass_ULiveLinkLightController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKCOMPONENTS_API UClass* ::Z_Construct_UClass_ULiveLinkLightController_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkLightController, ULiveLinkControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkComponents"), Z_Construct_UClass_ULiveLinkLightController_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkLightController)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkLightController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINKCOMPONENTS_API ULiveLinkLightController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkLightController(ULiveLinkLightController&&) = delete; \
	ULiveLinkLightController(const ULiveLinkLightController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKCOMPONENTS_API, ULiveLinkLightController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkLightController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkLightController) \
	LIVELINKCOMPONENTS_API virtual ~ULiveLinkLightController();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkLightController_h_15_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkLightController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkLightController_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkLightController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkLightController;

// ********** End Class ULiveLinkLightController ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkLightController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
