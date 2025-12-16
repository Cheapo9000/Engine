// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneStateActorFactory.h"

#ifdef SCENESTATEGAMEPLAYEDITOR_SceneStateActorFactory_generated_h
#error "SceneStateActorFactory.generated.h already included, missing '#pragma once' in SceneStateActorFactory.h"
#endif
#define SCENESTATEGAMEPLAYEDITOR_SceneStateActorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USceneStateActorFactory **************************************************
struct Z_Construct_UClass_USceneStateActorFactory_Statics;
SCENESTATEGAMEPLAYEDITOR_API UClass* Z_Construct_UClass_USceneStateActorFactory_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateGameplayEditor_Private_SceneStateActorFactory_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneStateActorFactory(); \
	friend struct ::Z_Construct_UClass_USceneStateActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATEGAMEPLAYEDITOR_API UClass* ::Z_Construct_UClass_USceneStateActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStateActorFactory, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SceneStateGameplayEditor"), Z_Construct_UClass_USceneStateActorFactory_NoRegister) \
	DECLARE_SERIALIZER(USceneStateActorFactory)


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateGameplayEditor_Private_SceneStateActorFactory_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStateActorFactory(USceneStateActorFactory&&) = delete; \
	USceneStateActorFactory(const USceneStateActorFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USceneStateActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStateActorFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USceneStateActorFactory) \
	NO_API virtual ~USceneStateActorFactory();


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateGameplayEditor_Private_SceneStateActorFactory_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateGameplayEditor_Private_SceneStateActorFactory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateGameplayEditor_Private_SceneStateActorFactory_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateGameplayEditor_Private_SceneStateActorFactory_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStateActorFactory;

// ********** End Class USceneStateActorFactory ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateGameplayEditor_Private_SceneStateActorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
