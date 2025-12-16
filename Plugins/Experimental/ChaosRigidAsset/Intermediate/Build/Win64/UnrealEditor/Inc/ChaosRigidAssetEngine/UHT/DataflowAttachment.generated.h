// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataflowAttachment.h"

#ifdef CHAOSRIGIDASSETENGINE_DataflowAttachment_generated_h
#error "DataflowAttachment.generated.h already included, missing '#pragma once' in DataflowAttachment.h"
#endif
#define CHAOSRIGIDASSETENGINE_DataflowAttachment_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataflowAttachment ******************************************************
struct Z_Construct_UClass_UDataflowAttachment_Statics;
CHAOSRIGIDASSETENGINE_API UClass* Z_Construct_UClass_UDataflowAttachment_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetEngine_Public_DataflowAttachment_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowAttachment(); \
	friend struct ::Z_Construct_UClass_UDataflowAttachment_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSRIGIDASSETENGINE_API UClass* ::Z_Construct_UClass_UDataflowAttachment_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowAttachment, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosRigidAssetEngine"), Z_Construct_UClass_UDataflowAttachment_NoRegister) \
	DECLARE_SERIALIZER(UDataflowAttachment) \
	virtual UObject* _getUObject() const override { return const_cast<UDataflowAttachment*>(this); }


#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetEngine_Public_DataflowAttachment_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataflowAttachment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowAttachment(UDataflowAttachment&&) = delete; \
	UDataflowAttachment(const UDataflowAttachment&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataflowAttachment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowAttachment); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowAttachment) \
	NO_API virtual ~UDataflowAttachment();


#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetEngine_Public_DataflowAttachment_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetEngine_Public_DataflowAttachment_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetEngine_Public_DataflowAttachment_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetEngine_Public_DataflowAttachment_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowAttachment;

// ********** End Class UDataflowAttachment ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetEngine_Public_DataflowAttachment_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
