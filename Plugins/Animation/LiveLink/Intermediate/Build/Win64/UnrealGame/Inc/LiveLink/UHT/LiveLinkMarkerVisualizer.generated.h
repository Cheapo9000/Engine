// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Visualizers/LiveLinkMarkerVisualizer.h"

#ifdef LIVELINK_LiveLinkMarkerVisualizer_generated_h
#error "LiveLinkMarkerVisualizer.generated.h already included, missing '#pragma once' in LiveLinkMarkerVisualizer.h"
#endif
#define LIVELINK_LiveLinkMarkerVisualizer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkMarkerVisualizer ************************************************
struct Z_Construct_UClass_ULiveLinkMarkerVisualizer_Statics;
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkMarkerVisualizer_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_Visualizers_LiveLinkMarkerVisualizer_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkMarkerVisualizer(); \
	friend struct ::Z_Construct_UClass_ULiveLinkMarkerVisualizer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINK_API UClass* ::Z_Construct_UClass_ULiveLinkMarkerVisualizer_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkMarkerVisualizer, UInstancedStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLink"), Z_Construct_UClass_ULiveLinkMarkerVisualizer_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkMarkerVisualizer)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_Visualizers_LiveLinkMarkerVisualizer_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkMarkerVisualizer(ULiveLinkMarkerVisualizer&&) = delete; \
	ULiveLinkMarkerVisualizer(const ULiveLinkMarkerVisualizer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINK_API, ULiveLinkMarkerVisualizer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkMarkerVisualizer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkMarkerVisualizer)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_Visualizers_LiveLinkMarkerVisualizer_h_28_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_Visualizers_LiveLinkMarkerVisualizer_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_Visualizers_LiveLinkMarkerVisualizer_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_Visualizers_LiveLinkMarkerVisualizer_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkMarkerVisualizer;

// ********** End Class ULiveLinkMarkerVisualizer **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_Visualizers_LiveLinkMarkerVisualizer_h

// ********** Begin Enum EAxisSign *****************************************************************
#define FOREACH_ENUM_EAXISSIGN(op) \
	op(EAxisSign::Positive) \
	op(EAxisSign::Negative) 

enum class EAxisSign : uint8;
template<> struct TIsUEnumClass<EAxisSign> { enum { Value = true }; };
template<> LIVELINK_NON_ATTRIBUTED_API UEnum* StaticEnum<EAxisSign>();
// ********** End Enum EAxisSign *******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
