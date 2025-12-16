// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkComponentController.h"

#ifdef LIVELINKCOMPONENTS_LiveLinkComponentController_generated_h
#error "LiveLinkComponentController.generated.h already included, missing '#pragma once' in LiveLinkComponentController.h"
#endif
#define LIVELINKCOMPONENTS_LiveLinkComponentController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorComponent;
class UClass;
class ULiveLinkRole;
struct FLiveLinkSubjectRepresentation;

// ********** Begin Delegate FLiveLinkTickDelegate *************************************************
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_14_DELEGATE \
LIVELINKCOMPONENTS_API void FLiveLinkTickDelegate_DelegateWrapper(const FMulticastScriptDelegate& LiveLinkTickDelegate, float DeltaTime);


// ********** End Delegate FLiveLinkTickDelegate ***************************************************

// ********** Begin Delegate FOnControllerMapUpdatedDelegate ***************************************
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_15_DELEGATE \
LIVELINKCOMPONENTS_API void FOnControllerMapUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnControllerMapUpdatedDelegate);


// ********** End Delegate FOnControllerMapUpdatedDelegate *****************************************

// ********** Begin Class ULiveLinkComponentController *********************************************
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetControlledComponent); \
	DECLARE_FUNCTION(execGetControlledComponent); \
	DECLARE_FUNCTION(execSetSubjectRepresentation); \
	DECLARE_FUNCTION(execGetSubjectRepresentation);


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_24_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULiveLinkComponentController, LIVELINKCOMPONENTS_API)


struct Z_Construct_UClass_ULiveLinkComponentController_Statics;
LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkComponentController_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkComponentController(); \
	friend struct ::Z_Construct_UClass_ULiveLinkComponentController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKCOMPONENTS_API UClass* ::Z_Construct_UClass_ULiveLinkComponentController_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkComponentController, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLinkComponents"), Z_Construct_UClass_ULiveLinkComponentController_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkComponentController) \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_24_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkComponentController(ULiveLinkComponentController&&) = delete; \
	ULiveLinkComponentController(const ULiveLinkComponentController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKCOMPONENTS_API, ULiveLinkComponentController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkComponentController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkComponentController)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_21_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkComponentController;

// ********** End Class ULiveLinkComponentController ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
