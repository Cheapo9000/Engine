// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RivermaxCustomTimeStep.h"

#ifdef RIVERMAXMEDIA_RivermaxCustomTimeStep_generated_h
#error "RivermaxCustomTimeStep.generated.h already included, missing '#pragma once' in RivermaxCustomTimeStep.h"
#endif
#define RIVERMAXMEDIA_RivermaxCustomTimeStep_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URivermaxCustomTimeStep **************************************************
struct Z_Construct_UClass_URivermaxCustomTimeStep_Statics;
RIVERMAXMEDIA_API UClass* Z_Construct_UClass_URivermaxCustomTimeStep_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxCustomTimeStep_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURivermaxCustomTimeStep(); \
	friend struct ::Z_Construct_UClass_URivermaxCustomTimeStep_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIVERMAXMEDIA_API UClass* ::Z_Construct_UClass_URivermaxCustomTimeStep_NoRegister(); \
public: \
	DECLARE_CLASS2(URivermaxCustomTimeStep, UGenlockedCustomTimeStep, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RivermaxMedia"), Z_Construct_UClass_URivermaxCustomTimeStep_NoRegister) \
	DECLARE_SERIALIZER(URivermaxCustomTimeStep)


#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxCustomTimeStep_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URivermaxCustomTimeStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URivermaxCustomTimeStep(URivermaxCustomTimeStep&&) = delete; \
	URivermaxCustomTimeStep(const URivermaxCustomTimeStep&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URivermaxCustomTimeStep); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URivermaxCustomTimeStep); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URivermaxCustomTimeStep) \
	NO_API virtual ~URivermaxCustomTimeStep();


#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxCustomTimeStep_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxCustomTimeStep_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxCustomTimeStep_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxCustomTimeStep_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URivermaxCustomTimeStep;

// ********** End Class URivermaxCustomTimeStep ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxCustomTimeStep_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
