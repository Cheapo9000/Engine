// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GoogleARCoreAugmentedFace.h"

#ifdef GOOGLEARCOREBASE_GoogleARCoreAugmentedFace_generated_h
#error "GoogleARCoreAugmentedFace.generated.h already included, missing '#pragma once' in GoogleARCoreAugmentedFace.h"
#endif
#define GOOGLEARCOREBASE_GoogleARCoreAugmentedFace_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGoogleARCoreAugmentedFaceRegion : uint8;

// ********** Begin Class UGoogleARCoreAugmentedFace ***********************************************
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedFace_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLocalToTrackingTransformOfRegion); \
	DECLARE_FUNCTION(execGetLocalToWorldTransformOfRegion);


struct Z_Construct_UClass_UGoogleARCoreAugmentedFace_Statics;
GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreAugmentedFace_NoRegister();

#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedFace_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGoogleARCoreAugmentedFace(); \
	friend struct ::Z_Construct_UClass_UGoogleARCoreAugmentedFace_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GOOGLEARCOREBASE_API UClass* ::Z_Construct_UClass_UGoogleARCoreAugmentedFace_NoRegister(); \
public: \
	DECLARE_CLASS2(UGoogleARCoreAugmentedFace, UARFaceGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GoogleARCoreBase"), Z_Construct_UClass_UGoogleARCoreAugmentedFace_NoRegister) \
	DECLARE_SERIALIZER(UGoogleARCoreAugmentedFace)


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedFace_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGoogleARCoreAugmentedFace(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGoogleARCoreAugmentedFace(UGoogleARCoreAugmentedFace&&) = delete; \
	UGoogleARCoreAugmentedFace(const UGoogleARCoreAugmentedFace&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoogleARCoreAugmentedFace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoogleARCoreAugmentedFace); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGoogleARCoreAugmentedFace) \
	NO_API virtual ~UGoogleARCoreAugmentedFace();


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedFace_h_30_PROLOG
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedFace_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedFace_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedFace_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedFace_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGoogleARCoreAugmentedFace;

// ********** End Class UGoogleARCoreAugmentedFace *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedFace_h

// ********** Begin Enum EGoogleARCoreAugmentedFaceRegion ******************************************
#define FOREACH_ENUM_EGOOGLEARCOREAUGMENTEDFACEREGION(op) \
	op(EGoogleARCoreAugmentedFaceRegion::NoseTip) \
	op(EGoogleARCoreAugmentedFaceRegion::ForeheadLeft) \
	op(EGoogleARCoreAugmentedFaceRegion::ForeheadRight) 

enum class EGoogleARCoreAugmentedFaceRegion : uint8;
template<> struct TIsUEnumClass<EGoogleARCoreAugmentedFaceRegion> { enum { Value = true }; };
template<> GOOGLEARCOREBASE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGoogleARCoreAugmentedFaceRegion>();
// ********** End Enum EGoogleARCoreAugmentedFaceRegion ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
