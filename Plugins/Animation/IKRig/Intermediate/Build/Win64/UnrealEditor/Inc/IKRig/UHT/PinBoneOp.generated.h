// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/RetargetOps/PinBoneOp.h"

#ifdef IKRIG_PinBoneOp_generated_h
#error "PinBoneOp.generated.h already included, missing '#pragma once' in PinBoneOp.h"
#endif
#define IKRIG_PinBoneOp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIKRetargetPinBoneOpSettings;

// ********** Begin ScriptStruct FPinBoneData ******************************************************
struct Z_Construct_UScriptStruct_FPinBoneData_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPinBoneData_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FPinBoneData;
// ********** End ScriptStruct FPinBoneData ********************************************************

// ********** Begin ScriptStruct FIKRetargetPinBoneOpSettings **************************************
struct Z_Construct_UScriptStruct_FIKRetargetPinBoneOpSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_92_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetPinBoneOpSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpSettingsBase Super;


struct FIKRetargetPinBoneOpSettings;
// ********** End ScriptStruct FIKRetargetPinBoneOpSettings ****************************************

// ********** Begin ScriptStruct FIKRetargetPinBoneOp **********************************************
struct Z_Construct_UScriptStruct_FIKRetargetPinBoneOp_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_155_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetPinBoneOp_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpBase Super;


struct FIKRetargetPinBoneOp;
// ********** End ScriptStruct FIKRetargetPinBoneOp ************************************************

// ********** Begin Class UIKRetargetPinBoneController *********************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_198_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllBonePairs); \
	DECLARE_FUNCTION(execSetBonePair); \
	DECLARE_FUNCTION(execClearAllBonePairs); \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings);


struct Z_Construct_UClass_UIKRetargetPinBoneController_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRetargetPinBoneController_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_198_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetPinBoneController(); \
	friend struct ::Z_Construct_UClass_UIKRetargetPinBoneController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRetargetPinBoneController_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargetPinBoneController, UIKRetargetOpControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRetargetPinBoneController_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargetPinBoneController)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_198_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRetargetPinBoneController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargetPinBoneController(UIKRetargetPinBoneController&&) = delete; \
	UIKRetargetPinBoneController(const UIKRetargetPinBoneController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRetargetPinBoneController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetPinBoneController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetPinBoneController) \
	IKRIG_API virtual ~UIKRetargetPinBoneController();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_195_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_198_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_198_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_198_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_198_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargetPinBoneController;

// ********** End Class UIKRetargetPinBoneController ***********************************************

// ********** Begin Class UPinBoneOp ***************************************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_236_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPinBoneOp, IKRIG_API)


struct Z_Construct_UClass_UPinBoneOp_Statics;
IKRIG_API UClass* Z_Construct_UClass_UPinBoneOp_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_236_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPinBoneOp(); \
	friend struct ::Z_Construct_UClass_UPinBoneOp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UPinBoneOp_NoRegister(); \
public: \
	DECLARE_CLASS2(UPinBoneOp, URetargetOpBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UPinBoneOp_NoRegister) \
	DECLARE_SERIALIZER(UPinBoneOp) \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_236_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_236_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UPinBoneOp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPinBoneOp(UPinBoneOp&&) = delete; \
	UPinBoneOp(const UPinBoneOp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UPinBoneOp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPinBoneOp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPinBoneOp) \
	IKRIG_API virtual ~UPinBoneOp();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_233_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_236_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_236_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_236_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPinBoneOp;

// ********** End Class UPinBoneOp *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h

// ********** Begin Enum EPinBoneType **************************************************************
#define FOREACH_ENUM_EPINBONETYPE(op) \
	op(EPinBoneType::FullTransform) \
	op(EPinBoneType::TranslateOnly) \
	op(EPinBoneType::RotateOnly) \
	op(EPinBoneType::ScaleOnly) 

enum class EPinBoneType : uint8;
template<> struct TIsUEnumClass<EPinBoneType> { enum { Value = true }; };
template<> IKRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPinBoneType>();
// ********** End Enum EPinBoneType ****************************************************************

// ********** Begin Enum EPinBoneTranslationMode ***************************************************
#define FOREACH_ENUM_EPINBONETRANSLATIONMODE(op) \
	op(EPinBoneTranslationMode::CopyGlobalPosition) \
	op(EPinBoneTranslationMode::CopyLocalPosition) \
	op(EPinBoneTranslationMode::CopyLocalPositionRelativeOffset) \
	op(EPinBoneTranslationMode::CopyLocalPositionRelativeScaled) \
	op(EPinBoneTranslationMode::CopyGlobalPositionAndMaintainOffset) 

enum class EPinBoneTranslationMode : uint8;
template<> struct TIsUEnumClass<EPinBoneTranslationMode> { enum { Value = true }; };
template<> IKRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPinBoneTranslationMode>();
// ********** End Enum EPinBoneTranslationMode *****************************************************

// ********** Begin Enum EPinBoneRotationMode ******************************************************
#define FOREACH_ENUM_EPINBONEROTATIONMODE(op) \
	op(EPinBoneRotationMode::CopyGlobalRotation) \
	op(EPinBoneRotationMode::MaintainOffsetFromBoneToCopyFrom) 

enum class EPinBoneRotationMode : uint8;
template<> struct TIsUEnumClass<EPinBoneRotationMode> { enum { Value = true }; };
template<> IKRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPinBoneRotationMode>();
// ********** End Enum EPinBoneRotationMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
