// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusSettings.h"

#ifdef OPTIMUSSETTINGS_OptimusSettings_generated_h
#error "OptimusSettings.generated.h already included, missing '#pragma once' in OptimusSettings.h"
#endif
#define OPTIMUSSETTINGS_OptimusSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOptimusSettings *********************************************************
struct Z_Construct_UClass_UOptimusSettings_Statics;
OPTIMUSSETTINGS_API UClass* Z_Construct_UClass_UOptimusSettings_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUOptimusSettings(); \
	friend struct ::Z_Construct_UClass_UOptimusSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSSETTINGS_API UClass* ::Z_Construct_UClass_UOptimusSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/OptimusSettings"), Z_Construct_UClass_UOptimusSettings_NoRegister) \
	DECLARE_SERIALIZER(UOptimusSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("DeformerGraph");} \



#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSSETTINGS_API UOptimusSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSSETTINGS_API, UOptimusSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusSettings(UOptimusSettings&&) = delete; \
	UOptimusSettings(const UOptimusSettings&) = delete; \
	OPTIMUSSETTINGS_API virtual ~UOptimusSettings();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_25_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_28_INCLASS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusSettings;

// ********** End Class UOptimusSettings ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h

// ********** Begin Enum EOptimusDefaultDeformerMode ***********************************************
#define FOREACH_ENUM_EOPTIMUSDEFAULTDEFORMERMODE(op) \
	op(EOptimusDefaultDeformerMode::Never) \
	op(EOptimusDefaultDeformerMode::OptIn) \
	op(EOptimusDefaultDeformerMode::Always) 

enum class EOptimusDefaultDeformerMode : uint8;
template<> struct TIsUEnumClass<EOptimusDefaultDeformerMode> { enum { Value = true }; };
template<> OPTIMUSSETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EOptimusDefaultDeformerMode>();
// ********** End Enum EOptimusDefaultDeformerMode *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
