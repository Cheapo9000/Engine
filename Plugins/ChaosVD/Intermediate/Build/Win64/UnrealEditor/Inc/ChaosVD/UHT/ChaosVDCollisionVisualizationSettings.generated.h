// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/ChaosVDCollisionVisualizationSettings.h"

#ifdef CHAOSVD_ChaosVDCollisionVisualizationSettings_generated_h
#error "ChaosVDCollisionVisualizationSettings.generated.h already included, missing '#pragma once' in ChaosVDCollisionVisualizationSettings.h"
#endif
#define CHAOSVD_ChaosVDCollisionVisualizationSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosVDCollisionDataVisualizationSettings *******************************
struct Z_Construct_UClass_UChaosVDCollisionDataVisualizationSettings_Statics;
CHAOSVD_API UClass* Z_Construct_UClass_UChaosVDCollisionDataVisualizationSettings_NoRegister();

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDCollisionVisualizationSettings_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVDCollisionDataVisualizationSettings(); \
	friend struct ::Z_Construct_UClass_UChaosVDCollisionDataVisualizationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVD_API UClass* ::Z_Construct_UClass_UChaosVDCollisionDataVisualizationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosVDCollisionDataVisualizationSettings, UChaosVDVisualizationSettingsObjectBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVD"), Z_Construct_UClass_UChaosVDCollisionDataVisualizationSettings_NoRegister) \
	DECLARE_SERIALIZER(UChaosVDCollisionDataVisualizationSettings)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDCollisionVisualizationSettings_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVDCollisionDataVisualizationSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosVDCollisionDataVisualizationSettings(UChaosVDCollisionDataVisualizationSettings&&) = delete; \
	UChaosVDCollisionDataVisualizationSettings(const UChaosVDCollisionDataVisualizationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVDCollisionDataVisualizationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDCollisionDataVisualizationSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosVDCollisionDataVisualizationSettings) \
	NO_API virtual ~UChaosVDCollisionDataVisualizationSettings();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDCollisionVisualizationSettings_h_25_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDCollisionVisualizationSettings_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDCollisionVisualizationSettings_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDCollisionVisualizationSettings_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosVDCollisionDataVisualizationSettings;

// ********** End Class UChaosVDCollisionDataVisualizationSettings *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDCollisionVisualizationSettings_h

// ********** Begin Enum EChaosVDCollisionVisualizationFlags ***************************************
#define FOREACH_ENUM_ECHAOSVDCOLLISIONVISUALIZATIONFLAGS(op) \
	op(EChaosVDCollisionVisualizationFlags::None) \
	op(EChaosVDCollisionVisualizationFlags::ContactPoints) \
	op(EChaosVDCollisionVisualizationFlags::ContactInfo) \
	op(EChaosVDCollisionVisualizationFlags::NetPushOut) \
	op(EChaosVDCollisionVisualizationFlags::NetImpulse) \
	op(EChaosVDCollisionVisualizationFlags::ContactNormal) \
	op(EChaosVDCollisionVisualizationFlags::AccumulatedImpulse) \
	op(EChaosVDCollisionVisualizationFlags::DrawInactiveContacts) \
	op(EChaosVDCollisionVisualizationFlags::DrawDataOnlyForSelectedParticle) \
	op(EChaosVDCollisionVisualizationFlags::EnableDraw) 

enum class EChaosVDCollisionVisualizationFlags : uint32;
template<> struct TIsUEnumClass<EChaosVDCollisionVisualizationFlags> { enum { Value = true }; };
template<> CHAOSVD_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDCollisionVisualizationFlags>();
// ********** End Enum EChaosVDCollisionVisualizationFlags *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
