// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/ParameterSourcesFloat.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_ParameterSourcesFloat_generated_h
#error "ParameterSourcesFloat.generated.h already included, missing '#pragma once' in ParameterSourcesFloat.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_ParameterSourcesFloat_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGizmoFloatParameterChange ****************************************
struct Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics;
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics; \
	INTERACTIVETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FGizmoFloatParameterChange;
// ********** End ScriptStruct FGizmoFloatParameterChange ******************************************

// ********** Begin Class UGizmoBaseFloatParameterSource *******************************************
struct Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseFloatParameterSource_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoBaseFloatParameterSource(); \
	friend struct ::Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoBaseFloatParameterSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoBaseFloatParameterSource, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoBaseFloatParameterSource_NoRegister) \
	DECLARE_SERIALIZER(UGizmoBaseFloatParameterSource) \
	virtual UObject* _getUObject() const override { return const_cast<UGizmoBaseFloatParameterSource*>(this); }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoBaseFloatParameterSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoBaseFloatParameterSource(UGizmoBaseFloatParameterSource&&) = delete; \
	UGizmoBaseFloatParameterSource(const UGizmoBaseFloatParameterSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoBaseFloatParameterSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoBaseFloatParameterSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoBaseFloatParameterSource) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoBaseFloatParameterSource();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_47_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoBaseFloatParameterSource;

// ********** End Class UGizmoBaseFloatParameterSource *********************************************

// ********** Begin Class UGizmoLocalFloatParameterSource ******************************************
struct Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLocalFloatParameterSource_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoLocalFloatParameterSource(); \
	friend struct ::Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoLocalFloatParameterSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoLocalFloatParameterSource, UGizmoBaseFloatParameterSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoLocalFloatParameterSource_NoRegister) \
	DECLARE_SERIALIZER(UGizmoLocalFloatParameterSource)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoLocalFloatParameterSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoLocalFloatParameterSource(UGizmoLocalFloatParameterSource&&) = delete; \
	UGizmoLocalFloatParameterSource(const UGizmoLocalFloatParameterSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoLocalFloatParameterSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoLocalFloatParameterSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoLocalFloatParameterSource) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoLocalFloatParameterSource();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_85_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoLocalFloatParameterSource;

// ********** End Class UGizmoLocalFloatParameterSource ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
