// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneStateBlueprint.h"

#ifdef SCENESTATEBLUEPRINT_SceneStateBlueprint_generated_h
#error "SceneStateBlueprint.generated.h already included, missing '#pragma once' in SceneStateBlueprint.h"
#endif
#define SCENESTATEBLUEPRINT_SceneStateBlueprint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USceneStateBlueprint *****************************************************
struct Z_Construct_UClass_USceneStateBlueprint_Statics;
SCENESTATEBLUEPRINT_API UClass* Z_Construct_UClass_USceneStateBlueprint_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBlueprint_Public_SceneStateBlueprint_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneStateBlueprint(); \
	friend struct ::Z_Construct_UClass_USceneStateBlueprint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATEBLUEPRINT_API UClass* ::Z_Construct_UClass_USceneStateBlueprint_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStateBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SceneStateBlueprint"), Z_Construct_UClass_USceneStateBlueprint_NoRegister) \
	DECLARE_SERIALIZER(USceneStateBlueprint) \
	virtual UObject* _getUObject() const override { return const_cast<USceneStateBlueprint*>(this); }


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBlueprint_Public_SceneStateBlueprint_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStateBlueprint(USceneStateBlueprint&&) = delete; \
	USceneStateBlueprint(const USceneStateBlueprint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCENESTATEBLUEPRINT_API, USceneStateBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStateBlueprint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneStateBlueprint) \
	SCENESTATEBLUEPRINT_API virtual ~USceneStateBlueprint();


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBlueprint_Public_SceneStateBlueprint_h_16_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBlueprint_Public_SceneStateBlueprint_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBlueprint_Public_SceneStateBlueprint_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBlueprint_Public_SceneStateBlueprint_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStateBlueprint;

// ********** End Class USceneStateBlueprint *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBlueprint_Public_SceneStateBlueprint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
