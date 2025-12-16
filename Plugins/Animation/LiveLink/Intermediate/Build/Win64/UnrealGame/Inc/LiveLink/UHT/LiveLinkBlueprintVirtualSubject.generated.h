// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VirtualSubjects/LiveLinkBlueprintVirtualSubject.h"

#ifdef LIVELINK_LiveLinkBlueprintVirtualSubject_generated_h
#error "LiveLinkBlueprintVirtualSubject.generated.h already included, missing '#pragma once' in LiveLinkBlueprintVirtualSubject.h"
#endif
#define LIVELINK_LiveLinkBlueprintVirtualSubject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLiveLinkBaseFrameData;
struct FLiveLinkBaseStaticData;

// ********** Begin Class ULiveLinkBlueprintVirtualSubject *****************************************
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h_15_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics;
	struct Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics; \
	struct Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics; \
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkBlueprintVirtualSubject(); \
	friend struct ::Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics; \
	friend struct ::Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics; \
	friend struct ::Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINK_API UClass* ::Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkBlueprintVirtualSubject, ULiveLinkVirtualSubject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LiveLink"), Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkBlueprintVirtualSubject)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkBlueprintVirtualSubject(ULiveLinkBlueprintVirtualSubject&&) = delete; \
	ULiveLinkBlueprintVirtualSubject(const ULiveLinkBlueprintVirtualSubject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINK_API, ULiveLinkBlueprintVirtualSubject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkBlueprintVirtualSubject); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkBlueprintVirtualSubject) \
	LIVELINK_API virtual ~ULiveLinkBlueprintVirtualSubject();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h_12_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h_15_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkBlueprintVirtualSubject;

// ********** End Class ULiveLinkBlueprintVirtualSubject *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
