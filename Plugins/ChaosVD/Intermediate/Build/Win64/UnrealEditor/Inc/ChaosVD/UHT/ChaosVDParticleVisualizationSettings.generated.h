// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/ChaosVDParticleVisualizationSettings.h"

#ifdef CHAOSVD_ChaosVDParticleVisualizationSettings_generated_h
#error "ChaosVDParticleVisualizationSettings.generated.h already included, missing '#pragma once' in ChaosVDParticleVisualizationSettings.h"
#endif
#define CHAOSVD_ChaosVDParticleVisualizationSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChaosDebugDrawColorsByShapeType **********************************
struct Z_Construct_UScriptStruct_FChaosDebugDrawColorsByShapeType_Statics;
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDParticleVisualizationSettings_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosDebugDrawColorsByShapeType_Statics; \
	CHAOSVD_API static class UScriptStruct* StaticStruct();


struct FChaosDebugDrawColorsByShapeType;
// ********** End ScriptStruct FChaosDebugDrawColorsByShapeType ************************************

// ********** Begin ScriptStruct FChaosDebugDrawColorsByClientServer *******************************
struct Z_Construct_UScriptStruct_FChaosDebugDrawColorsByClientServer_Statics;
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDParticleVisualizationSettings_h_86_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosDebugDrawColorsByClientServer_Statics; \
	CHAOSVD_API static class UScriptStruct* StaticStruct();


struct FChaosDebugDrawColorsByClientServer;
// ********** End ScriptStruct FChaosDebugDrawColorsByClientServer *********************************

// ********** Begin ScriptStruct FChaosDebugDrawColorsByState **************************************
struct Z_Construct_UScriptStruct_FChaosDebugDrawColorsByState_Statics;
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDParticleVisualizationSettings_h_117_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosDebugDrawColorsByState_Statics; \
	CHAOSVD_API static class UScriptStruct* StaticStruct();


struct FChaosDebugDrawColorsByState;
// ********** End ScriptStruct FChaosDebugDrawColorsByState ****************************************

// ********** Begin ScriptStruct FChaosParticleDataDebugDrawColors *********************************
struct Z_Construct_UScriptStruct_FChaosParticleDataDebugDrawColors_Statics;
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDParticleVisualizationSettings_h_141_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosParticleDataDebugDrawColors_Statics; \
	CHAOSVD_API static class UScriptStruct* StaticStruct();


struct FChaosParticleDataDebugDrawColors;
// ********** End ScriptStruct FChaosParticleDataDebugDrawColors ***********************************

// ********** Begin Class UChaosVDParticleVisualizationColorSettings *******************************
struct Z_Construct_UClass_UChaosVDParticleVisualizationColorSettings_Statics;
CHAOSVD_API UClass* Z_Construct_UClass_UChaosVDParticleVisualizationColorSettings_NoRegister();

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDParticleVisualizationSettings_h_218_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVDParticleVisualizationColorSettings(); \
	friend struct ::Z_Construct_UClass_UChaosVDParticleVisualizationColorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVD_API UClass* ::Z_Construct_UClass_UChaosVDParticleVisualizationColorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosVDParticleVisualizationColorSettings, UChaosVDVisualizationSettingsObjectBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVD"), Z_Construct_UClass_UChaosVDParticleVisualizationColorSettings_NoRegister) \
	DECLARE_SERIALIZER(UChaosVDParticleVisualizationColorSettings)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDParticleVisualizationSettings_h_218_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVDParticleVisualizationColorSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosVDParticleVisualizationColorSettings(UChaosVDParticleVisualizationColorSettings&&) = delete; \
	UChaosVDParticleVisualizationColorSettings(const UChaosVDParticleVisualizationColorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVDParticleVisualizationColorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDParticleVisualizationColorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosVDParticleVisualizationColorSettings) \
	NO_API virtual ~UChaosVDParticleVisualizationColorSettings();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDParticleVisualizationSettings_h_215_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDParticleVisualizationSettings_h_218_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDParticleVisualizationSettings_h_218_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDParticleVisualizationSettings_h_218_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosVDParticleVisualizationColorSettings;

// ********** End Class UChaosVDParticleVisualizationColorSettings *********************************

// ********** Begin Class UChaosVDParticleVisualizationDebugDrawSettings ***************************
struct Z_Construct_UClass_UChaosVDParticleVisualizationDebugDrawSettings_Statics;
CHAOSVD_API UClass* Z_Construct_UClass_UChaosVDParticleVisualizationDebugDrawSettings_NoRegister();

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDParticleVisualizationSettings_h_237_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVDParticleVisualizationDebugDrawSettings(); \
	friend struct ::Z_Construct_UClass_UChaosVDParticleVisualizationDebugDrawSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVD_API UClass* ::Z_Construct_UClass_UChaosVDParticleVisualizationDebugDrawSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosVDParticleVisualizationDebugDrawSettings, UChaosVDVisualizationSettingsObjectBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVD"), Z_Construct_UClass_UChaosVDParticleVisualizationDebugDrawSettings_NoRegister) \
	DECLARE_SERIALIZER(UChaosVDParticleVisualizationDebugDrawSettings)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDParticleVisualizationSettings_h_237_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVDParticleVisualizationDebugDrawSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosVDParticleVisualizationDebugDrawSettings(UChaosVDParticleVisualizationDebugDrawSettings&&) = delete; \
	UChaosVDParticleVisualizationDebugDrawSettings(const UChaosVDParticleVisualizationDebugDrawSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVDParticleVisualizationDebugDrawSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDParticleVisualizationDebugDrawSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosVDParticleVisualizationDebugDrawSettings) \
	NO_API virtual ~UChaosVDParticleVisualizationDebugDrawSettings();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDParticleVisualizationSettings_h_234_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDParticleVisualizationSettings_h_237_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDParticleVisualizationSettings_h_237_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDParticleVisualizationSettings_h_237_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosVDParticleVisualizationDebugDrawSettings;

