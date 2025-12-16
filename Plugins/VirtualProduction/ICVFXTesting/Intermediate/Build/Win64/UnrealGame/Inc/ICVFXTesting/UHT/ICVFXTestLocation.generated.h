// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ICVFXTestLocation.h"

#ifdef ICVFXTESTING_ICVFXTestLocation_generated_h
#error "ICVFXTestLocation.generated.h already included, missing '#pragma once' in ICVFXTestLocation.h"
#endif
#define ICVFXTESTING_ICVFXTestLocation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AICVFXTestLocation *******************************************************
struct Z_Construct_UClass_AICVFXTestLocation_Statics;
ICVFXTESTING_API UClass* Z_Construct_UClass_AICVFXTestLocation_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestLocation_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAICVFXTestLocation(); \
	friend struct ::Z_Construct_UClass_AICVFXTestLocation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ICVFXTESTING_API UClass* ::Z_Construct_UClass_AICVFXTestLocation_NoRegister(); \
public: \
	DECLARE_CLASS2(AICVFXTestLocation, ACameraActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ICVFXTesting"), Z_Construct_UClass_AICVFXTestLocation_NoRegister) \
	DECLARE_SERIALIZER(AICVFXTestLocation)


#define FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestLocation_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AICVFXTestLocation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AICVFXTestLocation(AICVFXTestLocation&&) = delete; \
	AICVFXTestLocation(const AICVFXTestLocation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AICVFXTestLocation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AICVFXTestLocation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AICVFXTestLocation) \
	NO_API virtual ~AICVFXTestLocation();


#define FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestLocation_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestLocation_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestLocation_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestLocation_h_16_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AICVFXTestLocation;

// ********** End Class AICVFXTestLocation *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestLocation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
