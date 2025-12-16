// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RelativeBodyAnimNotifies.h"

#ifdef RELATIVEBODYANIMINFO_RelativeBodyAnimNotifies_generated_h
#error "RelativeBodyAnimNotifies.generated.h already included, missing '#pragma once' in RelativeBodyAnimNotifies.h"
#endif
#define RELATIVEBODYANIMINFO_RelativeBodyAnimNotifies_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
class USkeletalMesh;
class USkeletalMeshComponent;

// ********** Begin Class URelativeBodyAnimNotifyBase **********************************************
struct Z_Construct_UClass_URelativeBodyAnimNotifyBase_Statics;
RELATIVEBODYANIMINFO_API UClass* Z_Construct_UClass_URelativeBodyAnimNotifyBase_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimInfo_Public_RelativeBodyAnimNotifies_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURelativeBodyAnimNotifyBase(); \
	friend struct ::Z_Construct_UClass_URelativeBodyAnimNotifyBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RELATIVEBODYANIMINFO_API UClass* ::Z_Construct_UClass_URelativeBodyAnimNotifyBase_NoRegister(); \
public: \
	DECLARE_CLASS2(URelativeBodyAnimNotifyBase, UAnimNotify, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RelativeBodyAnimInfo"), Z_Construct_UClass_URelativeBodyAnimNotifyBase_NoRegister) \
	DECLARE_SERIALIZER(URelativeBodyAnimNotifyBase)


#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimInfo_Public_RelativeBodyAnimNotifies_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URelativeBodyAnimNotifyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URelativeBodyAnimNotifyBase(URelativeBodyAnimNotifyBase&&) = delete; \
	URelativeBodyAnimNotifyBase(const URelativeBodyAnimNotifyBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URelativeBodyAnimNotifyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URelativeBodyAnimNotifyBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URelativeBodyAnimNotifyBase) \
	NO_API virtual ~URelativeBodyAnimNotifyBase();


#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimInfo_Public_RelativeBodyAnimNotifies_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimInfo_Public_RelativeBodyAnimNotifies_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimInfo_Public_RelativeBodyAnimNotifies_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimInfo_Public_RelativeBodyAnimNotifies_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URelativeBodyAnimNotifyBase;

// ********** End Class URelativeBodyAnimNotifyBase ************************************************

// ********** Begin Class URelativeBodyBakeAnimNotify **********************************************
#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimInfo_Public_RelativeBodyAnimNotifies_h_25_CALLBACK_WRAPPERS
struct Z_Construct_UClass_URelativeBodyBakeAnimNotify_Statics;
RELATIVEBODYANIMINFO_API UClass* Z_Construct_UClass_URelativeBodyBakeAnimNotify_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimInfo_Public_RelativeBodyAnimNotifies_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURelativeBodyBakeAnimNotify(); \
	friend struct ::Z_Construct_UClass_URelativeBodyBakeAnimNotify_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RELATIVEBODYANIMINFO_API UClass* ::Z_Construct_UClass_URelativeBodyBakeAnimNotify_NoRegister(); \
public: \
	DECLARE_CLASS2(URelativeBodyBakeAnimNotify, URelativeBodyAnimNotifyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RelativeBodyAnimInfo"), Z_Construct_UClass_URelativeBodyBakeAnimNotify_NoRegister) \
	DECLARE_SERIALIZER(URelativeBodyBakeAnimNotify)


#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimInfo_Public_RelativeBodyAnimNotifies_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URelativeBodyBakeAnimNotify(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URelativeBodyBakeAnimNotify(URelativeBodyBakeAnimNotify&&) = delete; \
	URelativeBodyBakeAnimNotify(const URelativeBodyBakeAnimNotify&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URelativeBodyBakeAnimNotify); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URelativeBodyBakeAnimNotify); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URelativeBodyBakeAnimNotify) \
	NO_API virtual ~URelativeBodyBakeAnimNotify();


#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimInfo_Public_RelativeBodyAnimNotifies_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimInfo_Public_RelativeBodyAnimNotifies_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimInfo_Public_RelativeBodyAnimNotifies_h_25_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimInfo_Public_RelativeBodyAnimNotifies_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimInfo_Public_RelativeBodyAnimNotifies_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URelativeBodyBakeAnimNotify;

// ********** End Class URelativeBodyBakeAnimNotify ************************************************

// ********** Begin Class URelativeBodyPerFrameAnimNotify ******************************************
#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimInfo_Public_RelativeBodyAnimNotifies_h_72_CALLBACK_WRAPPERS
struct Z_Construct_UClass_URelativeBodyPerFrameAnimNotify_Statics;
RELATIVEBODYANIMINFO_API UClass* Z_Construct_UClass_URelativeBodyPerFrameAnimNotify_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimInfo_Public_RelativeBodyAnimNotifies_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURelativeBodyPerFrameAnimNotify(); \
	friend struct ::Z_Construct_UClass_URelativeBodyPerFrameAnimNotify_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RELATIVEBODYANIMINFO_API UClass* ::Z_Construct_UClass_URelativeBodyPerFrameAnimNotify_NoRegister(); \
public: \
	DECLARE_CLASS2(URelativeBodyPerFrameAnimNotify, URelativeBodyAnimNotifyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RelativeBodyAnimInfo"), Z_Construct_UClass_URelativeBodyPerFrameAnimNotify_NoRegister) \
	DECLARE_SERIALIZER(URelativeBodyPerFrameAnimNotify)


#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimInfo_Public_RelativeBodyAnimNotifies_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URelativeBodyPerFrameAnimNotify(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URelativeBodyPerFrameAnimNotify(URelativeBodyPerFrameAnimNotify&&) = delete; \
	URelativeBodyPerFrameAnimNotify(const URelativeBodyPerFrameAnimNotify&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URelativeBodyPerFrameAnimNotify); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URelativeBodyPerFrameAnimNotify); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URelativeBodyPerFrameAnimNotify) \
	NO_API virtual ~URelativeBodyPerFrameAnimNotify();


#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimInfo_Public_RelativeBodyAnimNotifies_h_69_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimInfo_Public_RelativeBodyAnimNotifies_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimInfo_Public_RelativeBodyAnimNotifies_h_72_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimInfo_Public_RelativeBodyAnimNotifies_h_72_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimInfo_Public_RelativeBodyAnimNotifies_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URelativeBodyPerFrameAnimNotify;

// ********** End Class URelativeBodyPerFrameAnimNotify ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeBodyAnimInfo_Public_RelativeBodyAnimNotifies_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
