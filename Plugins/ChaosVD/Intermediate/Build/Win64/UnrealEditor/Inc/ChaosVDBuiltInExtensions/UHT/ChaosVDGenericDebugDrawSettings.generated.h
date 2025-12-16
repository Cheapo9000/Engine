// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GenericDebugDraw/Settings/ChaosVDGenericDebugDrawSettings.h"

#ifdef CHAOSVDBUILTINEXTENSIONS_ChaosVDGenericDebugDrawSettings_generated_h
#error "ChaosVDGenericDebugDrawSettings.generated.h already included, missing '#pragma once' in ChaosVDGenericDebugDrawSettings.h"
#endif
#define CHAOSVDBUILTINEXTENSIONS_ChaosVDGenericDebugDrawSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosVDGenericDebugDrawSettings *****************************************
struct Z_Construct_UClass_UChaosVDGenericDebugDrawSettings_Statics;
CHAOSVDBUILTINEXTENSIONS_API UClass* Z_Construct_UClass_UChaosVDGenericDebugDrawSettings_NoRegister();

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVDBuiltInExtensions_Private_GenericDebugDraw_Settings_ChaosVDGenericDebugDrawSettings_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVDGenericDebugDrawSettings(); \
	friend struct ::Z_Construct_UClass_UChaosVDGenericDebugDrawSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVDBUILTINEXTENSIONS_API UClass* ::Z_Construct_UClass_UChaosVDGenericDebugDrawSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosVDGenericDebugDrawSettings, UChaosVDVisualizationSettingsObjectBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVDBuiltInExtensions"), Z_Construct_UClass_UChaosVDGenericDebugDrawSettings_NoRegister) \
	DECLARE_SERIALIZER(UChaosVDGenericDebugDrawSettings)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVDBuiltInExtensions_Private_GenericDebugDraw_Settings_ChaosVDGenericDebugDrawSettings_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVDGenericDebugDrawSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosVDGenericDebugDrawSettings(UChaosVDGenericDebugDrawSettings&&) = delete; \
	UChaosVDGenericDebugDrawSettings(const UChaosVDGenericDebugDrawSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVDGenericDebugDrawSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDGenericDebugDrawSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosVDGenericDebugDrawSettings) \
	NO_API virtual ~UChaosVDGenericDebugDrawSettings();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVDBuiltInExtensions_Private_GenericDebugDraw_Settings_ChaosVDGenericDebugDrawSettings_h_21_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVDBuiltInExtensions_Private_GenericDebugDraw_Settings_ChaosVDGenericDebugDrawSettings_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVDBuiltInExtensions_Private_GenericDebugDraw_Settings_ChaosVDGenericDebugDrawSettings_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVDBuiltInExtensions_Private_GenericDebugDraw_Settings_ChaosVDGenericDebugDrawSettings_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosVDGenericDebugDrawSettings;

// ********** End Class UChaosVDGenericDebugDrawSettings *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVDBuiltInExtensions_Private_GenericDebugDraw_Settings_ChaosVDGenericDebugDrawSettings_h

// ********** Begin Enum EChaosVDGenericDebugDrawVisualizationFlags ********************************
#define FOREACH_ENUM_ECHAOSVDGENERICDEBUGDRAWVISUALIZATIONFLAGS(op) \
	op(EChaosVDGenericDebugDrawVisualizationFlags::None) \
	op(EChaosVDGenericDebugDrawVisualizationFlags::EnableDraw) \
	op(EChaosVDGenericDebugDrawVisualizationFlags::DrawBoxes) \
	op(EChaosVDGenericDebugDrawVisualizationFlags::DrawLines) \
	op(EChaosVDGenericDebugDrawVisualizationFlags::DrawSpheres) \
	op(EChaosVDGenericDebugDrawVisualizationFlags::DrawImplicitObjects) 

enum class EChaosVDGenericDebugDrawVisualizationFlags : uint32;
template<> struct TIsUEnumClass<EChaosVDGenericDebugDrawVisualizationFlags> { enum { Value = true }; };
template<> CHAOSVDBUILTINEXTENSIONS_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDGenericDebugDrawVisualizationFlags>();
// ********** End Enum EChaosVDGenericDebugDrawVisualizationFlags **********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
