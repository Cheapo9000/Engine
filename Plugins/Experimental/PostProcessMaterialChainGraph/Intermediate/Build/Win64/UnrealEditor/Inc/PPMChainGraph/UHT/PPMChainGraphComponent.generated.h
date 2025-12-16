// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PPMChainGraphComponent.h"

#ifdef PPMCHAINGRAPH_PPMChainGraphComponent_generated_h
#error "PPMChainGraphComponent.generated.h already included, missing '#pragma once' in PPMChainGraphComponent.h"
#endif
#define PPMCHAINGRAPH_PPMChainGraphComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPPMChainGraphExecutorComponent ******************************************
struct Z_Construct_UClass_UPPMChainGraphExecutorComponent_Statics;
PPMCHAINGRAPH_API UClass* Z_Construct_UClass_UPPMChainGraphExecutorComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraph_Public_PPMChainGraphComponent_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUPPMChainGraphExecutorComponent(); \
	friend struct ::Z_Construct_UClass_UPPMChainGraphExecutorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PPMCHAINGRAPH_API UClass* ::Z_Construct_UClass_UPPMChainGraphExecutorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPPMChainGraphExecutorComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PPMChainGraph"), Z_Construct_UClass_UPPMChainGraphExecutorComponent_NoRegister) \
	DECLARE_SERIALIZER(UPPMChainGraphExecutorComponent)


#define FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraph_Public_PPMChainGraphComponent_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPPMChainGraphExecutorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPPMChainGraphExecutorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPPMChainGraphExecutorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPPMChainGraphExecutorComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPPMChainGraphExecutorComponent(UPPMChainGraphExecutorComponent&&) = delete; \
	UPPMChainGraphExecutorComponent(const UPPMChainGraphExecutorComponent&) = delete; \
	NO_API virtual ~UPPMChainGraphExecutorComponent();


#define FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraph_Public_PPMChainGraphComponent_h_31_PROLOG
#define FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraph_Public_PPMChainGraphComponent_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraph_Public_PPMChainGraphComponent_h_34_INCLASS \
	FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraph_Public_PPMChainGraphComponent_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPPMChainGraphExecutorComponent;

// ********** End Class UPPMChainGraphExecutorComponent ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PostProcessMaterialChainGraph_Source_PostProcessMaterialChainGraph_Public_PPMChainGraphComponent_h

// ********** Begin Enum ECameraViewHandling *******************************************************
#define FOREACH_ENUM_ECAMERAVIEWHANDLING(op) \
	op(ECameraViewHandling::IgnoreCameraViews) \
	op(ECameraViewHandling::RenderOnlyInSelectedCameraViews) 

enum class ECameraViewHandling : uint8;
template<> struct TIsUEnumClass<ECameraViewHandling> { enum { Value = true }; };
template<> PPMCHAINGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<ECameraViewHandling>();
// ********** End Enum ECameraViewHandling *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
