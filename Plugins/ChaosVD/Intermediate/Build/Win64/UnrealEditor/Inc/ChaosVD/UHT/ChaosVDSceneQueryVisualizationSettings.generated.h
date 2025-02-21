// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/ChaosVDSceneQueryVisualizationSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVD_ChaosVDSceneQueryVisualizationSettings_generated_h
#error "ChaosVDSceneQueryVisualizationSettings.generated.h already included, missing '#pragma once' in ChaosVDSceneQueryVisualizationSettings.h"
#endif
#define CHAOSVD_ChaosVDSceneQueryVisualizationSettings_generated_h

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDSceneQueryVisualizationSettings_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVDSceneQueriesVisualizationSettings(); \
	friend struct Z_Construct_UClass_UChaosVDSceneQueriesVisualizationSettings_Statics; \
public: \
	DECLARE_CLASS(UChaosVDSceneQueriesVisualizationSettings, UChaosVDVisualizationSettingsObjectBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVD"), NO_API) \
	DECLARE_SERIALIZER(UChaosVDSceneQueriesVisualizationSettings)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDSceneQueryVisualizationSettings_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVDSceneQueriesVisualizationSettings(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChaosVDSceneQueriesVisualizationSettings(UChaosVDSceneQueriesVisualizationSettings&&); \
	UChaosVDSceneQueriesVisualizationSettings(const UChaosVDSceneQueriesVisualizationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVDSceneQueriesVisualizationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDSceneQueriesVisualizationSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosVDSceneQueriesVisualizationSettings) \
	NO_API virtual ~UChaosVDSceneQueriesVisualizationSettings();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDSceneQueryVisualizationSettings_h_35_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDSceneQueryVisualizationSettings_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDSceneQueryVisualizationSettings_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDSceneQueryVisualizationSettings_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSVD_API UClass* StaticClass<class UChaosVDSceneQueriesVisualizationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDSceneQueryVisualizationSettings_h


#define FOREACH_ENUM_ECHAOSVDSCENEQUERYVISUALIZATIONFLAGS(op) \
	op(EChaosVDSceneQueryVisualizationFlags::None) \
	op(EChaosVDSceneQueryVisualizationFlags::EnableDraw) \
	op(EChaosVDSceneQueryVisualizationFlags::DrawLineTraceQueries) \
	op(EChaosVDSceneQueryVisualizationFlags::DrawSweepQueries) \
	op(EChaosVDSceneQueryVisualizationFlags::DrawOverlapQueries) \
	op(EChaosVDSceneQueryVisualizationFlags::DrawHits) \
	op(EChaosVDSceneQueryVisualizationFlags::OnlyDrawSelectedQuery) \
	op(EChaosVDSceneQueryVisualizationFlags::HideEmptyQueries) \
	op(EChaosVDSceneQueryVisualizationFlags::HideSubQueries) 

enum class EChaosVDSceneQueryVisualizationFlags : uint32;
template<> struct TIsUEnumClass<EChaosVDSceneQueryVisualizationFlags> { enum { Value = true }; };
template<> CHAOSVD_API UEnum* StaticEnum<EChaosVDSceneQueryVisualizationFlags>();

#define FOREACH_ENUM_ECHAOSVDSQFRAMEVISUALIZATIONMODE(op) \
	op(EChaosVDSQFrameVisualizationMode::AllEnabledQueries) \
	op(EChaosVDSQFrameVisualizationMode::RecordingOrder) 

enum class EChaosVDSQFrameVisualizationMode : uint8;
template<> struct TIsUEnumClass<EChaosVDSQFrameVisualizationMode> { enum { Value = true }; };
template<> CHAOSVD_API UEnum* StaticEnum<EChaosVDSQFrameVisualizationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
