// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/ParameterSourcesVec2.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_ParameterSourcesVec2_generated_h
#error "ParameterSourcesVec2.generated.h already included, missing '#pragma once' in ParameterSourcesVec2.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_ParameterSourcesVec2_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGizmoVec2ParameterChange *****************************************
struct Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics;
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics; \
	INTERACTIVETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FGizmoVec2ParameterChange;
// ********** End ScriptStruct FGizmoVec2ParameterChange *******************************************

// ********** Begin Class UGizmoBaseVec2ParameterSource ********************************************
struct Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseVec2ParameterSource_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoBaseVec2ParameterSource(); \
	friend struct ::Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoBaseVec2ParameterSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoBaseVec2ParameterSource, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoBaseVec2ParameterSource_NoRegister) \
	DECLARE_SERIALIZER(UGizmoBaseVec2ParameterSource) \
	virtual UObject* _getUObject() const override { return const_cast<UGizmoBaseVec2ParameterSource*>(this); }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoBaseVec2ParameterSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoBaseVec2ParameterSource(UGizmoBaseVec2ParameterSource&&) = delete; \
	UGizmoBaseVec2ParameterSource(const UGizmoBaseVec2ParameterSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoBaseVec2ParameterSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoBaseVec2ParameterSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoBaseVec2ParameterSource) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoBaseVec2ParameterSource();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_47_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoBaseVec2ParameterSource;

// ********** End Class UGizmoBaseVec2ParameterSource **********************************************

// ********** Begin Class UGizmoLocalVec2ParameterSource *******************************************
struct Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLocalVec2ParameterSource_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoLocalVec2ParameterSource(); \
	friend struct ::Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoLocalVec2ParameterSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoLocalVec2ParameterSource, UGizmoBaseVec2ParameterSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoLocalVec2ParameterSource_NoRegister) \
	DECLARE_SERIALIZER(UGizmoLocalVec2ParameterSource)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoLocalVec2ParameterSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoLocalVec2ParameterSource(UGizmoLocalVec2ParameterSource&&) = delete; \
	UGizmoLocalVec2ParameterSource(const UGizmoLocalVec2ParameterSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoLocalVec2ParameterSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoLocalVec2ParameterSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoLocalVec2ParameterSource) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoLocalVec2ParameterSource();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_85_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoLocalVec2ParameterSource;

// ********** End Class UGizmoLocalVec2ParameterSource *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
