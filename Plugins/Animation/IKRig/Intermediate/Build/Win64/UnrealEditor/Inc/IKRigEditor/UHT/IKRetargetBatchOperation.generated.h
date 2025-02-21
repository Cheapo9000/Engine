// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RetargetEditor/IKRetargetBatchOperation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIKRetargeter;
class USkeletalMesh;
struct FAssetData;
#ifdef IKRIGEDITOR_IKRetargetBatchOperation_generated_h
#error "IKRetargetBatchOperation.generated.h already included, missing '#pragma once' in IKRetargetBatchOperation.h"
#endif
#define IKRIGEDITOR_IKRetargetBatchOperation_generated_h

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDuplicateAndRetarget);


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_110_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetBatchOperation(); \
	friend struct Z_Construct_UClass_UIKRetargetBatchOperation_Statics; \
public: \
	DECLARE_CLASS(UIKRetargetBatchOperation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRigEditor"), NO_API) \
	DECLARE_SERIALIZER(UIKRetargetBatchOperation)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_110_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIKRetargetBatchOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIKRetargetBatchOperation(UIKRetargetBatchOperation&&); \
	UIKRetargetBatchOperation(const UIKRetargetBatchOperation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRetargetBatchOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetBatchOperation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetBatchOperation) \
	NO_API virtual ~UIKRetargetBatchOperation();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_107_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_110_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_110_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IKRIGEDITOR_API UClass* StaticClass<class UIKRetargetBatchOperation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h


#define FOREACH_ENUM_ERETARGETROOTLOCKMODE(op) \
	op(ERetargetRootLockMode::FromSourceAnimation) \
	op(ERetargetRootLockMode::ForceRootLocked) \
	op(ERetargetRootLockMode::ForceRootUnlocked) 

enum class ERetargetRootLockMode : uint8;
template<> struct TIsUEnumClass<ERetargetRootLockMode> { enum { Value = true }; };
template<> IKRIGEDITOR_API UEnum* StaticEnum<ERetargetRootLockMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
