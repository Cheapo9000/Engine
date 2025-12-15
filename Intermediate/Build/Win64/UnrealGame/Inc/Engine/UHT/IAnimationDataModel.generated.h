// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimData/IAnimationDataModel.h"

#ifdef ENGINE_IAnimationDataModel_generated_h
#error "IAnimationDataModel.generated.h already included, missing '#pragma once' in IAnimationDataModel.h"
#endif
#define ENGINE_IAnimationDataModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequence;
struct FBoneAnimationTrack;
struct FFrameRate;

// ********** Begin ScriptStruct FBoneAnimationTrack ***********************************************
struct Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBoneAnimationTrack;
// ********** End ScriptStruct FBoneAnimationTrack *************************************************

// ********** Begin ScriptStruct FAnimationCurveData ***********************************************
struct Z_Construct_UScriptStruct_FAnimationCurveData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_89_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimationCurveData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimationCurveData;
// ********** End ScriptStruct FAnimationCurveData *************************************************

// ********** Begin ScriptStruct FAnimatedBoneAttribute ********************************************
struct Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_106_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimatedBoneAttribute;
// ********** End ScriptStruct FAnimatedBoneAttribute **********************************************

// ********** Begin Interface UAnimationDataModel **************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAnimationSequence); \
	DECLARE_FUNCTION(execGetNumberOfFloatCurves); \
	DECLARE_FUNCTION(execGetNumberOfTransformCurves); \
	DECLARE_FUNCTION(execGetBoneTrackNames); \
	DECLARE_FUNCTION(execGetNumBoneTracks); \
	DECLARE_FUNCTION(execIsValidBoneTrackName); \
	DECLARE_FUNCTION(execIsValidBoneTrackIndex); \
	DECLARE_FUNCTION(execGetBoneTrackIndexByName); \
	DECLARE_FUNCTION(execGetBoneTrackIndex); \
	DECLARE_FUNCTION(execGetBoneTrackByName); \
	DECLARE_FUNCTION(execGetBoneTrackByIndex); \
	DECLARE_FUNCTION(execGetBoneAnimationTracks); \
	DECLARE_FUNCTION(execGetFrameRate); \
	DECLARE_FUNCTION(execGetNumberOfKeys); \
	DECLARE_FUNCTION(execGetNumberOfFrames); \
	DECLARE_FUNCTION(execGetPlayLength);


struct Z_Construct_UClass_UAnimationDataModel_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimationDataModel_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimationDataModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationDataModel(UAnimationDataModel&&) = delete; \
	UAnimationDataModel(const UAnimationDataModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimationDataModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationDataModel); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationDataModel) \
	virtual ~UAnimationDataModel() = default;


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAnimationDataModel(); \
	friend struct ::Z_Construct_UClass_UAnimationDataModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimationDataModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationDataModel, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimationDataModel_NoRegister) \
	DECLARE_SERIALIZER(UAnimationDataModel)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAnimationDataModel() {} \
public: \
	typedef UAnimationDataModel UClassType; \
	typedef IAnimationDataModel ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_120_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_129_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationDataModel;

// ********** End Interface UAnimationDataModel ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
