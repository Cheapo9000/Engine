// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkOpenVRSourceFactory.h"

#ifdef LIVELINKOPENVR_LiveLinkOpenVRSourceFactory_generated_h
#error "LiveLinkOpenVRSourceFactory.generated.h already included, missing '#pragma once' in LiveLinkOpenVRSourceFactory.h"
#endif
#define LIVELINKOPENVR_LiveLinkOpenVRSourceFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkOpenVRSourceFactory *********************************************
struct Z_Construct_UClass_ULiveLinkOpenVRSourceFactory_Statics;
LIVELINKOPENVR_API UClass* Z_Construct_UClass_ULiveLinkOpenVRSourceFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_LiveLinkOpenVR_Source_LiveLinkOpenVR_Private_LiveLinkOpenVRSourceFactory_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkOpenVRSourceFactory(); \
	friend struct ::Z_Construct_UClass_ULiveLinkOpenVRSourceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKOPENVR_API UClass* ::Z_Construct_UClass_ULiveLinkOpenVRSourceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkOpenVRSourceFactory, ULiveLinkSourceFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkOpenVR"), Z_Construct_UClass_ULiveLinkOpenVRSourceFactory_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkOpenVRSourceFactory)


#define FID_Engine_Plugins_Experimental_LiveLinkOpenVR_Source_LiveLinkOpenVR_Private_LiveLinkOpenVRSourceFactory_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkOpenVRSourceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkOpenVRSourceFactory(ULiveLinkOpenVRSourceFactory&&) = delete; \
	ULiveLinkOpenVRSourceFactory(const ULiveLinkOpenVRSourceFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkOpenVRSourceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkOpenVRSourceFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkOpenVRSourceFactory) \
	NO_API virtual ~ULiveLinkOpenVRSourceFactory();


#define FID_Engine_Plugins_Experimental_LiveLinkOpenVR_Source_LiveLinkOpenVR_Private_LiveLinkOpenVRSourceFactory_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_LiveLinkOpenVR_Source_LiveLinkOpenVR_Private_LiveLinkOpenVRSourceFactory_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LiveLinkOpenVR_Source_LiveLinkOpenVR_Private_LiveLinkOpenVRSourceFactory_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LiveLinkOpenVR_Source_LiveLinkOpenVR_Private_LiveLinkOpenVRSourceFactory_h_14_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkOpenVRSourceFactory;

// ********** End Class ULiveLinkOpenVRSourceFactory ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LiveLinkOpenVR_Source_LiveLinkOpenVR_Private_LiveLinkOpenVRSourceFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
