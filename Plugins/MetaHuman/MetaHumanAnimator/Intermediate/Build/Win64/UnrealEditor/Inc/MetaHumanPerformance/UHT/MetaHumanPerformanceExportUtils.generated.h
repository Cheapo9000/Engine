// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanPerformanceExportUtils.h"

#ifdef METAHUMANPERFORMANCE_MetaHumanPerformanceExportUtils_generated_h
#error "MetaHumanPerformanceExportUtils.generated.h already included, missing '#pragma once' in MetaHumanPerformanceExportUtils.h"
#endif
#define METAHUMANPERFORMANCE_MetaHumanPerformanceExportUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequence;
class ULevelSequence;
class UMetaHumanPerformance;
class UMetaHumanPerformanceExportAnimationSettings;
class UMetaHumanPerformanceExportLevelSequenceSettings;
class USkeleton;

// ********** Begin Class UMetaHumanPerformanceExportAnimationSettings *****************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformanceExportUtils_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsTargetSkeletonCompatible); \
	DECLARE_FUNCTION(execGetTargetSkeleton);


struct Z_Construct_UClass_UMetaHumanPerformanceExportAnimationSettings_Statics;
METAHUMANPERFORMANCE_API UClass* Z_Construct_UClass_UMetaHumanPerformanceExportAnimationSettings_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformanceExportUtils_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanPerformanceExportAnimationSettings(); \
	friend struct ::Z_Construct_UClass_UMetaHumanPerformanceExportAnimationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANPERFORMANCE_API UClass* ::Z_Construct_UClass_UMetaHumanPerformanceExportAnimationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanPerformanceExportAnimationSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanPerformance"), Z_Construct_UClass_UMetaHumanPerformanceExportAnimationSettings_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanPerformanceExportAnimationSettings)


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformanceExportUtils_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanPerformanceExportAnimationSettings(UMetaHumanPerformanceExportAnimationSettings&&) = delete; \
	UMetaHumanPerformanceExportAnimationSettings(const UMetaHumanPerformanceExportAnimationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANPERFORMANCE_API, UMetaHumanPerformanceExportAnimationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanPerformanceExportAnimationSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanPerformanceExportAnimationSettings) \
	METAHUMANPERFORMANCE_API virtual ~UMetaHumanPerformanceExportAnimationSettings();


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformanceExportUtils_h_26_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformanceExportUtils_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformanceExportUtils_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformanceExportUtils_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformanceExportUtils_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanPerformanceExportAnimationSettings;

// ********** End Class UMetaHumanPerformanceExportAnimationSettings *******************************

// ********** Begin Class UMetaHumanPerformanceExportLevelSequenceSettings *************************
struct Z_Construct_UClass_UMetaHumanPerformanceExportLevelSequenceSettings_Statics;
METAHUMANPERFORMANCE_API UClass* Z_Construct_UClass_UMetaHumanPerformanceExportLevelSequenceSettings_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformanceExportUtils_h_105_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanPerformanceExportLevelSequenceSettings(); \
	friend struct ::Z_Construct_UClass_UMetaHumanPerformanceExportLevelSequenceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANPERFORMANCE_API UClass* ::Z_Construct_UClass_UMetaHumanPerformanceExportLevelSequenceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanPerformanceExportLevelSequenceSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanPerformance"), Z_Construct_UClass_UMetaHumanPerformanceExportLevelSequenceSettings_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanPerformanceExportLevelSequenceSettings)


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformanceExportUtils_h_105_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanPerformanceExportLevelSequenceSettings(UMetaHumanPerformanceExportLevelSequenceSettings&&) = delete; \
	UMetaHumanPerformanceExportLevelSequenceSettings(const UMetaHumanPerformanceExportLevelSequenceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANPERFORMANCE_API, UMetaHumanPerformanceExportLevelSequenceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanPerformanceExportLevelSequenceSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanPerformanceExportLevelSequenceSettings) \
	METAHUMANPERFORMANCE_API virtual ~UMetaHumanPerformanceExportLevelSequenceSettings();


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformanceExportUtils_h_101_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformanceExportUtils_h_105_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformanceExportUtils_h_105_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformanceExportUtils_h_105_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanPerformanceExportLevelSequenceSettings;

// ********** End Class UMetaHumanPerformanceExportLevelSequenceSettings ***************************

// ********** Begin Class UMetaHumanPerformanceExportUtils *****************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformanceExportUtils_h_220_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExportLevelSequence); \
	DECLARE_FUNCTION(execExportAnimationSequence); \
	DECLARE_FUNCTION(execGetExportLevelSequenceSettings); \
	DECLARE_FUNCTION(execGetExportAnimationSequenceSettings);


struct Z_Construct_UClass_UMetaHumanPerformanceExportUtils_Statics;
METAHUMANPERFORMANCE_API UClass* Z_Construct_UClass_UMetaHumanPerformanceExportUtils_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformanceExportUtils_h_220_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanPerformanceExportUtils(); \
	friend struct ::Z_Construct_UClass_UMetaHumanPerformanceExportUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANPERFORMANCE_API UClass* ::Z_Construct_UClass_UMetaHumanPerformanceExportUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanPerformanceExportUtils, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanPerformance"), Z_Construct_UClass_UMetaHumanPerformanceExportUtils_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanPerformanceExportUtils)


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformanceExportUtils_h_220_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METAHUMANPERFORMANCE_API UMetaHumanPerformanceExportUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanPerformanceExportUtils(UMetaHumanPerformanceExportUtils&&) = delete; \
	UMetaHumanPerformanceExportUtils(const UMetaHumanPerformanceExportUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANPERFORMANCE_API, UMetaHumanPerformanceExportUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanPerformanceExportUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanPerformanceExportUtils) \
	METAHUMANPERFORMANCE_API virtual ~UMetaHumanPerformanceExportUtils();


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformanceExportUtils_h_216_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformanceExportUtils_h_220_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformanceExportUtils_h_220_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformanceExportUtils_h_220_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformanceExportUtils_h_220_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanPerformanceExportUtils;

// ********** End Class UMetaHumanPerformanceExportUtils *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformanceExportUtils_h

// ********** Begin Enum EPerformanceExportRange ***************************************************
#define FOREACH_ENUM_EPERFORMANCEEXPORTRANGE(op) \
	op(EPerformanceExportRange::ProcessingRange) \
	op(EPerformanceExportRange::WholeSequence) 

enum class EPerformanceExportRange : uint8;
template<> struct TIsUEnumClass<EPerformanceExportRange> { enum { Value = true }; };
template<> METAHUMANPERFORMANCE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPerformanceExportRange>();
// ********** End Enum EPerformanceExportRange *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
