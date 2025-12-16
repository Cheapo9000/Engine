// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Snapping/ModelingSceneSnappingManager.h"

#ifdef MODELINGCOMPONENTS_ModelingSceneSnappingManager_generated_h
#error "ModelingSceneSnappingManager.generated.h already included, missing '#pragma once' in ModelingSceneSnappingManager.h"
#endif
#define MODELINGCOMPONENTS_ModelingSceneSnappingManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UModelingSceneSnappingManager ********************************************
struct Z_Construct_UClass_UModelingSceneSnappingManager_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UModelingSceneSnappingManager_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Snapping_ModelingSceneSnappingManager_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModelingSceneSnappingManager(); \
	friend struct ::Z_Construct_UClass_UModelingSceneSnappingManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UModelingSceneSnappingManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UModelingSceneSnappingManager, USceneSnappingManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UModelingSceneSnappingManager_NoRegister) \
	DECLARE_SERIALIZER(UModelingSceneSnappingManager)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Snapping_ModelingSceneSnappingManager_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UModelingSceneSnappingManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModelingSceneSnappingManager(UModelingSceneSnappingManager&&) = delete; \
	UModelingSceneSnappingManager(const UModelingSceneSnappingManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UModelingSceneSnappingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModelingSceneSnappingManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModelingSceneSnappingManager) \
	MODELINGCOMPONENTS_API virtual ~UModelingSceneSnappingManager();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Snapping_ModelingSceneSnappingManager_h_34_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Snapping_ModelingSceneSnappingManager_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Snapping_ModelingSceneSnappingManager_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Snapping_ModelingSceneSnappingManager_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModelingSceneSnappingManager;

// ********** End Class UModelingSceneSnappingManager **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Snapping_ModelingSceneSnappingManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
