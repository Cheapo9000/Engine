// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenXRHandTrackingLiveLinkRemapAsset.h"

#ifdef OPENXRHANDTRACKING_OpenXRHandTrackingLiveLinkRemapAsset_generated_h
#error "OpenXRHandTrackingLiveLinkRemapAsset.generated.h already included, missing '#pragma once' in OpenXRHandTrackingLiveLinkRemapAsset.h"
#endif
#define OPENXRHANDTRACKING_OpenXRHandTrackingLiveLinkRemapAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOpenXRHandTrackingLiveLinkRemapAsset ************************************
struct Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics;
OPENXRHANDTRACKING_API UClass* Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_NoRegister();

#define FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Private_OpenXRHandTrackingLiveLinkRemapAsset_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUOpenXRHandTrackingLiveLinkRemapAsset(); \
	friend struct ::Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPENXRHANDTRACKING_API UClass* ::Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UOpenXRHandTrackingLiveLinkRemapAsset, ULiveLinkRetargetAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenXRHandTracking"), Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_NoRegister) \
	DECLARE_SERIALIZER(UOpenXRHandTrackingLiveLinkRemapAsset)


#define FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Private_OpenXRHandTrackingLiveLinkRemapAsset_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenXRHandTrackingLiveLinkRemapAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenXRHandTrackingLiveLinkRemapAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenXRHandTrackingLiveLinkRemapAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenXRHandTrackingLiveLinkRemapAsset); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOpenXRHandTrackingLiveLinkRemapAsset(UOpenXRHandTrackingLiveLinkRemapAsset&&) = delete; \
	UOpenXRHandTrackingLiveLinkRemapAsset(const UOpenXRHandTrackingLiveLinkRemapAsset&) = delete; \
	NO_API virtual ~UOpenXRHandTrackingLiveLinkRemapAsset();


#define FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Private_OpenXRHandTrackingLiveLinkRemapAsset_h_27_PROLOG
#define FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Private_OpenXRHandTrackingLiveLinkRemapAsset_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Private_OpenXRHandTrackingLiveLinkRemapAsset_h_31_INCLASS \
	FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Private_OpenXRHandTrackingLiveLinkRemapAsset_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOpenXRHandTrackingLiveLinkRemapAsset;

// ********** End Class UOpenXRHandTrackingLiveLinkRemapAsset **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Private_OpenXRHandTrackingLiveLinkRemapAsset_h

// ********** Begin Enum EQuatSwizzleAxisB *********************************************************
#define FOREACH_ENUM_EQUATSWIZZLEAXISB(op) \
	op(EQuatSwizzleAxisB::X) \
	op(EQuatSwizzleAxisB::Y) \
	op(EQuatSwizzleAxisB::Z) \
	op(EQuatSwizzleAxisB::W) \
	op(EQuatSwizzleAxisB::MinusX) \
	op(EQuatSwizzleAxisB::MinusY) \
	op(EQuatSwizzleAxisB::MinusZ) \
	op(EQuatSwizzleAxisB::MinusW) 

enum class EQuatSwizzleAxisB : uint8;
template<> struct TIsUEnumClass<EQuatSwizzleAxisB> { enum { Value = true }; };
template<> OPENXRHANDTRACKING_NON_ATTRIBUTED_API UEnum* StaticEnum<EQuatSwizzleAxisB>();
// ********** End Enum EQuatSwizzleAxisB ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
