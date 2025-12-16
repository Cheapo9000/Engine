// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkVRPNSourceFactory.h"

#ifdef LIVELINKVRPN_LiveLinkVRPNSourceFactory_generated_h
#error "LiveLinkVRPNSourceFactory.generated.h already included, missing '#pragma once' in LiveLinkVRPNSourceFactory.h"
#endif
#define LIVELINKVRPN_LiveLinkVRPNSourceFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkVRPNSourceFactory ***********************************************
struct Z_Construct_UClass_ULiveLinkVRPNSourceFactory_Statics;
LIVELINKVRPN_API UClass* Z_Construct_UClass_ULiveLinkVRPNSourceFactory_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNSourceFactory_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkVRPNSourceFactory(); \
	friend struct ::Z_Construct_UClass_ULiveLinkVRPNSourceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKVRPN_API UClass* ::Z_Construct_UClass_ULiveLinkVRPNSourceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkVRPNSourceFactory, ULiveLinkSourceFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkVRPN"), Z_Construct_UClass_ULiveLinkVRPNSourceFactory_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkVRPNSourceFactory)


#define FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNSourceFactory_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkVRPNSourceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkVRPNSourceFactory(ULiveLinkVRPNSourceFactory&&) = delete; \
	ULiveLinkVRPNSourceFactory(const ULiveLinkVRPNSourceFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkVRPNSourceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkVRPNSourceFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkVRPNSourceFactory) \
	NO_API virtual ~ULiveLinkVRPNSourceFactory();


#define FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNSourceFactory_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNSourceFactory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNSourceFactory_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNSourceFactory_h_13_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkVRPNSourceFactory;

// ********** End Class ULiveLinkVRPNSourceFactory *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNSourceFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
