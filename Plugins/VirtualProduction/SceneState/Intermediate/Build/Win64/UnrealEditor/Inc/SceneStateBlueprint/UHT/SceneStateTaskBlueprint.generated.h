// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneStateTaskBlueprint.h"

#ifdef SCENESTATEBLUEPRINT_SceneStateTaskBlueprint_generated_h
#error "SceneStateTaskBlueprint.generated.h already included, missing '#pragma once' in SceneStateTaskBlueprint.h"
#endif
#define SCENESTATEBLUEPRINT_SceneStateTaskBlueprint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USceneStateTaskBlueprint *************************************************
struct Z_Construct_UClass_USceneStateTaskBlueprint_Statics;
SCENESTATEBLUEPRINT_API UClass* Z_Construct_UClass_USceneStateTaskBlueprint_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBlueprint_Public_SceneStateTaskBlueprint_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneStateTaskBlueprint(); \
	friend struct ::Z_Construct_UClass_USceneStateTaskBlueprint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATEBLUEPRINT_API UClass* ::Z_Construct_UClass_USceneStateTaskBlueprint_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStateTaskBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SceneStateBlueprint"), Z_Construct_UClass_USceneStateTaskBlueprint_NoRegister) \
	DECLARE_SERIALIZER(USceneStateTaskBlueprint)


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBlueprint_Public_SceneStateTaskBlueprint_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCENESTATEBLUEPRINT_API USceneStateTaskBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStateTaskBlueprint(USceneStateTaskBlueprint&&) = delete; \
	USceneStateTaskBlueprint(const USceneStateTaskBlueprint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCENESTATEBLUEPRINT_API, USceneStateTaskBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStateTaskBlueprint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneStateTaskBlueprint) \
	SCENESTATEBLUEPRINT_API virtual ~USceneStateTaskBlueprint();


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBlueprint_Public_SceneStateTaskBlueprint_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBlueprint_Public_SceneStateTaskBlueprint_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBlueprint_Public_SceneStateTaskBlueprint_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBlueprint_Public_SceneStateTaskBlueprint_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStateTaskBlueprint;

// ********** End Class USceneStateTaskBlueprint ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBlueprint_Public_SceneStateTaskBlueprint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
