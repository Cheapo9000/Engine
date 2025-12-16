// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkFaceSourceBlueprint.h"

#ifdef LIVELINKFACESOURCE_LiveLinkFaceSourceBlueprint_generated_h
#error "LiveLinkFaceSourceBlueprint.generated.h already included, missing '#pragma once' in LiveLinkFaceSourceBlueprint.h"
#endif
#define LIVELINKFACESOURCE_LiveLinkFaceSourceBlueprint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLiveLinkSourceHandle;

// ********** Begin Class ULiveLinkFaceSourceBlueprint *********************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Public_LiveLinkFaceSourceBlueprint_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execCreateLiveLinkFaceSource);


struct Z_Construct_UClass_ULiveLinkFaceSourceBlueprint_Statics;
LIVELINKFACESOURCE_API UClass* Z_Construct_UClass_ULiveLinkFaceSourceBlueprint_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Public_LiveLinkFaceSourceBlueprint_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkFaceSourceBlueprint(); \
	friend struct ::Z_Construct_UClass_ULiveLinkFaceSourceBlueprint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKFACESOURCE_API UClass* ::Z_Construct_UClass_ULiveLinkFaceSourceBlueprint_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkFaceSourceBlueprint, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkFaceSource"), Z_Construct_UClass_ULiveLinkFaceSourceBlueprint_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkFaceSourceBlueprint)


#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Public_LiveLinkFaceSourceBlueprint_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkFaceSourceBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkFaceSourceBlueprint(ULiveLinkFaceSourceBlueprint&&) = delete; \
	ULiveLinkFaceSourceBlueprint(const ULiveLinkFaceSourceBlueprint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkFaceSourceBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkFaceSourceBlueprint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkFaceSourceBlueprint) \
	NO_API virtual ~ULiveLinkFaceSourceBlueprint();


#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Public_LiveLinkFaceSourceBlueprint_h_12_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Public_LiveLinkFaceSourceBlueprint_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Public_LiveLinkFaceSourceBlueprint_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Public_LiveLinkFaceSourceBlueprint_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Public_LiveLinkFaceSourceBlueprint_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkFaceSourceBlueprint;

// ********** End Class ULiveLinkFaceSourceBlueprint ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Public_LiveLinkFaceSourceBlueprint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
