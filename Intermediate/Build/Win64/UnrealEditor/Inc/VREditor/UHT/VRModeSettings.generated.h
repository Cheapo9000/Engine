// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VRModeSettings.h"

#ifdef VREDITOR_VRModeSettings_generated_h
#error "VRModeSettings.generated.h already included, missing '#pragma once' in VRModeSettings.h"
#endif
#define VREDITOR_VRModeSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVRModeSettings **********************************************************
struct Z_Construct_UClass_UVRModeSettings_Statics;
VREDITOR_API UClass* Z_Construct_UClass_UVRModeSettings_NoRegister();

#define FID_Engine_Source_Editor_VREditor_Public_VRModeSettings_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRModeSettings(); \
	friend struct ::Z_Construct_UClass_UVRModeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VREDITOR_API UClass* ::Z_Construct_UClass_UVRModeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UVRModeSettings, UVISettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VREditor"), Z_Construct_UClass_UVRModeSettings_NoRegister) \
	DECLARE_SERIALIZER(UVRModeSettings)


#define FID_Engine_Source_Editor_VREditor_Public_VRModeSettings_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVRModeSettings(UVRModeSettings&&) = delete; \
	UVRModeSettings(const UVRModeSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VREDITOR_API, UVRModeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRModeSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVRModeSettings) \
	VREDITOR_API virtual ~UVRModeSettings();


#define FID_Engine_Source_Editor_VREditor_Public_VRModeSettings_h_33_PROLOG
#define FID_Engine_Source_Editor_VREditor_Public_VRModeSettings_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Public_VRModeSettings_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Public_VRModeSettings_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVRModeSettings;

// ********** End Class UVRModeSettings ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VREditor_Public_VRModeSettings_h

// ********** Begin Enum EInteractorHand ***********************************************************
#define FOREACH_ENUM_EINTERACTORHAND(op) \
	op(EInteractorHand::Right) \
	op(EInteractorHand::Left) 

enum class EInteractorHand : uint8;
template<> struct TIsUEnumClass<EInteractorHand> { enum { Value = true }; };
template<> VREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EInteractorHand>();
// ********** End Enum EInteractorHand *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
