// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FloatDistanceColumn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHOOSER_FloatDistanceColumn_generated_h
#error "FloatDistanceColumn.generated.h already included, missing '#pragma once' in FloatDistanceColumn.h"
#endif
#define CHOOSER_FloatDistanceColumn_generated_h

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_FloatDistanceColumn_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChooserFloatDistanceRowData_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct();


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FChooserFloatDistanceRowData>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_FloatDistanceColumn_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFloatAutoPopulator(); \
	friend struct Z_Construct_UClass_UFloatAutoPopulator_Statics; \
public: \
	DECLARE_CLASS(UFloatAutoPopulator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Chooser"), NO_API) \
	DECLARE_SERIALIZER(UFloatAutoPopulator)


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_FloatDistanceColumn_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFloatAutoPopulator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFloatAutoPopulator(UFloatAutoPopulator&&); \
	UFloatAutoPopulator(const UFloatAutoPopulator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFloatAutoPopulator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFloatAutoPopulator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFloatAutoPopulator) \
	NO_API virtual ~UFloatAutoPopulator();


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_FloatDistanceColumn_h_30_PROLOG
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_FloatDistanceColumn_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_FloatDistanceColumn_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_FloatDistanceColumn_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOOSER_API UClass* StaticClass<class UFloatAutoPopulator>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_FloatDistanceColumn_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFloatDistanceColumn_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FChooserColumnBase Super;


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FFloatDistanceColumn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_Chooser_Internal_FloatDistanceColumn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
