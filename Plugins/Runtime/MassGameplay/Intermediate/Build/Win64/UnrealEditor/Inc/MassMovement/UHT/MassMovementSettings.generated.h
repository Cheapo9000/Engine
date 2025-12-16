// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassMovementSettings.h"

#ifdef MASSMOVEMENT_MassMovementSettings_generated_h
#error "MassMovementSettings.generated.h already included, missing '#pragma once' in MassMovementSettings.h"
#endif
#define MASSMOVEMENT_MassMovementSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassMovementSettings ****************************************************
struct Z_Construct_UClass_UMassMovementSettings_Statics;
MASSMOVEMENT_API UClass* Z_Construct_UClass_UMassMovementSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_MassMovementSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassMovementSettings(); \
	friend struct ::Z_Construct_UClass_UMassMovementSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSMOVEMENT_API UClass* ::Z_Construct_UClass_UMassMovementSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassMovementSettings, UMassModuleSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassMovement"), Z_Construct_UClass_UMassMovementSettings_NoRegister) \
	DECLARE_SERIALIZER(UMassMovementSettings)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_MassMovementSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassMovementSettings(UMassMovementSettings&&) = delete; \
	UMassMovementSettings(const UMassMovementSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSMOVEMENT_API, UMassMovementSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassMovementSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassMovementSettings) \
	MASSMOVEMENT_API virtual ~UMassMovementSettings();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_MassMovementSettings_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_MassMovementSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_MassMovementSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_MassMovementSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassMovementSettings;

// ********** End Class UMassMovementSettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_MassMovementSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
