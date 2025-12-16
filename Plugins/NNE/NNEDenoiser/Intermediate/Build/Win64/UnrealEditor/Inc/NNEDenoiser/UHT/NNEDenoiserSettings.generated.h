// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNEDenoiserSettings.h"

#ifdef NNEDENOISER_NNEDenoiserSettings_generated_h
#error "NNEDenoiserSettings.generated.h already included, missing '#pragma once' in NNEDenoiserSettings.h"
#endif
#define NNEDENOISER_NNEDenoiserSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNNEDenoiserSettings *****************************************************
struct Z_Construct_UClass_UNNEDenoiserSettings_Statics;
NNEDENOISER_API UClass* Z_Construct_UClass_UNNEDenoiserSettings_NoRegister();

#define FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserSettings_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNNEDenoiserSettings(); \
	friend struct ::Z_Construct_UClass_UNNEDenoiserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NNEDENOISER_API UClass* ::Z_Construct_UClass_UNNEDenoiserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UNNEDenoiserSettings, UDeveloperSettingsBackedByCVars, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NNEDenoiser"), Z_Construct_UClass_UNNEDenoiserSettings_NoRegister) \
	DECLARE_SERIALIZER(UNNEDenoiserSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserSettings_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNNEDenoiserSettings(UNNEDenoiserSettings&&) = delete; \
	UNNEDenoiserSettings(const UNNEDenoiserSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NNEDENOISER_API, UNNEDenoiserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNNEDenoiserSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNNEDenoiserSettings) \
	NNEDENOISER_API virtual ~UNNEDenoiserSettings();


#define FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserSettings_h_23_PROLOG
#define FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserSettings_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserSettings_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserSettings_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNNEDenoiserSettings;

// ********** End Class UNNEDenoiserSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserSettings_h

// ********** Begin Enum EDenoiserRuntimeType ******************************************************
#define FOREACH_ENUM_EDENOISERRUNTIMETYPE(op) \
	op(CPU) \
	op(GPU) \
	op(RDG) 

enum EDenoiserRuntimeType : uint8;
template<> NNEDENOISER_NON_ATTRIBUTED_API UEnum* StaticEnum<EDenoiserRuntimeType>();
// ********** End Enum EDenoiserRuntimeType ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
