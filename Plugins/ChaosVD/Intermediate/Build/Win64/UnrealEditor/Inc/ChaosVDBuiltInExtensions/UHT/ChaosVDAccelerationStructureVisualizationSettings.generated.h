// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AccelerationStructures/Settings/ChaosVDAccelerationStructureVisualizationSettings.h"

#ifdef CHAOSVDBUILTINEXTENSIONS_ChaosVDAccelerationStructureVisualizationSettings_generated_h
#error "ChaosVDAccelerationStructureVisualizationSettings.generated.h already included, missing '#pragma once' in ChaosVDAccelerationStructureVisualizationSettings.h"
#endif
#define CHAOSVDBUILTINEXTENSIONS_ChaosVDAccelerationStructureVisualizationSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosVDAccelerationStructureVisualizationSettings ***********************
struct Z_Construct_UClass_UChaosVDAccelerationStructureVisualizationSettings_Statics;
CHAOSVDBUILTINEXTENSIONS_API UClass* Z_Construct_UClass_UChaosVDAccelerationStructureVisualizationSettings_NoRegister();

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVDBuiltInExtensions_Private_AccelerationStructures_Settings_ChaosVDAccelerationStructureVisualizationSettings_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVDAccelerationStructureVisualizationSettings(); \
	friend struct ::Z_Construct_UClass_UChaosVDAccelerationStructureVisualizationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVDBUILTINEXTENSIONS_API UClass* ::Z_Construct_UClass_UChaosVDAccelerationStructureVisualizationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosVDAccelerationStructureVisualizationSettings, UChaosVDVisualizationSettingsObjectBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVDBuiltInExtensions"), Z_Construct_UClass_UChaosVDAccelerationStructureVisualizationSettings_NoRegister) \
	DECLARE_SERIALIZER(UChaosVDAccelerationStructureVisualizationSettings)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVDBuiltInExtensions_Private_AccelerationStructures_Settings_ChaosVDAccelerationStructureVisualizationSettings_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVDAccelerationStructureVisualizationSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosVDAccelerationStructureVisualizationSettings(UChaosVDAccelerationStructureVisualizationSettings&&) = delete; \
	UChaosVDAccelerationStructureVisualizationSettings(const UChaosVDAccelerationStructureVisualizationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVDAccelerationStructureVisualizationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDAccelerationStructureVisualizationSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosVDAccelerationStructureVisualizationSettings) \
	NO_API virtual ~UChaosVDAccelerationStructureVisualizationSettings();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVDBuiltInExtensions_Private_AccelerationStructures_Settings_ChaosVDAccelerationStructureVisualizationSettings_h_39_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVDBuiltInExtensions_Private_AccelerationStructures_Settings_ChaosVDAccelerationStructureVisualizationSettings_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVDBuiltInExtensions_Private_AccelerationStructures_Settings_ChaosVDAccelerationStructureVisualizationSettings_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVDBuiltInExtensions_Private_AccelerationStructures_Settings_ChaosVDAccelerationStructureVisualizationSettings_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosVDAccelerationStructureVisualizationSettings;

// ********** End Class UChaosVDAccelerationStructureVisualizationSettings *************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVDBuiltInExtensions_Private_AccelerationStructures_Settings_ChaosVDAccelerationStructureVisualizationSettings_h

// ********** Begin Enum EChaosVDAccelerationStructureDataVisualizationFlags ***********************
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
template<> CHAOSVDBUILTINEXTENSIONS_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDAccelerationStructureDataVisualizationFlags>();
// ********** End Enum EChaosVDAccelerationStructureDataVisualizationFlags *************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
