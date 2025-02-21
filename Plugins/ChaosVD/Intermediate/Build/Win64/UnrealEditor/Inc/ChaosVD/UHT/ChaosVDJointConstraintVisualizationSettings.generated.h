// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/ChaosVDJointConstraintVisualizationSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVD_ChaosVDJointConstraintVisualizationSettings_generated_h
#error "ChaosVDJointConstraintVisualizationSettings.generated.h already included, missing '#pragma once' in ChaosVDJointConstraintVisualizationSettings.h"
#endif
#define CHAOSVD_ChaosVDJointConstraintVisualizationSettings_generated_h

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDJointConstraintVisualizationSettings_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVDJointConstraintsVisualizationSettings(); \
	friend struct Z_Construct_UClass_UChaosVDJointConstraintsVisualizationSettings_Statics; \
public: \
	DECLARE_CLASS(UChaosVDJointConstraintsVisualizationSettings, UChaosVDVisualizationSettingsObjectBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVD"), NO_API) \
	DECLARE_SERIALIZER(UChaosVDJointConstraintsVisualizationSettings)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDJointConstraintVisualizationSettings_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVDJointConstraintsVisualizationSettings(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChaosVDJointConstraintsVisualizationSettings(UChaosVDJointConstraintsVisualizationSettings&&); \
	UChaosVDJointConstraintsVisualizationSettings(const UChaosVDJointConstraintsVisualizationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVDJointConstraintsVisualizationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDJointConstraintsVisualizationSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosVDJointConstraintsVisualizationSettings) \
	NO_API virtual ~UChaosVDJointConstraintsVisualizationSettings();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDJointConstraintVisualizationSettings_h_31_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDJointConstraintVisualizationSettings_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDJointConstraintVisualizationSettings_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDJointConstraintVisualizationSettings_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSVD_API UClass* StaticClass<class UChaosVDJointConstraintsVisualizationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDJointConstraintVisualizationSettings_h


#define FOREACH_ENUM_ECHAOSVDJOINTSDATAVISUALIZATIONFLAGS(op) \
	op(EChaosVDJointsDataVisualizationFlags::None) \
	op(EChaosVDJointsDataVisualizationFlags::PushOut) \
	op(EChaosVDJointsDataVisualizationFlags::AngularImpulse) \
	op(EChaosVDJointsDataVisualizationFlags::ActorConnector) \
	op(EChaosVDJointsDataVisualizationFlags::CenterOfMassConnector) \
	op(EChaosVDJointsDataVisualizationFlags::Stretch) \
	op(EChaosVDJointsDataVisualizationFlags::Axes) \
	op(EChaosVDJointsDataVisualizationFlags::DrawKinematic) \
	op(EChaosVDJointsDataVisualizationFlags::DrawDisabled) \
	op(EChaosVDJointsDataVisualizationFlags::OnlyDrawSelected) \
	op(EChaosVDJointsDataVisualizationFlags::EnableDraw) 

enum class EChaosVDJointsDataVisualizationFlags : uint32;
template<> struct TIsUEnumClass<EChaosVDJointsDataVisualizationFlags> { enum { Value = true }; };
template<> CHAOSVD_API UEnum* StaticEnum<EChaosVDJointsDataVisualizationFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
