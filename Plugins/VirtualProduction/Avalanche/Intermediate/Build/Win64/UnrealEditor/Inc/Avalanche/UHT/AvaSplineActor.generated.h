// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/AvaSplineActor.h"

#ifdef AVALANCHE_AvaSplineActor_generated_h
#error "AvaSplineActor.generated.h already included, missing '#pragma once' in AvaSplineActor.h"
#endif
#define AVALANCHE_AvaSplineActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAvaSplineActor **********************************************************
struct Z_Construct_UClass_AAvaSplineActor_Statics;
AVALANCHE_API UClass* Z_Construct_UClass_AAvaSplineActor_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Internal_Framework_AvaSplineActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAvaSplineActor(); \
	friend struct ::Z_Construct_UClass_AAvaSplineActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHE_API UClass* ::Z_Construct_UClass_AAvaSplineActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AAvaSplineActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Avalanche"), Z_Construct_UClass_AAvaSplineActor_NoRegister) \
	DECLARE_SERIALIZER(AAvaSplineActor)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Internal_Framework_AvaSplineActor_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAvaSplineActor(AAvaSplineActor&&) = delete; \
	AAvaSplineActor(const AAvaSplineActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHE_API, AAvaSplineActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAvaSplineActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAvaSplineActor) \
	AVALANCHE_API virtual ~AAvaSplineActor();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Internal_Framework_AvaSplineActor_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Internal_Framework_AvaSplineActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Internal_Framework_AvaSplineActor_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Internal_Framework_AvaSplineActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAvaSplineActor;

// ********** End Class AAvaSplineActor ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Internal_Framework_AvaSplineActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
