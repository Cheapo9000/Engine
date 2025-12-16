// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosMover/Character/Settings/SharedChaosCharacterMovementSettings.h"

#ifdef CHAOSMOVER_SharedChaosCharacterMovementSettings_generated_h
#error "SharedChaosCharacterMovementSettings.generated.h already included, missing '#pragma once' in SharedChaosCharacterMovementSettings.h"
#endif
#define CHAOSMOVER_SharedChaosCharacterMovementSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USharedChaosCharacterMovementSettings ************************************
struct Z_Construct_UClass_USharedChaosCharacterMovementSettings_Statics;
CHAOSMOVER_API UClass* Z_Construct_UClass_USharedChaosCharacterMovementSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Settings_SharedChaosCharacterMovementSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSharedChaosCharacterMovementSettings(); \
	friend struct ::Z_Construct_UClass_USharedChaosCharacterMovementSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMOVER_API UClass* ::Z_Construct_UClass_USharedChaosCharacterMovementSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USharedChaosCharacterMovementSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosMover"), Z_Construct_UClass_USharedChaosCharacterMovementSettings_NoRegister) \
	DECLARE_SERIALIZER(USharedChaosCharacterMovementSettings) \
	virtual UObject* _getUObject() const override { return const_cast<USharedChaosCharacterMovementSettings*>(this); }


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Settings_SharedChaosCharacterMovementSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSMOVER_API USharedChaosCharacterMovementSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USharedChaosCharacterMovementSettings(USharedChaosCharacterMovementSettings&&) = delete; \
	USharedChaosCharacterMovementSettings(const USharedChaosCharacterMovementSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSMOVER_API, USharedChaosCharacterMovementSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USharedChaosCharacterMovementSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USharedChaosCharacterMovementSettings) \
	CHAOSMOVER_API virtual ~USharedChaosCharacterMovementSettings();


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Settings_SharedChaosCharacterMovementSettings_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Settings_SharedChaosCharacterMovementSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Settings_SharedChaosCharacterMovementSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Settings_SharedChaosCharacterMovementSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USharedChaosCharacterMovementSettings;

// ********** End Class USharedChaosCharacterMovementSettings **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Settings_SharedChaosCharacterMovementSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
