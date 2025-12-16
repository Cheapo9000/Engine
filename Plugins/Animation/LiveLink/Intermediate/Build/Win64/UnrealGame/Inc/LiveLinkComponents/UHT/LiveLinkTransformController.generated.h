// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/LiveLinkTransformController.h"

#ifdef LIVELINKCOMPONENTS_LiveLinkTransformController_generated_h
#error "LiveLinkTransformController.generated.h already included, missing '#pragma once' in LiveLinkTransformController.h"
#endif
#define LIVELINKCOMPONENTS_LiveLinkTransformController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLiveLinkTransformControllerData **********************************
struct Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics;
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkTransformController_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkTransformControllerData_Statics; \
	LIVELINKCOMPONENTS_API static class UScriptStruct* StaticStruct();


struct FLiveLinkTransformControllerData;
// ********** End ScriptStruct FLiveLinkTransformControllerData ************************************

// ********** Begin Class ULiveLinkTransformController *********************************************
struct Z_Construct_UClass_ULiveLinkTransformController_Statics;
LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkTransformController_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkTransformController_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkTransformController(); \
	friend struct ::Z_Construct_UClass_ULiveLinkTransformController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKCOMPONENTS_API UClass* ::Z_Construct_UClass_ULiveLinkTransformController_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkTransformController, ULiveLinkControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkComponents"), Z_Construct_UClass_ULiveLinkTransformController_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkTransformController)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkTransformController_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINKCOMPONENTS_API ULiveLinkTransformController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkTransformController(ULiveLinkTransformController&&) = delete; \
	ULiveLinkTransformController(const ULiveLinkTransformController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKCOMPONENTS_API, ULiveLinkTransformController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkTransformController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkTransformController) \
	LIVELINKCOMPONENTS_API virtual ~ULiveLinkTransformController();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkTransformController_h_59_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkTransformController_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkTransformController_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkTransformController_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkTransformController;

// ********** End Class ULiveLinkTransformController ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_Controllers_LiveLinkTransformController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
