// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkLensController.h"

#ifdef LIVELINKLENS_LiveLinkLensController_generated_h
#error "LiveLinkLensController.generated.h already included, missing '#pragma once' in LiveLinkLensController.h"
#endif
#define LIVELINKLENS_LiveLinkLensController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkLensController **************************************************
struct Z_Construct_UClass_ULiveLinkLensController_Statics;
LIVELINKLENS_API UClass* Z_Construct_UClass_ULiveLinkLensController_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkLensController(); \
	friend struct ::Z_Construct_UClass_ULiveLinkLensController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKLENS_API UClass* ::Z_Construct_UClass_ULiveLinkLensController_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkLensController, ULiveLinkControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkLens"), Z_Construct_UClass_ULiveLinkLensController_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkLensController)


#define FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkLensController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkLensController(ULiveLinkLensController&&) = delete; \
	ULiveLinkLensController(const ULiveLinkLensController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkLensController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkLensController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkLensController) \
	NO_API virtual ~ULiveLinkLensController();


#define FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensController_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensController_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkLensController;

// ********** End Class ULiveLinkLensController ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
