// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FractureSettings.h"

#ifdef FRACTUREEDITOR_FractureSettings_generated_h
#error "FractureSettings.generated.h already included, missing '#pragma once' in FractureSettings.h"
#endif
#define FRACTUREEDITOR_FractureSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFractureSettings ********************************************************
struct Z_Construct_UClass_UFractureSettings_Statics;
FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureSettings_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureSettings(); \
	friend struct ::Z_Construct_UClass_UFractureSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FRACTUREEDITOR_API UClass* ::Z_Construct_UClass_UFractureSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UFractureSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), Z_Construct_UClass_UFractureSettings_NoRegister) \
	DECLARE_SERIALIZER(UFractureSettings)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureSettings_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFractureSettings(UFractureSettings&&) = delete; \
	UFractureSettings(const UFractureSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureSettings) \
	NO_API virtual ~UFractureSettings();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureSettings_h_27_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureSettings_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureSettings_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureSettings_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFractureSettings;

// ********** End Class UFractureSettings **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureSettings_h

// ********** Begin Enum EFractureSelectionDisplayMode *********************************************
#define FOREACH_ENUM_EFRACTURESELECTIONDISPLAYMODE(op) \
	op(EFractureSelectionDisplayMode::Highlight) \
	op(EFractureSelectionDisplayMode::BoundingBox) \
	op(EFractureSelectionDisplayMode::None) 

enum class EFractureSelectionDisplayMode : uint8;
template<> struct TIsUEnumClass<EFractureSelectionDisplayMode> { enum { Value = true }; };
template<> FRACTUREEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EFractureSelectionDisplayMode>();
// ********** End Enum EFractureSelectionDisplayMode ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
