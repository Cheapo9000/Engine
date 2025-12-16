// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlackmagicCustomTimeStep.h"

#ifdef BLACKMAGICMEDIA_BlackmagicCustomTimeStep_generated_h
#error "BlackmagicCustomTimeStep.generated.h already included, missing '#pragma once' in BlackmagicCustomTimeStep.h"
#endif
#define BLACKMAGICMEDIA_BlackmagicCustomTimeStep_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlackmagicCustomTimeStep ************************************************
struct Z_Construct_UClass_UBlackmagicCustomTimeStep_Statics;
BLACKMAGICMEDIA_API UClass* Z_Construct_UClass_UBlackmagicCustomTimeStep_NoRegister();

#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicCustomTimeStep_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUBlackmagicCustomTimeStep(); \
	friend struct ::Z_Construct_UClass_UBlackmagicCustomTimeStep_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLACKMAGICMEDIA_API UClass* ::Z_Construct_UClass_UBlackmagicCustomTimeStep_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlackmagicCustomTimeStep, UGenlockedCustomTimeStep, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlackmagicMedia"), Z_Construct_UClass_UBlackmagicCustomTimeStep_NoRegister) \
	DECLARE_SERIALIZER(UBlackmagicCustomTimeStep)


#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicCustomTimeStep_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlackmagicCustomTimeStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackmagicCustomTimeStep) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlackmagicCustomTimeStep); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackmagicCustomTimeStep); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlackmagicCustomTimeStep(UBlackmagicCustomTimeStep&&) = delete; \
	UBlackmagicCustomTimeStep(const UBlackmagicCustomTimeStep&) = delete; \
	NO_API virtual ~UBlackmagicCustomTimeStep();


#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicCustomTimeStep_h_19_PROLOG
#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicCustomTimeStep_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicCustomTimeStep_h_22_INCLASS \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicCustomTimeStep_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlackmagicCustomTimeStep;

// ********** End Class UBlackmagicCustomTimeStep **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicCustomTimeStep_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
