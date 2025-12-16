// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StageActor/IDisplayClusterStageActor.h"

#ifdef DISPLAYCLUSTERLIGHTCARDEXTENDER_IDisplayClusterStageActor_generated_h
#error "IDisplayClusterStageActor.generated.h already included, missing '#pragma once' in IDisplayClusterStageActor.h"
#endif
#define DISPLAYCLUSTERLIGHTCARDEXTENDER_IDisplayClusterStageActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UDisplayClusterStageActor ********************************************
struct Z_Construct_UClass_UDisplayClusterStageActor_Statics;
DISPLAYCLUSTERLIGHTCARDEXTENDER_API UClass* Z_Construct_UClass_UDisplayClusterStageActor_NoRegister();

#define FID_Engine_Plugins_Runtime_nDisplayModularFeatures_Source_DisplayClusterLightCardExtender_Public_StageActor_IDisplayClusterStageActor_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DISPLAYCLUSTERLIGHTCARDEXTENDER_API UDisplayClusterStageActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDisplayClusterStageActor(UDisplayClusterStageActor&&) = delete; \
	UDisplayClusterStageActor(const UDisplayClusterStageActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DISPLAYCLUSTERLIGHTCARDEXTENDER_API, UDisplayClusterStageActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterStageActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayClusterStageActor) \
	virtual ~UDisplayClusterStageActor() = default;


#define FID_Engine_Plugins_Runtime_nDisplayModularFeatures_Source_DisplayClusterLightCardExtender_Public_StageActor_IDisplayClusterStageActor_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDisplayClusterStageActor(); \
	friend struct ::Z_Construct_UClass_UDisplayClusterStageActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISPLAYCLUSTERLIGHTCARDEXTENDER_API UClass* ::Z_Construct_UClass_UDisplayClusterStageActor_NoRegister(); \
public: \
	DECLARE_CLASS2(UDisplayClusterStageActor, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DisplayClusterLightCardExtender"), Z_Construct_UClass_UDisplayClusterStageActor_NoRegister) \
	DECLARE_SERIALIZER(UDisplayClusterStageActor)


#define FID_Engine_Plugins_Runtime_nDisplayModularFeatures_Source_DisplayClusterLightCardExtender_Public_StageActor_IDisplayClusterStageActor_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_nDisplayModularFeatures_Source_DisplayClusterLightCardExtender_Public_StageActor_IDisplayClusterStageActor_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_nDisplayModularFeatures_Source_DisplayClusterLightCardExtender_Public_StageActor_IDisplayClusterStageActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_nDisplayModularFeatures_Source_DisplayClusterLightCardExtender_Public_StageActor_IDisplayClusterStageActor_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDisplayClusterStageActor() {} \
public: \
	typedef UDisplayClusterStageActor UClassType; \
	typedef IDisplayClusterStageActor ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_nDisplayModularFeatures_Source_DisplayClusterLightCardExtender_Public_StageActor_IDisplayClusterStageActor_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplayModularFeatures_Source_DisplayClusterLightCardExtender_Public_StageActor_IDisplayClusterStageActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplayModularFeatures_Source_DisplayClusterLightCardExtender_Public_StageActor_IDisplayClusterStageActor_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDisplayClusterStageActor;

// ********** End Interface UDisplayClusterStageActor **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplayModularFeatures_Source_DisplayClusterLightCardExtender_Public_StageActor_IDisplayClusterStageActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
