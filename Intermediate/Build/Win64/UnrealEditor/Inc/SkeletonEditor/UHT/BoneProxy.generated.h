// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BoneProxy.h"

#ifdef SKELETONEDITOR_BoneProxy_generated_h
#error "BoneProxy.generated.h already included, missing '#pragma once' in BoneProxy.h"
#endif
#define SKELETONEDITOR_BoneProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBoneProxy ***************************************************************
struct Z_Construct_UClass_UBoneProxy_Statics;
SKELETONEDITOR_API UClass* Z_Construct_UClass_UBoneProxy_NoRegister();

#define FID_Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBoneProxy(); \
	friend struct ::Z_Construct_UClass_UBoneProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SKELETONEDITOR_API UClass* ::Z_Construct_UClass_UBoneProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UBoneProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkeletonEditor"), Z_Construct_UClass_UBoneProxy_NoRegister) \
	DECLARE_SERIALIZER(UBoneProxy)


#define FID_Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBoneProxy(UBoneProxy&&) = delete; \
	UBoneProxy(const UBoneProxy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SKELETONEDITOR_API, UBoneProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoneProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBoneProxy) \
	SKELETONEDITOR_API virtual ~UBoneProxy();


#define FID_Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_23_PROLOG
#define FID_Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBoneProxy;

// ********** End Class UBoneProxy *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
