// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RetargetEditor/IKRetargetBatchOperation.h"

#ifdef IKRIGEDITOR_IKRetargetBatchOperation_generated_h
#error "IKRetargetBatchOperation.generated.h already included, missing '#pragma once' in IKRetargetBatchOperation.h"
#endif
#define IKRIGEDITOR_IKRetargetBatchOperation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIKRetargeter;
class USkeletalMesh;
struct FAssetData;

// ********** Begin Class UIKRetargetBatchOperation ************************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDuplicateAndRetarget);


struct Z_Construct_UClass_UIKRetargetBatchOperation_Statics;
IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRetargetBatchOperation_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_114_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetBatchOperation(); \
	friend struct ::Z_Construct_UClass_UIKRetargetBatchOperation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIGEDITOR_API UClass* ::Z_Construct_UClass_UIKRetargetBatchOperation_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargetBatchOperation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRigEditor"), Z_Construct_UClass_UIKRetargetBatchOperation_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargetBatchOperation)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_114_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIGEDITOR_API UIKRetargetBatchOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargetBatchOperation(UIKRetargetBatchOperation&&) = delete; \
	UIKRetargetBatchOperation(const UIKRetargetBatchOperation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIGEDITOR_API, UIKRetargetBatchOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetBatchOperation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetBatchOperation) \
	IKRIGEDITOR_API virtual ~UIKRetargetBatchOperation();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_111_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_114_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_114_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargetBatchOperation;

// ********** End Class UIKRetargetBatchOperation **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h

// ********** Begin Enum ERetargetRootLockMode *****************************************************
#define FOREACH_ENUM_ERETARGETROOTLOCKMODE(op) \
	op(ERetargetRootLockMode::FromSourceAnimation) \
	op(ERetargetRootLockMode::ForceRootLocked) \
	op(ERetargetRootLockMode::ForceRootUnlocked) 

enum class ERetargetRootLockMode : uint8;
template<> struct TIsUEnumClass<ERetargetRootLockMode> { enum { Value = true }; };
template<> IKRIGEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ERetargetRootLockMode>();
// ********** End Enum ERetargetRootLockMode *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
