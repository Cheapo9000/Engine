// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmoothOrientation/MassSmoothOrientationProcessors.h"

#ifdef MASSNAVIGATION_MassSmoothOrientationProcessors_generated_h
#error "MassSmoothOrientationProcessors.generated.h already included, missing '#pragma once' in MassSmoothOrientationProcessors.h"
#endif
#define MASSNAVIGATION_MassSmoothOrientationProcessors_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassSmoothOrientationProcessor ******************************************
struct Z_Construct_UClass_UMassSmoothOrientationProcessor_Statics;
MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassSmoothOrientationProcessor_NoRegister();

#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_SmoothOrientation_MassSmoothOrientationProcessors_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassSmoothOrientationProcessor(); \
	friend struct ::Z_Construct_UClass_UMassSmoothOrientationProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSNAVIGATION_API UClass* ::Z_Construct_UClass_UMassSmoothOrientationProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassSmoothOrientationProcessor, UMassProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassNavigation"), Z_Construct_UClass_UMassSmoothOrientationProcessor_NoRegister) \
	DECLARE_SERIALIZER(UMassSmoothOrientationProcessor)


#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_SmoothOrientation_MassSmoothOrientationProcessors_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassSmoothOrientationProcessor(UMassSmoothOrientationProcessor&&) = delete; \
	UMassSmoothOrientationProcessor(const UMassSmoothOrientationProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSNAVIGATION_API, UMassSmoothOrientationProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSmoothOrientationProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassSmoothOrientationProcessor) \
	MASSNAVIGATION_API virtual ~UMassSmoothOrientationProcessor();


#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_SmoothOrientation_MassSmoothOrientationProcessors_h_14_PROLOG
#define FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_SmoothOrientation_MassSmoothOrientationProcessors_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_SmoothOrientation_MassSmoothOrientationProcessors_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_SmoothOrientation_MassSmoothOrientationProcessors_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassSmoothOrientationProcessor;

// ********** End Class UMassSmoothOrientationProcessor ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_SmoothOrientation_MassSmoothOrientationProcessors_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
