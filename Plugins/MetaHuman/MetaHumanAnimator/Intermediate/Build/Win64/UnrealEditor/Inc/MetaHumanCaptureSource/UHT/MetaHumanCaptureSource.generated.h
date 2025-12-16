// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanCaptureSource.h"

#ifdef METAHUMANCAPTURESOURCE_MetaHumanCaptureSource_generated_h
#error "MetaHumanCaptureSource.generated.h already included, missing '#pragma once' in MetaHumanCaptureSource.h"
#endif
#define METAHUMANCAPTURESOURCE_MetaHumanCaptureSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMetaHumanCaptureVoidResult ***************************************
struct Z_Construct_UScriptStruct_FMetaHumanCaptureVoidResult_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCaptureSource_Public_MetaHumanCaptureSource_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCaptureVoidResult_Statics; \
	METAHUMANCAPTURESOURCE_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCaptureVoidResult;
// ********** End ScriptStruct FMetaHumanCaptureVoidResult *****************************************

// ********** Begin ScriptStruct FMetaHumanCapturePerTakeVoidResult ********************************
struct Z_Construct_UScriptStruct_FMetaHumanCapturePerTakeVoidResult_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCaptureSource_Public_MetaHumanCaptureSource_h_73_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCapturePerTakeVoidResult_Statics; \
	METAHUMANCAPTURESOURCE_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCapturePerTakeVoidResult;
// ********** End ScriptStruct FMetaHumanCapturePerTakeVoidResult **********************************

// ********** Begin Class UMetaHumanCaptureSource **************************************************
struct Z_Construct_UClass_UMetaHumanCaptureSource_Statics;
METAHUMANCAPTURESOURCE_API UClass* Z_Construct_UClass_UMetaHumanCaptureSource_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCaptureSource_Public_MetaHumanCaptureSource_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCaptureSource(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCaptureSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCAPTURESOURCE_API UClass* ::Z_Construct_UClass_UMetaHumanCaptureSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCaptureSource, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanCaptureSource"), Z_Construct_UClass_UMetaHumanCaptureSource_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCaptureSource)


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCaptureSource_Public_MetaHumanCaptureSource_h_99_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METAHUMANCAPTURESOURCE_API UMetaHumanCaptureSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCaptureSource(UMetaHumanCaptureSource&&) = delete; \
	UMetaHumanCaptureSource(const UMetaHumanCaptureSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANCAPTURESOURCE_API, UMetaHumanCaptureSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCaptureSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanCaptureSource) \
	METAHUMANCAPTURESOURCE_API virtual ~UMetaHumanCaptureSource();


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCaptureSource_Public_MetaHumanCaptureSource_h_95_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCaptureSource_Public_MetaHumanCaptureSource_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCaptureSource_Public_MetaHumanCaptureSource_h_99_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCaptureSource_Public_MetaHumanCaptureSource_h_99_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCaptureSource;

// ********** End Class UMetaHumanCaptureSource ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCaptureSource_Public_MetaHumanCaptureSource_h

// ********** Begin Enum EMetaHumanCaptureSourceType ***********************************************
#define FOREACH_ENUM_EMETAHUMANCAPTURESOURCETYPE(op) \
	op(EMetaHumanCaptureSourceType::Undefined) \
	op(EMetaHumanCaptureSourceType::LiveLinkFaceConnection) \
	op(EMetaHumanCaptureSourceType::LiveLinkFaceArchives) \
	op(EMetaHumanCaptureSourceType::HMCArchives) 

enum class EMetaHumanCaptureSourceType : uint8;
template<> struct TIsUEnumClass<EMetaHumanCaptureSourceType> { enum { Value = true }; };
template<> METAHUMANCAPTURESOURCE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCaptureSourceType>();
// ********** End Enum EMetaHumanCaptureSourceType *************************************************

// ********** Begin Enum EMetaHumanCaptureDepthPrecisionType ***************************************
#define FOREACH_ENUM_EMETAHUMANCAPTUREDEPTHPRECISIONTYPE(op) \
	op(EMetaHumanCaptureDepthPrecisionType::Eightieth) \
	op(EMetaHumanCaptureDepthPrecisionType::Full) 

enum class EMetaHumanCaptureDepthPrecisionType : uint8;
template<> struct TIsUEnumClass<EMetaHumanCaptureDepthPrecisionType> { enum { Value = true }; };
template<> METAHUMANCAPTURESOURCE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCaptureDepthPrecisionType>();
// ********** End Enum EMetaHumanCaptureDepthPrecisionType *****************************************

// ********** Begin Enum EMetaHumanCaptureDepthResolutionType **************************************
#define FOREACH_ENUM_EMETAHUMANCAPTUREDEPTHRESOLUTIONTYPE(op) \
	op(EMetaHumanCaptureDepthResolutionType::Full) \
	op(EMetaHumanCaptureDepthResolutionType::Half) \
	op(EMetaHumanCaptureDepthResolutionType::Quarter) 

enum class EMetaHumanCaptureDepthResolutionType : uint8;
template<> struct TIsUEnumClass<EMetaHumanCaptureDepthResolutionType> { enum { Value = true }; };
template<> METAHUMANCAPTURESOURCE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCaptureDepthResolutionType>();
// ********** End Enum EMetaHumanCaptureDepthResolutionType ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
