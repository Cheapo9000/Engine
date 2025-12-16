// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkFaceSourceFactory.h"

#ifdef LIVELINKFACESOURCE_LiveLinkFaceSourceFactory_generated_h
#error "LiveLinkFaceSourceFactory.generated.h already included, missing '#pragma once' in LiveLinkFaceSourceFactory.h"
#endif
#define LIVELINKFACESOURCE_LiveLinkFaceSourceFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkFaceSourceFactory ***********************************************
struct Z_Construct_UClass_ULiveLinkFaceSourceFactory_Statics;
LIVELINKFACESOURCE_API UClass* Z_Construct_UClass_ULiveLinkFaceSourceFactory_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Private_LiveLinkFaceSourceFactory_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkFaceSourceFactory(); \
	friend struct ::Z_Construct_UClass_ULiveLinkFaceSourceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKFACESOURCE_API UClass* ::Z_Construct_UClass_ULiveLinkFaceSourceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkFaceSourceFactory, ULiveLinkSourceFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkFaceSource"), Z_Construct_UClass_ULiveLinkFaceSourceFactory_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkFaceSourceFactory)


#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Private_LiveLinkFaceSourceFactory_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkFaceSourceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkFaceSourceFactory(ULiveLinkFaceSourceFactory&&) = delete; \
	ULiveLinkFaceSourceFactory(const ULiveLinkFaceSourceFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkFaceSourceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkFaceSourceFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkFaceSourceFactory) \
	NO_API virtual ~ULiveLinkFaceSourceFactory();


#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Private_LiveLinkFaceSourceFactory_h_11_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Private_LiveLinkFaceSourceFactory_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Private_LiveLinkFaceSourceFactory_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Private_LiveLinkFaceSourceFactory_h_15_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkFaceSourceFactory;

// ********** End Class ULiveLinkFaceSourceFactory *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Private_LiveLinkFaceSourceFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
