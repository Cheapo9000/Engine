// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanConfig.h"

#ifdef METAHUMANCONFIG_MetaHumanConfig_generated_h
#error "MetaHumanConfig.generated.h already included, missing '#pragma once' in MetaHumanConfig.h"
#endif
#define METAHUMANCONFIG_MetaHumanConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMetaHumanConfig *********************************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanConfig_Public_MetaHumanConfig_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReadFromDirectory);


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanConfig_Public_MetaHumanConfig_h_45_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMetaHumanConfig, METAHUMANCONFIG_API)


struct Z_Construct_UClass_UMetaHumanConfig_Statics;
METAHUMANCONFIG_API UClass* Z_Construct_UClass_UMetaHumanConfig_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanConfig_Public_MetaHumanConfig_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanConfig(); \
	friend struct ::Z_Construct_UClass_UMetaHumanConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCONFIG_API UClass* ::Z_Construct_UClass_UMetaHumanConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanConfig, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanConfig"), Z_Construct_UClass_UMetaHumanConfig_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanConfig) \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanConfig_Public_MetaHumanConfig_h_45_ARCHIVESERIALIZER


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanConfig_Public_MetaHumanConfig_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METAHUMANCONFIG_API UMetaHumanConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanConfig(UMetaHumanConfig&&) = delete; \
	UMetaHumanConfig(const UMetaHumanConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANCONFIG_API, UMetaHumanConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanConfig) \
	METAHUMANCONFIG_API virtual ~UMetaHumanConfig();


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanConfig_Public_MetaHumanConfig_h_42_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanConfig_Public_MetaHumanConfig_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanConfig_Public_MetaHumanConfig_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanConfig_Public_MetaHumanConfig_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanConfig_Public_MetaHumanConfig_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanConfig;

// ********** End Class UMetaHumanConfig ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanConfig_Public_MetaHumanConfig_h

// ********** Begin Enum EMetaHumanConfigType ******************************************************
#define FOREACH_ENUM_EMETAHUMANCONFIGTYPE(op) \
	op(EMetaHumanConfigType::Unspecified) \
	op(EMetaHumanConfigType::Solver) \
	op(EMetaHumanConfigType::Fitting) \
	op(EMetaHumanConfigType::PredictiveSolver) 

enum class EMetaHumanConfigType : uint8;
template<> struct TIsUEnumClass<EMetaHumanConfigType> { enum { Value = true }; };
template<> METAHUMANCONFIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanConfigType>();
// ********** End Enum EMetaHumanConfigType ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
