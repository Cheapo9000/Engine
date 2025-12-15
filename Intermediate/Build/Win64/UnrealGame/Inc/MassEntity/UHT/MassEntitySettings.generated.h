// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassEntitySettings.h"

#ifdef MASSENTITY_MassEntitySettings_generated_h
#error "MassEntitySettings.generated.h already included, missing '#pragma once' in MassEntitySettings.h"
#endif
#define MASSENTITY_MassEntitySettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassEntitySettings ******************************************************
struct Z_Construct_UClass_UMassEntitySettings_Statics;
MASSENTITY_API UClass* Z_Construct_UClass_UMassEntitySettings_NoRegister();

#define FID_Engine_Source_Runtime_MassEntity_Public_MassEntitySettings_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassEntitySettings(); \
	friend struct ::Z_Construct_UClass_UMassEntitySettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSENTITY_API UClass* ::Z_Construct_UClass_UMassEntitySettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassEntitySettings, UMassModuleSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassEntity"), Z_Construct_UClass_UMassEntitySettings_NoRegister) \
	DECLARE_SERIALIZER(UMassEntitySettings)


#define FID_Engine_Source_Runtime_MassEntity_Public_MassEntitySettings_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassEntitySettings(UMassEntitySettings&&) = delete; \
	UMassEntitySettings(const UMassEntitySettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSENTITY_API, UMassEntitySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassEntitySettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassEntitySettings) \
	MASSENTITY_API virtual ~UMassEntitySettings();


#define FID_Engine_Source_Runtime_MassEntity_Public_MassEntitySettings_h_22_PROLOG
#define FID_Engine_Source_Runtime_MassEntity_Public_MassEntitySettings_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MassEntity_Public_MassEntitySettings_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MassEntity_Public_MassEntitySettings_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassEntitySettings;

// ********** End Class UMassEntitySettings ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MassEntity_Public_MassEntitySettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