// ********** End Class UChaosVDParticleVisualizationDebugDrawSettings *****************************

// ********** Begin Class UChaosVDParticleVisualizationSettings ************************************
struct Z_Construct_UClass_UChaosVDParticleVisualizationSettings_Statics;
CHAOSVD_API UClass* Z_Construct_UClass_UChaosVDParticleVisualizationSettings_NoRegister();

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDParticleVisualizationSettings_h_303_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVDParticleVisualizationSettings(); \
	friend struct ::Z_Construct_UClass_UChaosVDParticleVisualizationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVD_API UClass* ::Z_Construct_UClass_UChaosVDParticleVisualizationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosVDParticleVisualizationSettings, UChaosVDVisualizationSettingsObjectBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVD"), Z_Construct_UClass_UChaosVDParticleVisualizationSettings_NoRegister) \
	DECLARE_SERIALIZER(UChaosVDParticleVisualizationSettings)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDParticleVisualizationSettings_h_303_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVDParticleVisualizationSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosVDParticleVisualizationSettings(UChaosVDParticleVisualizationSettings&&) = delete; \
	UChaosVDParticleVisualizationSettings(const UChaosVDParticleVisualizationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVDParticleVisualizationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDParticleVisualizationSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosVDParticleVisualizationSettings) \
	NO_API virtual ~UChaosVDParticleVisualizationSettings();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDParticleVisualizationSettings_h_300_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDParticleVisualizationSettings_h_303_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDParticleVisualizationSettings_h_303_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDParticleVisualizationSettings_h_303_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosVDParticleVisualizationSettings;

// ********** End Class UChaosVDParticleVisualizationSettings **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Settings_ChaosVDParticleVisualizationSettings_h

// ********** Begin Enum EChaosVDGeometryVisibilityFlags *******************************************
#define FOREACH_ENUM_ECHAOSVDGEOMETRYVISIBILITYFLAGS(op) \
	op(EChaosVDGeometryVisibilityFlags::None) \
	op(EChaosVDGeometryVisibilityFlags::Query) \
	op(EChaosVDGeometryVisibilityFlags::Simulated) \
	op(EChaosVDGeometryVisibilityFlags::Simple) \
	op(EChaosVDGeometryVisibilityFlags::Complex) \
	op(EChaosVDGeometryVisibilityFlags::ShowHeightfields) \
	op(EChaosVDGeometryVisibilityFlags::ShowDisabledParticles) 

enum class EChaosVDGeometryVisibilityFlags : uint8;
template<> struct TIsUEnumClass<EChaosVDGeometryVisibilityFlags> { enum { Value = true }; };
template<> CHAOSVD_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDGeometryVisibilityFlags>();
// ********** End Enum EChaosVDGeometryVisibilityFlags *********************************************

// ********** Begin Enum EChaosVDParticleDataVisualizationFlags ************************************
#define FOREACH_ENUM_ECHAOSVDPARTICLEDATAVISUALIZATIONFLAGS(op) \
	op(EChaosVDParticleDataVisualizationFlags::None) \
	op(EChaosVDParticleDataVisualizationFlags::Velocity) \
	op(EChaosVDParticleDataVisualizationFlags::AngularVelocity) \
	op(EChaosVDParticleDataVisualizationFlags::Acceleration) \
	op(EChaosVDParticleDataVisualizationFlags::AngularAcceleration) \
	op(EChaosVDParticleDataVisualizationFlags::LinearImpulse) \
	op(EChaosVDParticleDataVisualizationFlags::AngularImpulse) \
	op(EChaosVDParticleDataVisualizationFlags::ClusterConnectivityEdge) \
	op(EChaosVDParticleDataVisualizationFlags::CenterOfMass) \
	op(EChaosVDParticleDataVisualizationFlags::DrawDataOnlyForSelectedParticle) \
	op(EChaosVDParticleDataVisualizationFlags::Bounds) \
	op(EChaosVDParticleDataVisualizationFlags::InflatedBounds) \
	op(EChaosVDParticleDataVisualizationFlags::EnableDraw) 

enum class EChaosVDParticleDataVisualizationFlags : uint32;
template<> struct TIsUEnumClass<EChaosVDParticleDataVisualizationFlags> { enum { Value = true }; };
template<> CHAOSVD_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDParticleDataVisualizationFlags>();
// ********** End Enum EChaosVDParticleDataVisualizationFlags **************************************

// ********** Begin Enum EChaosVDParticleDebugColorMode ********************************************
#define FOREACH_ENUM_ECHAOSVDPARTICLEDEBUGCOLORMODE(op) \
	op(EChaosVDParticleDebugColorMode::None) \
	op(EChaosVDParticleDebugColorMode::State) \
	op(EChaosVDParticleDebugColorMode::ShapeType) \
	op(EChaosVDParticleDebugColorMode::ClientServer) 

enum class EChaosVDParticleDebugColorMode;
template<> struct TIsUEnumClass<EChaosVDParticleDebugColorMode> { enum { Value = true }; };
template<> CHAOSVD_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDParticleDebugColorMode>();
// ********** End Enum EChaosVDParticleDebugColorMode **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
