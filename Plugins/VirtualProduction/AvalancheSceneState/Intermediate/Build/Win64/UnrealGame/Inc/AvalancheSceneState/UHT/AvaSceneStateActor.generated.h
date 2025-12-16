// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaSceneStateActor.h"

#ifdef AVALANCHESCENESTATE_AvaSceneStateActor_generated_h
#error "AvaSceneStateActor.generated.h already included, missing '#pragma once' in AvaSceneStateActor.h"
#endif
#define AVALANCHESCENESTATE_AvaSceneStateActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAvaSceneStateActor ******************************************************
struct Z_Construct_UClass_AAvaSceneStateActor_Statics;
AVALANCHESCENESTATE_API UClass* Z_Construct_UClass_AAvaSceneStateActor_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_AvalancheSceneState_Source_AvalancheSceneState_Public_AvaSceneStateActor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAvaSceneStateActor(); \
	friend struct ::Z_Construct_UClass_AAvaSceneStateActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHESCENESTATE_API UClass* ::Z_Construct_UClass_AAvaSceneStateActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AAvaSceneStateActor, ASceneStateActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheSceneState"), Z_Construct_UClass_AAvaSceneStateActor_NoRegister) \
	DECLARE_SERIALIZER(AAvaSceneStateActor)


#define FID_Engine_Plugins_VirtualProduction_AvalancheSceneState_Source_AvalancheSceneState_Public_AvaSceneStateActor_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAvaSceneStateActor(AAvaSceneStateActor&&) = delete; \
	AAvaSceneStateActor(const AAvaSceneStateActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHESCENESTATE_API, AAvaSceneStateActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAvaSceneStateActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAvaSceneStateActor) \
	AVALANCHESCENESTATE_API virtual ~AAvaSceneStateActor();


#define FID_Engine_Plugins_VirtualProduction_AvalancheSceneState_Source_AvalancheSceneState_Public_AvaSceneStateActor_h_17_PROLOG
#define FID_Engine_Plugins_VirtualProduction_AvalancheSceneState_Source_AvalancheSceneState_Public_AvaSceneStateActor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_AvalancheSceneState_Source_AvalancheSceneState_Public_AvaSceneStateActor_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_AvalancheSceneState_Source_AvalancheSceneState_Public_AvaSceneStateActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAvaSceneStateActor;

// ********** End Class AAvaSceneStateActor ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_AvalancheSceneState_Source_AvalancheSceneState_Public_AvaSceneStateActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
