// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassNavigationSubsystem.h"

#ifdef MASSNAVIGATION_MassNavigationSubsystem_generated_h
#error "MassNavigationSubsystem.generated.h already included, missing '#pragma once' in MassNavigationSubsystem.h"
#endif
#define MASSNAVIGATION_MassNavigationSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassNavigationSubsystem *************************************************
struct Z_Construct_UClass_UMassNavigationSubsystem_Statics;
MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassNavigationSubsystem_NoRegister();

#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationSubsystem_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassNavigationSubsystem(); \
	friend struct ::Z_Construct_UClass_UMassNavigationSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSNAVIGATION_API UClass* ::Z_Construct_UClass_UMassNavigationSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassNavigationSubsystem, UMassSubsystemBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassNavigation"), Z_Construct_UClass_UMassNavigationSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMassNavigationSubsystem)


#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationSubsystem_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassNavigationSubsystem(UMassNavigationSubsystem&&) = delete; \
	UMassNavigationSubsystem(const UMassNavigationSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSNAVIGATION_API, UMassNavigationSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassNavigationSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassNavigationSubsystem) \
	MASSNAVIGATION_API virtual ~UMassNavigationSubsystem();


#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationSubsystem_h_35_PROLOG
#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationSubsystem_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationSubsystem_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationSubsystem_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassNavigationSubsystem;

// ********** End Class UMassNavigationSubsystem ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationSubsystem_h

// ********** Begin Enum EMassNavigationObstacleFlags **********************************************
#define FOREACH_ENUM_EMASSNAVIGATIONOBSTACLEFLAGS(op) \
	op(EMassNavigationObstacleFlags::None) \
	op(EMassNavigationObstacleFlags::HasColliderData) 

enum class EMassNavigationObstacleFlags : uint8;
template<> struct TIsUEnumClass<EMassNavigationObstacleFlags> { enum { Value = true }; };
template<> MASSNAVIGATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EMassNavigationObstacleFlags>();
// ********** End Enum EMassNavigationObstacleFlags ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
