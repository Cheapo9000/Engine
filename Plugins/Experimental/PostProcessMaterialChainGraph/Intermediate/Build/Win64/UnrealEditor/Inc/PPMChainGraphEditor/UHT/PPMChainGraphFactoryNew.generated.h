// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/PPMChainGraphFactoryNew.h"

#ifdef PPMCHAINGRAPHEDITOR_PPMChainGraphFactoryNew_generated_h
#error "PPMChainGraphFactoryNew.generated.h already included, missing '#pragma once' in PPMChainGraphFactoryNew.h"
#endif
#define PPMCHAINGRAPHEDITOR_PPMChainGraphFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPPMChainGraphFactoryNew *************************************************
struct Z_Construct_UClass_UPPMChainGraphFactoryNew_Statics;
PPMCHAINGRAPHEDITOR_API UClass* Z_Construct_UClass_UPPMChainGraphFactoryNew_NoRegister();

#define FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraphEditor_Private_Factories_PPMChainGraphFactoryNew_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPPMChainGraphFactoryNew(); \
	friend struct ::Z_Construct_UClass_UPPMChainGraphFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PPMCHAINGRAPHEDITOR_API UClass* ::Z_Construct_UClass_UPPMChainGraphFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UPPMChainGraphFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PPMChainGraphEditor"), Z_Construct_UClass_UPPMChainGraphFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UPPMChainGraphFactoryNew)


#define FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraphEditor_Private_Factories_PPMChainGraphFactoryNew_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPPMChainGraphFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPPMChainGraphFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPPMChainGraphFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPPMChainGraphFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPPMChainGraphFactoryNew(UPPMChainGraphFactoryNew&&) = delete; \
	UPPMChainGraphFactoryNew(const UPPMChainGraphFactoryNew&) = delete; \
	NO_API virtual ~UPPMChainGraphFactoryNew();


#define FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraphEditor_Private_Factories_PPMChainGraphFactoryNew_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraphEditor_Private_Factories_PPMChainGraphFactoryNew_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraphEditor_Private_Factories_PPMChainGraphFactoryNew_h_13_INCLASS \
	FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraphEditor_Private_Factories_PPMChainGraphFactoryNew_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPPMChainGraphFactoryNew;

// ********** End Class UPPMChainGraphFactoryNew ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraphEditor_Private_Factories_PPMChainGraphFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
