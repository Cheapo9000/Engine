// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AjaCustomTimeStep.h"

#ifdef AJAMEDIA_AjaCustomTimeStep_generated_h
#error "AjaCustomTimeStep.generated.h already included, missing '#pragma once' in AjaCustomTimeStep.h"
#endif
#define AJAMEDIA_AjaCustomTimeStep_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAjaCustomTimeStep *******************************************************
struct Z_Construct_UClass_UAjaCustomTimeStep_Statics;
AJAMEDIA_API UClass* Z_Construct_UClass_UAjaCustomTimeStep_NoRegister();

#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaCustomTimeStep_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUAjaCustomTimeStep(); \
	friend struct ::Z_Construct_UClass_UAjaCustomTimeStep_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AJAMEDIA_API UClass* ::Z_Construct_UClass_UAjaCustomTimeStep_NoRegister(); \
public: \
	DECLARE_CLASS2(UAjaCustomTimeStep, UGenlockedCustomTimeStep, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AjaMedia"), Z_Construct_UClass_UAjaCustomTimeStep_NoRegister) \
	DECLARE_SERIALIZER(UAjaCustomTimeStep)


#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaCustomTimeStep_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAjaCustomTimeStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAjaCustomTimeStep) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAjaCustomTimeStep); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAjaCustomTimeStep); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAjaCustomTimeStep(UAjaCustomTimeStep&&) = delete; \
	UAjaCustomTimeStep(const UAjaCustomTimeStep&) = delete; \
	NO_API virtual ~UAjaCustomTimeStep();


#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaCustomTimeStep_h_22_PROLOG
#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaCustomTimeStep_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaCustomTimeStep_h_25_INCLASS \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaCustomTimeStep_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAjaCustomTimeStep;

// ********** End Class UAjaCustomTimeStep *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaCustomTimeStep_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
