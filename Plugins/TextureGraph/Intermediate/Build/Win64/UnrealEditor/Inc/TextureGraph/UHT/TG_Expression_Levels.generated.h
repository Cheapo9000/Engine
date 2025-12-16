// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Expressions/Filter/TG_Expression_Levels.h"

#ifdef TEXTUREGRAPH_TG_Expression_Levels_generated_h
#error "TG_Expression_Levels.generated.h already included, missing '#pragma once' in TG_Expression_Levels.h"
#endif
#define TEXTUREGRAPH_TG_Expression_Levels_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTG_LevelsSettings ************************************************
struct Z_Construct_UScriptStruct_FTG_LevelsSettings_Statics;
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Levels_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTG_LevelsSettings_Statics; \
	TEXTUREGRAPH_API static class UScriptStruct* StaticStruct();


struct FTG_LevelsSettings;
// ********** End ScriptStruct FTG_LevelsSettings **************************************************

// ********** Begin Class UTG_Expression_Levels ****************************************************
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Levels_h_78_ACCESSORS \
static void SetLowValue_WrapperImpl(void* Object, const void* InValue); \
static void SetMidValue_WrapperImpl(void* Object, const void* InValue); \
static void SetHighValue_WrapperImpl(void* Object, const void* InValue); \
static void SetOutLowValue_WrapperImpl(void* Object, const void* InValue); \
static void SetOutHighValue_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UTG_Expression_Levels_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_Expression_Levels_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Levels_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_Expression_Levels(); \
	friend struct ::Z_Construct_UClass_UTG_Expression_Levels_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_Expression_Levels_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_Expression_Levels, UTG_Expression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_Expression_Levels_NoRegister) \
	DECLARE_SERIALIZER(UTG_Expression_Levels)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Levels_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPH_API UTG_Expression_Levels(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_Expression_Levels(UTG_Expression_Levels&&) = delete; \
	UTG_Expression_Levels(const UTG_Expression_Levels&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_Expression_Levels); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_Expression_Levels); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_Expression_Levels) \
	TEXTUREGRAPH_API virtual ~UTG_Expression_Levels();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Levels_h_75_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Levels_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Levels_h_78_ACCESSORS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Levels_h_78_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Levels_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_Expression_Levels;

// ********** End Class UTG_Expression_Levels ******************************************************

// ********** Begin Class UTG_Expression_HistogramScan *********************************************
struct Z_Construct_UClass_UTG_Expression_HistogramScan_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_Expression_HistogramScan_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Levels_h_151_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_Expression_HistogramScan(); \
	friend struct ::Z_Construct_UClass_UTG_Expression_HistogramScan_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_Expression_HistogramScan_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_Expression_HistogramScan, UTG_Expression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_Expression_HistogramScan_NoRegister) \
	DECLARE_SERIALIZER(UTG_Expression_HistogramScan)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Levels_h_151_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPH_API UTG_Expression_HistogramScan(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_Expression_HistogramScan(UTG_Expression_HistogramScan&&) = delete; \
	UTG_Expression_HistogramScan(const UTG_Expression_HistogramScan&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_Expression_HistogramScan); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_Expression_HistogramScan); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_Expression_HistogramScan) \
	TEXTUREGRAPH_API virtual ~UTG_Expression_HistogramScan();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Levels_h_148_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Levels_h_151_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Levels_h_151_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Levels_h_151_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_Expression_HistogramScan;

// ********** End Class UTG_Expression_HistogramScan ***********************************************

// ********** Begin Class UTG_Expression_HistogramRange ********************************************
struct Z_Construct_UClass_UTG_Expression_HistogramRange_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_Expression_HistogramRange_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Levels_h_186_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_Expression_HistogramRange(); \
	friend struct ::Z_Construct_UClass_UTG_Expression_HistogramRange_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_Expression_HistogramRange_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_Expression_HistogramRange, UTG_Expression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_Expression_HistogramRange_NoRegister) \
	DECLARE_SERIALIZER(UTG_Expression_HistogramRange)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Levels_h_186_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPH_API UTG_Expression_HistogramRange(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_Expression_HistogramRange(UTG_Expression_HistogramRange&&) = delete; \
	UTG_Expression_HistogramRange(const UTG_Expression_HistogramRange&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_Expression_HistogramRange); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_Expression_HistogramRange); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_Expression_HistogramRange) \
	TEXTUREGRAPH_API virtual ~UTG_Expression_HistogramRange();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Levels_h_183_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Levels_h_186_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Levels_h_186_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Levels_h_186_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_Expression_HistogramRange;

// ********** End Class UTG_Expression_HistogramRange **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_Levels_h

// ********** Begin Enum ELevelsExpressionType *****************************************************
#define FOREACH_ENUM_ELEVELSEXPRESSIONTYPE(op) \
	op(ELevelsExpressionType::LowMidHigh) \
	op(ELevelsExpressionType::AutoLowHigh) 

enum class ELevelsExpressionType : uint8;
template<> struct TIsUEnumClass<ELevelsExpressionType> { enum { Value = true }; };
template<> TEXTUREGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<ELevelsExpressionType>();
// ********** End Enum ELevelsExpressionType *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
