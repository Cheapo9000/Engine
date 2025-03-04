// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkAnimationVirtualSubject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINK_LiveLinkAnimationVirtualSubject_generated_h
#error "LiveLinkAnimationVirtualSubject.generated.h already included, missing '#pragma once' in LiveLinkAnimationVirtualSubject.h"
#endif
#define LIVELINK_LiveLinkAnimationVirtualSubject_generated_h

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkAnimationVirtualSubject(); \
	friend struct Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkAnimationVirtualSubject, ULiveLinkVirtualSubject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkAnimationVirtualSubject)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULiveLinkAnimationVirtualSubject(ULiveLinkAnimationVirtualSubject&&); \
	ULiveLinkAnimationVirtualSubject(const ULiveLinkAnimationVirtualSubject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkAnimationVirtualSubject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkAnimationVirtualSubject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkAnimationVirtualSubject) \
	NO_API virtual ~ULiveLinkAnimationVirtualSubject();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h_27_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINK_API UClass* StaticClass<class ULiveLinkAnimationVirtualSubject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h


#define FOREACH_ENUM_EBONETRANSFORMRESOLUTION(op) \
	op(EBoneTransformResolution::KeepParent) \
	op(EBoneTransformResolution::KeepChild) \
	op(EBoneTransformResolution::Combine) 

enum class EBoneTransformResolution;
template<> struct TIsUEnumClass<EBoneTransformResolution> { enum { Value = true }; };
template<> LIVELINK_API UEnum* StaticEnum<EBoneTransformResolution>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
