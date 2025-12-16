// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Visualizers/LiveLinkDataPreviewComponent.h"

#ifdef LIVELINK_LiveLinkDataPreviewComponent_generated_h
#error "LiveLinkDataPreviewComponent.generated.h already included, missing '#pragma once' in LiveLinkDataPreviewComponent.h"
#endif
#define LIVELINK_LiveLinkDataPreviewComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkDataPreviewComponent ********************************************
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Visualizers_LiveLinkDataPreviewComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDrawLabels); \
	DECLARE_FUNCTION(execSetEvaluateLiveLinkData);


struct Z_Construct_UClass_ULiveLinkDataPreviewComponent_Statics;
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkDataPreviewComponent_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Visualizers_LiveLinkDataPreviewComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkDataPreviewComponent(); \
	friend struct ::Z_Construct_UClass_ULiveLinkDataPreviewComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINK_API UClass* ::Z_Construct_UClass_ULiveLinkDataPreviewComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkDataPreviewComponent, UInstancedStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLink"), Z_Construct_UClass_ULiveLinkDataPreviewComponent_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkDataPreviewComponent)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Visualizers_LiveLinkDataPreviewComponent_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkDataPreviewComponent(ULiveLinkDataPreviewComponent&&) = delete; \
	ULiveLinkDataPreviewComponent(const ULiveLinkDataPreviewComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINK_API, ULiveLinkDataPreviewComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkDataPreviewComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkDataPreviewComponent) \
	LIVELINK_API virtual ~ULiveLinkDataPreviewComponent();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Visualizers_LiveLinkDataPreviewComponent_h_28_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Visualizers_LiveLinkDataPreviewComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Visualizers_LiveLinkDataPreviewComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Visualizers_LiveLinkDataPreviewComponent_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Visualizers_LiveLinkDataPreviewComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkDataPreviewComponent;

// ********** End Class ULiveLinkDataPreviewComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Visualizers_LiveLinkDataPreviewComponent_h

// ********** Begin Enum ELiveLinkVisualBoneType ***************************************************
#define FOREACH_ENUM_ELIVELINKVISUALBONETYPE(op) \
	op(ELiveLinkVisualBoneType::Joint) \
	op(ELiveLinkVisualBoneType::Bone) 

enum class ELiveLinkVisualBoneType : uint8;
template<> struct TIsUEnumClass<ELiveLinkVisualBoneType> { enum { Value = true }; };
template<> LIVELINK_NON_ATTRIBUTED_API UEnum* StaticEnum<ELiveLinkVisualBoneType>();
// ********** End Enum ELiveLinkVisualBoneType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
