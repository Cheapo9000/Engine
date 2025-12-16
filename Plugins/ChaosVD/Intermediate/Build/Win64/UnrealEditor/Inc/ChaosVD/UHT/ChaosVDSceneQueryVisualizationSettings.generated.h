// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/ChaosVDSceneQueryVisualizationSettings.h"

#ifdef CHAOSVD_ChaosVDSceneQueryVisualizationSettings_generated_h
#error "ChaosVDSceneQueryVisualizationSettings.generated.h already included, missing '#pragma once' in ChaosVDSceneQueryVisualizationSettings.h"
#endif
#define CHAOSVD_ChaosVDSceneQueryVisualizationSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosVDSceneQueriesVisualizationSettings ********************************
struct Z_Construct_UClass_UChaosVDSceneQueriesVisualizationSettings_Statics;
CHAOSVD_API UClass* Z_Construct_UClass_UChaosVDSceneQueriesVisualizationSettings_NoRegister();

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDSceneQueryVisualizationSettings_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVDSceneQueriesVisualizationSettings(); \
	friend struct ::Z_Construct_UClass_UChaosVDSceneQueriesVisualizationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVD_API UClass* ::Z_Construct_UClass_UChaosVDSceneQueriesVisualizationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosVDSceneQueriesVisualizationSettings, UChaosVDVisualizationSettingsObjectBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVD"), Z_Construct_UClass_UChaosVDSceneQueriesVisualizationSettings_NoRegister) \
	DECLARE_SERIALIZER(UChaosVDSceneQueriesVisualizationSettings)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDSceneQueryVisualizationSettings_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVDSceneQueriesVisualizationSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosVDSceneQueriesVisualizationSettings(UChaosVDSceneQueriesVisualizationSettings&&) = delete; \
	UChaosVDSceneQueriesVisualizationSettings(const UChaosVDSceneQueriesVisualizationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVDSceneQueriesVisualizationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDSceneQueriesVisualizationSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosVDSceneQueriesVisualizationSettings) \
	NO_API virtual ~UChaosVDSceneQueriesVisualizationSettings();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDSceneQueryVisualizationSettings_h_36_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDSceneQueryVisualizationSettings_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDSceneQueryVisualizationSettings_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDSceneQueryVisualizationSettings_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosVDSceneQueriesVisualizationSettings;

// ********** End Class UChaosVDSceneQueriesVisualizationSettings **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDSceneQueryVisualizationSettings_h

// ********** Begin Enum EChaosVDSceneQueryVisualizationFlags **************************************
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
template<> CHAOSVD_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDSceneQueryVisualizationFlags>();
// ********** End Enum EChaosVDSceneQueryVisualizationFlags ****************************************

// ********** Begin Enum EChaosVDSQFrameVisualizationMode ******************************************
#define FOREACH_ENUM_ECHAOSVDSQFRAMEVISUALIZATIONMODE(op) \
	op(EChaosVDSQFrameVisualizationMode::AllEnabledQueries) \
	op(EChaosVDSQFrameVisualizationMode::PerSolverRecordingOrder) 

enum class EChaosVDSQFrameVisualizationMode : uint8;
template<> struct TIsUEnumClass<EChaosVDSQFrameVisualizationMode> { enum { Value = true }; };
template<> CHAOSVD_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDSQFrameVisualizationMode>();
// ********** End Enum EChaosVDSQFrameVisualizationMode ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
