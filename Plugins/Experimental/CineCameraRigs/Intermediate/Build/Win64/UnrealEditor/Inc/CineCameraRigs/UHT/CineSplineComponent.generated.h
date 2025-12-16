// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CineSplineComponent.h"

#ifdef CINECAMERARIGS_CineSplineComponent_generated_h
#error "CineSplineComponent.generated.h already included, missing '#pragma once' in CineSplineComponent.h"
#endif
#define CINECAMERARIGS_CineSplineComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCineSplinePointData;

// ********** Begin Delegate FOnSplineEdited_BP ****************************************************
#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_107_DELEGATE \
static CINECAMERARIGS_API void FOnSplineEdited_BP_DelegateWrapper(const FMulticastScriptDelegate& OnSplineEdited_BP);


// ********** End Delegate FOnSplineEdited_BP ******************************************************

// ********** Begin Class UCineSplineComponent *****************************************************
#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPointRotationAtSplineInputKey); \
	DECLARE_FUNCTION(execGetPointRotationAtSplinePoint); \
	DECLARE_FUNCTION(execGetPositionAtInputKey); \
	DECLARE_FUNCTION(execGetInputKeyAtPosition); \
	DECLARE_FUNCTION(execGetSplineDataAtPosition); \
	DECLARE_FUNCTION(execAddSplineDataAtPosition); \
	DECLARE_FUNCTION(execUpdateSplineDataAtIndex); \
	DECLARE_FUNCTION(execFindSplineDataAtPosition); \
	DECLARE_FUNCTION(execSetPointRotationAtSplinePoint); \
	DECLARE_FUNCTION(execSetAbsolutePositionAtSplinePoint); \
	DECLARE_FUNCTION(execSetFocusDistanceAtSplinePoint); \
	DECLARE_FUNCTION(execSetApertureAtSplinePoint); \
	DECLARE_FUNCTION(execSetFocalLengthAtSplinePoint);


struct Z_Construct_UClass_UCineSplineComponent_Statics;
CINECAMERARIGS_API UClass* Z_Construct_UClass_UCineSplineComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCineSplineComponent(); \
	friend struct ::Z_Construct_UClass_UCineSplineComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CINECAMERARIGS_API UClass* ::Z_Construct_UClass_UCineSplineComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCineSplineComponent, USplineComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CineCameraRigs"), Z_Construct_UClass_UCineSplineComponent_NoRegister) \
	DECLARE_SERIALIZER(UCineSplineComponent)


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCineSplineComponent(UCineSplineComponent&&) = delete; \
	UCineSplineComponent(const UCineSplineComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCineSplineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCineSplineComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCineSplineComponent) \
	NO_API virtual ~UCineSplineComponent();


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCineSplineComponent;

// ********** End Class UCineSplineComponent *******************************************************

// ********** Begin ScriptStruct FCineSplineInstanceData *******************************************
struct Z_Construct_UScriptStruct_FCineSplineInstanceData_Statics;
#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_141_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCineSplineInstanceData_Statics; \
	CINECAMERARIGS_API static class UScriptStruct* StaticStruct(); \
	typedef FSplineInstanceData Super;


struct FCineSplineInstanceData;
// ********** End ScriptStruct FCineSplineInstanceData *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
