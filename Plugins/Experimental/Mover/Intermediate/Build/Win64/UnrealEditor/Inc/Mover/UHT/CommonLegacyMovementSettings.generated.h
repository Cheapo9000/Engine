// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/Settings/CommonLegacyMovementSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVER_CommonLegacyMovementSettings_generated_h
#error "CommonLegacyMovementSettings.generated.h already included, missing '#pragma once' in CommonLegacyMovementSettings.h"
#endif
#define MOVER_CommonLegacyMovementSettings_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Settings_CommonLegacyMovementSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonLegacyMovementSettings(); \
	friend struct Z_Construct_UClass_UCommonLegacyMovementSettings_Statics; \
public: \
	DECLARE_CLASS(UCommonLegacyMovementSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UCommonLegacyMovementSettings) \
	virtual UObject* _getUObject() const override { return const_cast<UCommonLegacyMovementSettings*>(this); }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Settings_CommonLegacyMovementSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonLegacyMovementSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCommonLegacyMovementSettings(UCommonLegacyMovementSettings&&); \
	UCommonLegacyMovementSettings(const UCommonLegacyMovementSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonLegacyMovementSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonLegacyMovementSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonLegacyMovementSettings) \
	NO_API virtual ~UCommonLegacyMovementSettings();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Settings_CommonLegacyMovementSettings_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Settings_CommonLegacyMovementSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Settings_CommonLegacyMovementSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Settings_CommonLegacyMovementSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UCommonLegacyMovementSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Settings_CommonLegacyMovementSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
