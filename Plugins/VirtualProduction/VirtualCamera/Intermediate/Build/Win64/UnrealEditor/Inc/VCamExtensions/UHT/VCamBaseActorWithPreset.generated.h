// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VCamBaseActorWithPreset.h"

#ifdef VCAMEXTENSIONS_VCamBaseActorWithPreset_generated_h
#error "VCamBaseActorWithPreset.generated.h already included, missing '#pragma once' in VCamBaseActorWithPreset.h"
#endif
#define VCAMEXTENSIONS_VCamBaseActorWithPreset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AVCamBaseActorWithPreset *************************************************
struct Z_Construct_UClass_AVCamBaseActorWithPreset_Statics;
VCAMEXTENSIONS_API UClass* Z_Construct_UClass_AVCamBaseActorWithPreset_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_VCamBaseActorWithPreset_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVCamBaseActorWithPreset(); \
	friend struct ::Z_Construct_UClass_AVCamBaseActorWithPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMEXTENSIONS_API UClass* ::Z_Construct_UClass_AVCamBaseActorWithPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(AVCamBaseActorWithPreset, AVCamBaseActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/VCamExtensions"), Z_Construct_UClass_AVCamBaseActorWithPreset_NoRegister) \
	DECLARE_SERIALIZER(AVCamBaseActorWithPreset)


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_VCamBaseActorWithPreset_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVCamBaseActorWithPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVCamBaseActorWithPreset(AVCamBaseActorWithPreset&&) = delete; \
	AVCamBaseActorWithPreset(const AVCamBaseActorWithPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVCamBaseActorWithPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVCamBaseActorWithPreset); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVCamBaseActorWithPreset) \
	NO_API virtual ~AVCamBaseActorWithPreset();


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_VCamBaseActorWithPreset_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_VCamBaseActorWithPreset_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_VCamBaseActorWithPreset_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_VCamBaseActorWithPreset_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVCamBaseActorWithPreset;

// ********** End Class AVCamBaseActorWithPreset ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_VCamBaseActorWithPreset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
