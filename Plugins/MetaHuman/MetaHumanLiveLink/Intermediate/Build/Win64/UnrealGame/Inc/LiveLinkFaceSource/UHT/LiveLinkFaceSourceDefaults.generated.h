// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkFaceSourceDefaults.h"

#ifdef LIVELINKFACESOURCE_LiveLinkFaceSourceDefaults_generated_h
#error "LiveLinkFaceSourceDefaults.generated.h already included, missing '#pragma once' in LiveLinkFaceSourceDefaults.h"
#endif
#define LIVELINKFACESOURCE_LiveLinkFaceSourceDefaults_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkFaceSourceDefaults **********************************************
struct Z_Construct_UClass_ULiveLinkFaceSourceDefaults_Statics;
LIVELINKFACESOURCE_API UClass* Z_Construct_UClass_ULiveLinkFaceSourceDefaults_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Public_LiveLinkFaceSourceDefaults_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkFaceSourceDefaults(); \
	friend struct ::Z_Construct_UClass_ULiveLinkFaceSourceDefaults_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKFACESOURCE_API UClass* ::Z_Construct_UClass_ULiveLinkFaceSourceDefaults_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkFaceSourceDefaults, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLinkFaceSource"), Z_Construct_UClass_ULiveLinkFaceSourceDefaults_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkFaceSourceDefaults) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Public_LiveLinkFaceSourceDefaults_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkFaceSourceDefaults(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkFaceSourceDefaults(ULiveLinkFaceSourceDefaults&&) = delete; \
	ULiveLinkFaceSourceDefaults(const ULiveLinkFaceSourceDefaults&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkFaceSourceDefaults); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkFaceSourceDefaults); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkFaceSourceDefaults) \
	NO_API virtual ~ULiveLinkFaceSourceDefaults();


#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Public_LiveLinkFaceSourceDefaults_h_11_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Public_LiveLinkFaceSourceDefaults_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Public_LiveLinkFaceSourceDefaults_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Public_LiveLinkFaceSourceDefaults_h_16_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkFaceSourceDefaults;

// ********** End Class ULiveLinkFaceSourceDefaults ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Public_LiveLinkFaceSourceDefaults_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
