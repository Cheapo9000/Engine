// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkAnimationVirtualSubject.h"

#ifdef LIVELINK_LiveLinkAnimationVirtualSubject_generated_h
#error "LiveLinkAnimationVirtualSubject.generated.h already included, missing '#pragma once' in LiveLinkAnimationVirtualSubject.h"
#endif
#define LIVELINK_LiveLinkAnimationVirtualSubject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkAnimationVirtualSubject *****************************************
struct Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics;
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkAnimationVirtualSubject(); \
	friend struct ::Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINK_API UClass* ::Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkAnimationVirtualSubject, ULiveLinkVirtualSubject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkAnimationVirtualSubject)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkAnimationVirtualSubject(ULiveLinkAnimationVirtualSubject&&) = delete; \
	ULiveLinkAnimationVirtualSubject(const ULiveLinkAnimationVirtualSubject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINK_API, ULiveLinkAnimationVirtualSubject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkAnimationVirtualSubject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkAnimationVirtualSubject) \
	LIVELINK_API virtual ~ULiveLinkAnimationVirtualSubject();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h_29_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkAnimationVirtualSubject;

// ********** End Class ULiveLinkAnimationVirtualSubject *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h

// ********** Begin Enum EBoneTransformResolution **************************************************
#define FOREACH_ENUM_EBONETRANSFORMRESOLUTION(op) \
	op(EBoneTransformResolution::KeepParent) \
	op(EBoneTransformResolution::KeepChild) \
	op(EBoneTransformResolution::Combine) 

enum class EBoneTransformResolution;
template<> struct TIsUEnumClass<EBoneTransformResolution> { enum { Value = true }; };
template<> LIVELINK_NON_ATTRIBUTED_API UEnum* StaticEnum<EBoneTransformResolution>();
// ********** End Enum EBoneTransformResolution ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
