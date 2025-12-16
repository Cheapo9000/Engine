// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/RetargetOps/StrideWarpingOp.h"

#ifdef IKRIG_StrideWarpingOp_generated_h
#error "StrideWarpingOp.generated.h already included, missing '#pragma once' in StrideWarpingOp.h"
#endif
#define IKRIG_StrideWarpingOp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIKRetargetStrideWarpingOpSettings;

// ********** Begin ScriptStruct FRetargetStrideWarpChainSettings **********************************
struct Z_Construct_UScriptStruct_FRetargetStrideWarpChainSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StrideWarpingOp_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRetargetStrideWarpChainSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FRetargetStrideWarpChainSettings;
// ********** End ScriptStruct FRetargetStrideWarpChainSettings ************************************

// ********** Begin ScriptStruct FIKRetargetStrideWarpingOpSettings ********************************
struct Z_Construct_UScriptStruct_FIKRetargetStrideWarpingOpSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StrideWarpingOp_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetStrideWarpingOpSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpSettingsBase Super;


struct FIKRetargetStrideWarpingOpSettings;
// ********** End ScriptStruct FIKRetargetStrideWarpingOpSettings **********************************

// ********** Begin ScriptStruct FIKRetargetStrideWarpingOp ****************************************
struct Z_Construct_UScriptStruct_FIKRetargetStrideWarpingOp_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StrideWarpingOp_h_128_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetStrideWarpingOp_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpBase Super;


struct FIKRetargetStrideWarpingOp;
// ********** End ScriptStruct FIKRetargetStrideWarpingOp ******************************************

// ********** Begin Class UIKRetargetStrideWarpingController ***************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StrideWarpingOp_h_190_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings);


struct Z_Construct_UClass_UIKRetargetStrideWarpingController_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRetargetStrideWarpingController_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StrideWarpingOp_h_190_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetStrideWarpingController(); \
	friend struct ::Z_Construct_UClass_UIKRetargetStrideWarpingController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRetargetStrideWarpingController_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargetStrideWarpingController, UIKRetargetOpControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRetargetStrideWarpingController_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargetStrideWarpingController)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StrideWarpingOp_h_190_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRetargetStrideWarpingController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargetStrideWarpingController(UIKRetargetStrideWarpingController&&) = delete; \
	UIKRetargetStrideWarpingController(const UIKRetargetStrideWarpingController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRetargetStrideWarpingController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetStrideWarpingController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetStrideWarpingController) \
	IKRIG_API virtual ~UIKRetargetStrideWarpingController();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StrideWarpingOp_h_187_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StrideWarpingOp_h_190_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StrideWarpingOp_h_190_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StrideWarpingOp_h_190_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StrideWarpingOp_h_190_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargetStrideWarpingController;

// ********** End Class UIKRetargetStrideWarpingController *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StrideWarpingOp_h

// ********** Begin Enum EWarpingDirectionSource ***************************************************
#define FOREACH_ENUM_EWARPINGDIRECTIONSOURCE(op) \
	op(EWarpingDirectionSource::Goals) \
	op(EWarpingDirectionSource::Chain) \
	op(EWarpingDirectionSource::RootBone) 

enum class EWarpingDirectionSource;
template<> struct TIsUEnumClass<EWarpingDirectionSource> { enum { Value = true }; };
template<> IKRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EWarpingDirectionSource>();
// ********** End Enum EWarpingDirectionSource *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
