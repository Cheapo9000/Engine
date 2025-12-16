// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/ChaosVDCharacterConstraintsVisualizationSettings.h"

#ifdef CHAOSVD_ChaosVDCharacterConstraintsVisualizationSettings_generated_h
#error "ChaosVDCharacterConstraintsVisualizationSettings.generated.h already included, missing '#pragma once' in ChaosVDCharacterConstraintsVisualizationSettings.h"
#endif
#define CHAOSVD_ChaosVDCharacterConstraintsVisualizationSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosVDCharacterConstraintsVisualizationSettings ************************
struct Z_Construct_UClass_UChaosVDCharacterConstraintsVisualizationSettings_Statics;
CHAOSVD_API UClass* Z_Construct_UClass_UChaosVDCharacterConstraintsVisualizationSettings_NoRegister();

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDCharacterConstraintsVisualizationSettings_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVDCharacterConstraintsVisualizationSettings(); \
	friend struct ::Z_Construct_UClass_UChaosVDCharacterConstraintsVisualizationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVD_API UClass* ::Z_Construct_UClass_UChaosVDCharacterConstraintsVisualizationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosVDCharacterConstraintsVisualizationSettings, UChaosVDVisualizationSettingsObjectBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVD"), Z_Construct_UClass_UChaosVDCharacterConstraintsVisualizationSettings_NoRegister) \
	DECLARE_SERIALIZER(UChaosVDCharacterConstraintsVisualizationSettings)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDCharacterConstraintsVisualizationSettings_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVDCharacterConstraintsVisualizationSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosVDCharacterConstraintsVisualizationSettings(UChaosVDCharacterConstraintsVisualizationSettings&&) = delete; \
	UChaosVDCharacterConstraintsVisualizationSettings(const UChaosVDCharacterConstraintsVisualizationSettings&) = delete; \
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


class UChaosVDCharacterConstraintsVisualizationSettings;

// ********** End Class UChaosVDCharacterConstraintsVisualizationSettings **************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDCharacterConstraintsVisualizationSettings_h

// ********** Begin Enum EChaosVDCharacterGroundConstraintDataVisualizationFlags *******************
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
template<> CHAOSVD_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDCharacterGroundConstraintDataVisualizationFlags>();
// ********** End Enum EChaosVDCharacterGroundConstraintDataVisualizationFlags *********************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
