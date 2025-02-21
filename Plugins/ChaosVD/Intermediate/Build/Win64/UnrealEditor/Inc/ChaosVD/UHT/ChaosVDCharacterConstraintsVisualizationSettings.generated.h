// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/ChaosVDCharacterConstraintsVisualizationSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVD_ChaosVDCharacterConstraintsVisualizationSettings_generated_h
#error "ChaosVDCharacterConstraintsVisualizationSettings.generated.h already included, missing '#pragma once' in ChaosVDCharacterConstraintsVisualizationSettings.h"
#endif
#define CHAOSVD_ChaosVDCharacterConstraintsVisualizationSettings_generated_h

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDCharacterConstraintsVisualizationSettings_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVDCharacterConstraintsVisualizationSettings(); \
	friend struct Z_Construct_UClass_UChaosVDCharacterConstraintsVisualizationSettings_Statics; \
public: \
	DECLARE_CLASS(UChaosVDCharacterConstraintsVisualizationSettings, UChaosVDVisualizationSettingsObjectBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVD"), NO_API) \
	DECLARE_SERIALIZER(UChaosVDCharacterConstraintsVisualizationSettings)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDCharacterConstraintsVisualizationSettings_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVDCharacterConstraintsVisualizationSettings(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChaosVDCharacterConstraintsVisualizationSettings(UChaosVDCharacterConstraintsVisualizationSettings&&); \
	UChaosVDCharacterConstraintsVisualizationSettings(const UChaosVDCharacterConstraintsVisualizationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVDCharacterConstraintsVisualizationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDCharacterConstraintsVisualizationSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosVDCharacterConstraintsVisualizationSettings) \
	NO_API virtual ~UChaosVDCharacterConstraintsVisualizationSettings();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDCharacterConstraintsVisualizationSettings_h_36_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDCharacterConstraintsVisualizationSettings_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDCharacterConstraintsVisualizationSettings_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDCharacterConstraintsVisualizationSettings_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSVD_API UClass* StaticClass<class UChaosVDCharacterConstraintsVisualizationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDCharacterConstraintsVisualizationSettings_h


#define FOREACH_ENUM_ECHAOSVDCHARACTERGROUNDCONSTRAINTDATAVISUALIZATIONFLAGS(op) \
	op(EChaosVDCharacterGroundConstraintDataVisualizationFlags::None) \
	op(EChaosVDCharacterGroundConstraintDataVisualizationFlags::TargetDeltaPosition) \
	op(EChaosVDCharacterGroundConstraintDataVisualizationFlags::TargetDeltaFacing) \
	op(EChaosVDCharacterGroundConstraintDataVisualizationFlags::GroundQueryDistance) \
	op(EChaosVDCharacterGroundConstraintDataVisualizationFlags::GroundQueryNormal) \
	op(EChaosVDCharacterGroundConstraintDataVisualizationFlags::AppliedRadialForce) \
	op(EChaosVDCharacterGroundConstraintDataVisualizationFlags::AppliedNormalForce) \
	op(EChaosVDCharacterGroundConstraintDataVisualizationFlags::AppliedTorque) \
	op(EChaosVDCharacterGroundConstraintDataVisualizationFlags::DrawDisabled) \
	op(EChaosVDCharacterGroundConstraintDataVisualizationFlags::OnlyDrawSelected) \
	op(EChaosVDCharacterGroundConstraintDataVisualizationFlags::EnableDraw) 

enum class EChaosVDCharacterGroundConstraintDataVisualizationFlags : uint32;
template<> struct TIsUEnumClass<EChaosVDCharacterGroundConstraintDataVisualizationFlags> { enum { Value = true }; };
template<> CHAOSVD_API UEnum* StaticEnum<EChaosVDCharacterGroundConstraintDataVisualizationFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
