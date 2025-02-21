// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassNavigationSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSNAVIGATION_MassNavigationSubsystem_generated_h
#error "MassNavigationSubsystem.generated.h already included, missing '#pragma once' in MassNavigationSubsystem.h"
#endif
#define MASSNAVIGATION_MassNavigationSubsystem_generated_h

#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationSubsystem_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassNavigationSubsystem(); \
	friend struct Z_Construct_UClass_UMassNavigationSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMassNavigationSubsystem, UMassSubsystemBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassNavigation"), NO_API) \
	DECLARE_SERIALIZER(UMassNavigationSubsystem)


#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationSubsystem_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMassNavigationSubsystem(UMassNavigationSubsystem&&); \
	UMassNavigationSubsystem(const UMassNavigationSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassNavigationSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassNavigationSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassNavigationSubsystem) \
	NO_API virtual ~UMassNavigationSubsystem();


#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationSubsystem_h_31_PROLOG
#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationSubsystem_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationSubsystem_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationSubsystem_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSNAVIGATION_API UClass* StaticClass<class UMassNavigationSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationSubsystem_h


#define FOREACH_ENUM_EMASSNAVIGATIONOBSTACLEFLAGS(op) \
	op(EMassNavigationObstacleFlags::None) \
	op(EMassNavigationObstacleFlags::HasColliderData) 

enum class EMassNavigationObstacleFlags : uint8;
template<> struct TIsUEnumClass<EMassNavigationObstacleFlags> { enum { Value = true }; };
template<> MASSNAVIGATION_API UEnum* StaticEnum<EMassNavigationObstacleFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
