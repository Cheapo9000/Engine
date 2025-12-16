// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkXRSourceFactory.h"

#ifdef LIVELINKXR_LiveLinkXRSourceFactory_generated_h
#error "LiveLinkXRSourceFactory.generated.h already included, missing '#pragma once' in LiveLinkXRSourceFactory.h"
#endif
#define LIVELINKXR_LiveLinkXRSourceFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkXRSourceFactory *************************************************
struct Z_Construct_UClass_ULiveLinkXRSourceFactory_Statics;
LIVELINKXR_API UClass* Z_Construct_UClass_ULiveLinkXRSourceFactory_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRSourceFactory_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkXRSourceFactory(); \
	friend struct ::Z_Construct_UClass_ULiveLinkXRSourceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKXR_API UClass* ::Z_Construct_UClass_ULiveLinkXRSourceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkXRSourceFactory, ULiveLinkSourceFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkXR"), Z_Construct_UClass_ULiveLinkXRSourceFactory_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkXRSourceFactory)


#define FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRSourceFactory_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkXRSourceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkXRSourceFactory(ULiveLinkXRSourceFactory&&) = delete; \
	ULiveLinkXRSourceFactory(const ULiveLinkXRSourceFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkXRSourceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkXRSourceFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkXRSourceFactory) \
	NO_API virtual ~ULiveLinkXRSourceFactory();


#define FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRSourceFactory_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRSourceFactory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRSourceFactory_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRSourceFactory_h_13_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkXRSourceFactory;

// ********** End Class ULiveLinkXRSourceFactory ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRSourceFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
