// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/ChaosVDAccelerationStructureVisualizationSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVD_ChaosVDAccelerationStructureVisualizationSettings_generated_h
#error "ChaosVDAccelerationStructureVisualizationSettings.generated.h already included, missing '#pragma once' in ChaosVDAccelerationStructureVisualizationSettings.h"
#endif
#define CHAOSVD_ChaosVDAccelerationStructureVisualizationSettings_generated_h

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDAccelerationStructureVisualizationSettings_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVDAccelerationStructureVisualizationSettings(); \
	friend struct Z_Construct_UClass_UChaosVDAccelerationStructureVisualizationSettings_Statics; \
public: \
	DECLARE_CLASS(UChaosVDAccelerationStructureVisualizationSettings, UChaosVDVisualizationSettingsObjectBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVD"), NO_API) \
	DECLARE_SERIALIZER(UChaosVDAccelerationStructureVisualizationSettings)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDAccelerationStructureVisualizationSettings_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVDAccelerationStructureVisualizationSettings(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChaosVDAccelerationStructureVisualizationSettings(UChaosVDAccelerationStructureVisualizationSettings&&); \
	UChaosVDAccelerationStructureVisualizationSettings(const UChaosVDAccelerationStructureVisualizationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVDAccelerationStructureVisualizationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDAccelerationStructureVisualizationSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosVDAccelerationStructureVisualizationSettings) \
	NO_API virtual ~UChaosVDAccelerationStructureVisualizationSettings();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDAccelerationStructureVisualizationSettings_h_39_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDAccelerationStructureVisualizationSettings_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDAccelerationStructureVisualizationSettings_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDAccelerationStructureVisualizationSettings_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSVD_API UClass* StaticClass<class UChaosVDAccelerationStructureVisualizationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDAccelerationStructureVisualizationSettings_h


#define FOREACH_ENUM_ECHAOSVDACCELERATIONSTRUCTUREDATAVISUALIZATIONFLAGS(op) \
	op(EChaosVDAccelerationStructureDataVisualizationFlags::None) \
	op(EChaosVDAccelerationStructureDataVisualizationFlags::DrawNodesBounds) \
	op(EChaosVDAccelerationStructureDataVisualizationFlags::DrawBranches) \
	op(EChaosVDAccelerationStructureDataVisualizationFlags::DrawLeavesBounds) \
	op(EChaosVDAccelerationStructureDataVisualizationFlags::DrawLeavesElementBounds) \
	op(EChaosVDAccelerationStructureDataVisualizationFlags::DrawLeavesElementConnections) \
	op(EChaosVDAccelerationStructureDataVisualizationFlags::DrawDynamicTrees) \
	op(EChaosVDAccelerationStructureDataVisualizationFlags::DrawStaticTrees) \
	op(EChaosVDAccelerationStructureDataVisualizationFlags::DrawLeavesRealElementBounds) \
	op(EChaosVDAccelerationStructureDataVisualizationFlags::EnableDraw) 

enum class EChaosVDAccelerationStructureDataVisualizationFlags : uint32;
template<> struct TIsUEnumClass<EChaosVDAccelerationStructureDataVisualizationFlags> { enum { Value = true }; };
template<> CHAOSVD_API UEnum* StaticEnum<EChaosVDAccelerationStructureDataVisualizationFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
