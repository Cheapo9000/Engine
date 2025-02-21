// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Assets/ReplicationSessionPresetFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIUSERREPLICATIONEDITOR_ReplicationSessionPresetFactory_generated_h
#error "ReplicationSessionPresetFactory.generated.h already included, missing '#pragma once' in ReplicationSessionPresetFactory.h"
#endif
#define MULTIUSERREPLICATIONEDITOR_ReplicationSessionPresetFactory_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserReplicationEditor_Private_Assets_ReplicationSessionPresetFactory_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUReplicationSessionPresetFactory(); \
	friend struct Z_Construct_UClass_UReplicationSessionPresetFactory_Statics; \
public: \
	DECLARE_CLASS(UReplicationSessionPresetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiUserReplicationEditor"), MULTIUSERREPLICATIONEDITOR_API) \
	DECLARE_SERIALIZER(UReplicationSessionPresetFactory)


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserReplicationEditor_Private_Assets_ReplicationSessionPresetFactory_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MULTIUSERREPLICATIONEDITOR_API UReplicationSessionPresetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplicationSessionPresetFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MULTIUSERREPLICATIONEDITOR_API, UReplicationSessionPresetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationSessionPresetFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UReplicationSessionPresetFactory(UReplicationSessionPresetFactory&&); \
	UReplicationSessionPresetFactory(const UReplicationSessionPresetFactory&); \
public: \
	MULTIUSERREPLICATIONEDITOR_API virtual ~UReplicationSessionPresetFactory();


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserReplicationEditor_Private_Assets_ReplicationSessionPresetFactory_h_9_PROLOG
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserReplicationEditor_Private_Assets_ReplicationSessionPresetFactory_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserReplicationEditor_Private_Assets_ReplicationSessionPresetFactory_h_12_INCLASS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserReplicationEditor_Private_Assets_ReplicationSessionPresetFactory_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIUSERREPLICATIONEDITOR_API UClass* StaticClass<class UReplicationSessionPresetFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserReplicationEditor_Private_Assets_ReplicationSessionPresetFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
