// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/ChaosVDJointConstraintVisualizationSettings.h"

#ifdef CHAOSVD_ChaosVDJointConstraintVisualizationSettings_generated_h
#error "ChaosVDJointConstraintVisualizationSettings.generated.h already included, missing '#pragma once' in ChaosVDJointConstraintVisualizationSettings.h"
#endif
#define CHAOSVD_ChaosVDJointConstraintVisualizationSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosVDJointConstraintsVisualizationSettings ****************************
struct Z_Construct_UClass_UChaosVDJointConstraintsVisualizationSettings_Statics;
CHAOSVD_API UClass* Z_Construct_UClass_UChaosVDJointConstraintsVisualizationSettings_NoRegister();

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDJointConstraintVisualizationSettings_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVDJointConstraintsVisualizationSettings(); \
	friend struct ::Z_Construct_UClass_UChaosVDJointConstraintsVisualizationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVD_API UClass* ::Z_Construct_UClass_UChaosVDJointConstraintsVisualizationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosVDJointConstraintsVisualizationSettings, UChaosVDVisualizationSettingsObjectBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVD"), Z_Construct_UClass_UChaosVDJointConstraintsVisualizationSettings_NoRegister) \
	DECLARE_SERIALIZER(UChaosVDJointConstraintsVisualizationSettings)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDJointConstraintVisualizationSettings_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVDJointConstraintsVisualizationSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosVDJointConstraintsVisualizationSettings(UChaosVDJointConstraintsVisualizationSettings&&) = delete; \
	UChaosVDJointConstraintsVisualizationSettings(const UChaosVDJointConstraintsVisualizationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVDJointConstraintsVisualizationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDJointConstraintsVisualizationSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosVDJointConstraintsVisualizationSettings) \
	NO_API virtual ~UChaosVDJointConstraintsVisualizationSettings();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDJointConstraintVisualizationSettings_h_32_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDJointConstraintVisualizationSettings_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDJointConstraintVisualizationSettings_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDJointConstraintVisualizationSettings_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosVDJointConstraintsVisualizationSettings;

// ********** End Class UChaosVDJointConstraintsVisualizationSettings ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDJointConstraintVisualizationSettings_h

// ********** Begin Enum EChaosVDJointsDataVisualizationFlags **************************************
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
template<> CHAOSVD_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDJointsDataVisualizationFlags>();
// ********** End Enum EChaosVDJointsDataVisualizationFlags ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
