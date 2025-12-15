// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimBank.h"

#ifdef ENGINE_AnimBank_generated_h
#error "AnimBank.generated.h already included, missing '#pragma once' in AnimBank.h"
#endif
#define ENGINE_AnimBank_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimBankSequence *************************************************
struct Z_Construct_UScriptStruct_FAnimBankSequence_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBank_h_138_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimBankSequence_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimBankSequence;
// ********** End ScriptStruct FAnimBankSequence ***************************************************

// ********** Begin Class UAnimBank ****************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBank_h_179_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimBank, ENGINE_API)


struct Z_Construct_UClass_UAnimBank_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimBank_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBank_h_179_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimBank(); \
	friend struct ::Z_Construct_UClass_UAnimBank_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimBank_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimBank, UAnimationAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimBank_NoRegister) \
	DECLARE_SERIALIZER(UAnimBank) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBank_h_179_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAnimBank*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBank_h_179_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimBank(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimBank(UAnimBank&&) = delete; \
	UAnimBank(const UAnimBank&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimBank); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimBank); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimBank) \
	ENGINE_API virtual ~UAnimBank();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBank_h_176_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBank_h_179_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBank_h_179_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBank_h_179_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimBank;

// ********** End Class UAnimBank ******************************************************************

// ********** Begin ScriptStruct FAnimBankItem *****************************************************
struct Z_Construct_UScriptStruct_FAnimBankItem_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBank_h_289_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimBankItem_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimBankItem;
// ********** End ScriptStruct FAnimBankItem *******************************************************

// ********** Begin ScriptStruct FSoftAnimBankItem *************************************************
struct Z_Construct_UScriptStruct_FSoftAnimBankItem_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBank_h_323_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoftAnimBankItem_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSoftAnimBankItem;
// ********** End ScriptStruct FSoftAnimBankItem ***************************************************

// ********** Begin ScriptStruct FSkinnedMeshComponentDescriptorBase *******************************
struct Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptorBase_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBank_h_357_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptorBase_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSkinnedMeshComponentDescriptorBase;
// ********** End ScriptStruct FSkinnedMeshComponentDescriptorBase *********************************

// ********** Begin ScriptStruct FSkinnedMeshComponentDescriptor ***********************************
struct Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptor_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBank_h_453_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptor_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSkinnedMeshComponentDescriptorBase Super;


struct FSkinnedMeshComponentDescriptor;
// ********** End ScriptStruct FSkinnedMeshComponentDescriptor *************************************

// ********** Begin ScriptStruct FSoftSkinnedMeshComponentDescriptor *******************************
struct Z_Construct_UScriptStruct_FSoftSkinnedMeshComponentDescriptor_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBank_h_497_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoftSkinnedMeshComponentDescriptor_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSkinnedMeshComponentDescriptorBase Super;


struct FSoftSkinnedMeshComponentDescriptor;
// ********** End ScriptStruct FSoftSkinnedMeshComponentDescriptor *********************************

// ********** Begin Class UAnimBankData ************************************************************
struct Z_Construct_UClass_UAnimBankData_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimBankData_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBank_h_616_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimBankData(); \
	friend struct ::Z_Construct_UClass_UAnimBankData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimBankData_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimBankData, UTransformProviderData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimBankData_NoRegister) \
	DECLARE_SERIALIZER(UAnimBankData)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBank_h_616_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimBankData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimBankData(UAnimBankData&&) = delete; \
	UAnimBankData(const UAnimBankData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimBankData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimBankData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimBankData) \
	ENGINE_API virtual ~UAnimBankData();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBank_h_613_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBank_h_616_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBank_h_616_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBank_h_616_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimBankData;

// ********** End Class UAnimBankData **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBank_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
