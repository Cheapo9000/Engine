// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkComponent.h"

#ifdef LIVELINK_LiveLinkComponent_generated_h
#error "LiveLinkComponent.generated.h already included, missing '#pragma once' in LiveLinkComponent.h"
#endif
#define LIVELINK_LiveLinkComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FLiveLinkTickSignature ************************************************
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_14_DELEGATE \
LIVELINK_API void FLiveLinkTickSignature_DelegateWrapper(const FMulticastScriptDelegate& LiveLinkTickSignature, float DeltaTime);


// ********** End Delegate FLiveLinkTickSignature **************************************************

// ********** Begin Class ULiveLinkComponent *******************************************************
struct Z_Construct_UClass_ULiveLinkComponent_Statics;
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkComponent_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkComponent(); \
	friend struct ::Z_Construct_UClass_ULiveLinkComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINK_API UClass* ::Z_Construct_UClass_ULiveLinkComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLink"), Z_Construct_UClass_ULiveLinkComponent_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkComponent)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkComponent(ULiveLinkComponent&&) = delete; \
	ULiveLinkComponent(const ULiveLinkComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINK_API, ULiveLinkComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkComponent) \
	LIVELINK_API virtual ~ULiveLinkComponent();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_19_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkComponent;

// ********** End Class ULiveLinkComponent *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
