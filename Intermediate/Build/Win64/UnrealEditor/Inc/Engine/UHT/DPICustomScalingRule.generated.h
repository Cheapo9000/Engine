// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/DPICustomScalingRule.h"

#ifdef ENGINE_DPICustomScalingRule_generated_h
#error "DPICustomScalingRule.generated.h already included, missing '#pragma once' in DPICustomScalingRule.h"
#endif
#define ENGINE_DPICustomScalingRule_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDPICustomScalingRule ****************************************************
struct Z_Construct_UClass_UDPICustomScalingRule_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDPICustomScalingRule_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DPICustomScalingRule_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDPICustomScalingRule(); \
	friend struct ::Z_Construct_UClass_UDPICustomScalingRule_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDPICustomScalingRule_NoRegister(); \
public: \
	DECLARE_CLASS2(UDPICustomScalingRule, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDPICustomScalingRule_NoRegister) \
	DECLARE_SERIALIZER(UDPICustomScalingRule)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DPICustomScalingRule_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDPICustomScalingRule(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDPICustomScalingRule(UDPICustomScalingRule&&) = delete; \
	UDPICustomScalingRule(const UDPICustomScalingRule&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDPICustomScalingRule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDPICustomScalingRule); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDPICustomScalingRule) \
	ENGINE_API virtual ~UDPICustomScalingRule();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DPICustomScalingRule_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DPICustomScalingRule_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DPICustomScalingRule_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DPICustomScalingRule_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDPICustomScalingRule;

// ********** End Class UDPICustomScalingRule ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_DPICustomScalingRule_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
