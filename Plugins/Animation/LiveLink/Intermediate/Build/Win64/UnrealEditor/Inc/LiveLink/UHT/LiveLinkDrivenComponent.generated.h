// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkDrivenComponent.h"

#ifdef LIVELINK_LiveLinkDrivenComponent_generated_h
#error "LiveLinkDrivenComponent.generated.h already included, missing '#pragma once' in LiveLinkDrivenComponent.h"
#endif
#define LIVELINK_LiveLinkDrivenComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDEPRECATED_LiveLinkDrivenComponent **************************************
struct Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics;
LIVELINK_API UClass* Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkDrivenComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_LiveLinkDrivenComponent(); \
	friend struct ::Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINK_API UClass* ::Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEPRECATED_LiveLinkDrivenComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/LiveLink"), Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_NoRegister) \
	DECLARE_SERIALIZER(UDEPRECATED_LiveLinkDrivenComponent)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkDrivenComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINK_API UDEPRECATED_LiveLinkDrivenComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEPRECATED_LiveLinkDrivenComponent(UDEPRECATED_LiveLinkDrivenComponent&&) = delete; \
	UDEPRECATED_LiveLinkDrivenComponent(const UDEPRECATED_LiveLinkDrivenComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINK_API, UDEPRECATED_LiveLinkDrivenComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_LiveLinkDrivenComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_LiveLinkDrivenComponent) \
	LIVELINK_API virtual ~UDEPRECATED_LiveLinkDrivenComponent();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkDrivenComponent_h_10_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkDrivenComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkDrivenComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkDrivenComponent_h_14_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEPRECATED_LiveLinkDrivenComponent;

// ********** End Class UDEPRECATED_LiveLinkDrivenComponent ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkDrivenComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
