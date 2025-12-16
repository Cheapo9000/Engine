// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNextRigVMAsset.h"

#ifdef UAF_AnimNextRigVMAsset_generated_h
#error "AnimNextRigVMAsset.generated.h already included, missing '#pragma once' in AnimNextRigVMAsset.h"
#endif
#define UAF_AnimNextRigVMAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimNextRigVMAsset ******************************************************
struct Z_Construct_UClass_UAnimNextRigVMAsset_Statics;
UAF_API UClass* Z_Construct_UClass_UAnimNextRigVMAsset_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_AnimNextRigVMAsset_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextRigVMAsset(); \
	friend struct ::Z_Construct_UClass_UAnimNextRigVMAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAF_API UClass* ::Z_Construct_UClass_UAnimNextRigVMAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimNextRigVMAsset, URigVMHost, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UAF"), Z_Construct_UClass_UAnimNextRigVMAsset_NoRegister) \
	DECLARE_SERIALIZER(UAnimNextRigVMAsset)


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_AnimNextRigVMAsset_h_54_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimNextRigVMAsset(UAnimNextRigVMAsset&&) = delete; \
	UAnimNextRigVMAsset(const UAnimNextRigVMAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UAF_API, UAnimNextRigVMAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextRigVMAsset); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextRigVMAsset) \
	UAF_API virtual ~UAnimNextRigVMAsset();


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_AnimNextRigVMAsset_h_51_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_AnimNextRigVMAsset_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_AnimNextRigVMAsset_h_54_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_AnimNextRigVMAsset_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimNextRigVMAsset;

// ********** End Class UAnimNextRigVMAsset ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Public_AnimNextRigVMAsset_h

// ********** Begin Enum EAnimNextRigVMAssetState **************************************************
#if WITH_EDITORONLY_DATA
#define FOREACH_ENUM_EANIMNEXTRIGVMASSETSTATE(op) \
	op(EAnimNextRigVMAssetState::CompiledWithErrors) \
	op(EAnimNextRigVMAssetState::CompiledWithWarnings) \
	op(EAnimNextRigVMAssetState::CompiledWithSuccess) 

enum class EAnimNextRigVMAssetState : uint8;
template<> struct TIsUEnumClass<EAnimNextRigVMAssetState> { enum { Value = true }; };
template<> UAF_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimNextRigVMAssetState>();
#endif // WITH_EDITORONLY_DATA
// ********** End Enum EAnimNextRigVMAssetState ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
