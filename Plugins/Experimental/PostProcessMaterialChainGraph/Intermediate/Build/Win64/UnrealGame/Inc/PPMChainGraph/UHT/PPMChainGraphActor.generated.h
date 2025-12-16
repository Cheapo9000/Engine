// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PPMChainGraphActor.h"

#ifdef PPMCHAINGRAPH_PPMChainGraphActor_generated_h
#error "PPMChainGraphActor.generated.h already included, missing '#pragma once' in PPMChainGraphActor.h"
#endif
#define PPMCHAINGRAPH_PPMChainGraphActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APPMChainGraphActor ******************************************************
struct Z_Construct_UClass_APPMChainGraphActor_Statics;
PPMCHAINGRAPH_API UClass* Z_Construct_UClass_APPMChainGraphActor_NoRegister();

#define FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraph_Public_PPMChainGraphActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPPMChainGraphActor(); \
	friend struct ::Z_Construct_UClass_APPMChainGraphActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PPMCHAINGRAPH_API UClass* ::Z_Construct_UClass_APPMChainGraphActor_NoRegister(); \
public: \
	DECLARE_CLASS2(APPMChainGraphActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PPMChainGraph"), Z_Construct_UClass_APPMChainGraphActor_NoRegister) \
	DECLARE_SERIALIZER(APPMChainGraphActor)


#define FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraph_Public_PPMChainGraphActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APPMChainGraphActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APPMChainGraphActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APPMChainGraphActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APPMChainGraphActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APPMChainGraphActor(APPMChainGraphActor&&) = delete; \
	APPMChainGraphActor(const APPMChainGraphActor&) = delete; \
	NO_API virtual ~APPMChainGraphActor();


#define FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraph_Public_PPMChainGraphActor_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraph_Public_PPMChainGraphActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraph_Public_PPMChainGraphActor_h_14_INCLASS \
	FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraph_Public_PPMChainGraphActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APPMChainGraphActor;

// ********** End Class APPMChainGraphActor ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraph_Public_PPMChainGraphActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
