// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanRealtimeSmoothing.h"

#ifdef METAHUMANCORETECH_MetaHumanRealtimeSmoothing_generated_h
#error "MetaHumanRealtimeSmoothing.generated.h already included, missing '#pragma once' in MetaHumanRealtimeSmoothing.h"
#endif
#define METAHUMANCORETECH_MetaHumanRealtimeSmoothing_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMetaHumanRealtimeSmoothingParam **********************************
struct Z_Construct_UScriptStruct_FMetaHumanRealtimeSmoothingParam_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCoreTechLib_Source_MetaHumanCoreTech_Public_MetaHumanRealtimeSmoothing_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanRealtimeSmoothingParam_Statics; \
	METAHUMANCORETECH_API static class UScriptStruct* StaticStruct();


struct FMetaHumanRealtimeSmoothingParam;
// ********** End ScriptStruct FMetaHumanRealtimeSmoothingParam ************************************

// ********** Begin Class UMetaHumanRealtimeSmoothingParams ****************************************
struct Z_Construct_UClass_UMetaHumanRealtimeSmoothingParams_Statics;
METAHUMANCORETECH_API UClass* Z_Construct_UClass_UMetaHumanRealtimeSmoothingParams_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCoreTechLib_Source_MetaHumanCoreTech_Public_MetaHumanRealtimeSmoothing_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanRealtimeSmoothingParams(); \
	friend struct ::Z_Construct_UClass_UMetaHumanRealtimeSmoothingParams_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCORETECH_API UClass* ::Z_Construct_UClass_UMetaHumanRealtimeSmoothingParams_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanRealtimeSmoothingParams, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanCoreTech"), Z_Construct_UClass_UMetaHumanRealtimeSmoothingParams_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanRealtimeSmoothingParams)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCoreTechLib_Source_MetaHumanCoreTech_Public_MetaHumanRealtimeSmoothing_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METAHUMANCORETECH_API UMetaHumanRealtimeSmoothingParams(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanRealtimeSmoothingParams(UMetaHumanRealtimeSmoothingParams&&) = delete; \
	UMetaHumanRealtimeSmoothingParams(const UMetaHumanRealtimeSmoothingParams&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANCORETECH_API, UMetaHumanRealtimeSmoothingParams); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanRealtimeSmoothingParams); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanRealtimeSmoothingParams) \
	METAHUMANCORETECH_API virtual ~UMetaHumanRealtimeSmoothingParams();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCoreTechLib_Source_MetaHumanCoreTech_Public_MetaHumanRealtimeSmoothing_h_44_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCoreTechLib_Source_MetaHumanCoreTech_Public_MetaHumanRealtimeSmoothing_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCoreTechLib_Source_MetaHumanCoreTech_Public_MetaHumanRealtimeSmoothing_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCoreTechLib_Source_MetaHumanCoreTech_Public_MetaHumanRealtimeSmoothing_h_49_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanRealtimeSmoothingParams;

// ********** End Class UMetaHumanRealtimeSmoothingParams ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCoreTechLib_Source_MetaHumanCoreTech_Public_MetaHumanRealtimeSmoothing_h

// ********** Begin Enum EMetaHumanRealtimeSmoothingParamMethod ************************************
#define FOREACH_ENUM_EMETAHUMANREALTIMESMOOTHINGPARAMMETHOD(op) \
	op(EMetaHumanRealtimeSmoothingParamMethod::RollingAverage) \
	op(EMetaHumanRealtimeSmoothingParamMethod::OneEuro) 

enum class EMetaHumanRealtimeSmoothingParamMethod : uint8;
template<> struct TIsUEnumClass<EMetaHumanRealtimeSmoothingParamMethod> { enum { Value = true }; };
template<> METAHUMANCORETECH_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanRealtimeSmoothingParamMethod>();
// ********** End Enum EMetaHumanRealtimeSmoothingParamMethod **************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
