// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Properties/RecomputeUVsProperties.h"

#ifdef MODELINGOPERATORS_RecomputeUVsProperties_generated_h
#error "RecomputeUVsProperties.generated.h already included, missing '#pragma once' in RecomputeUVsProperties.h"
#endif
#define MODELINGOPERATORS_RecomputeUVsProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URecomputeUVsToolProperties **********************************************
struct Z_Construct_UClass_URecomputeUVsToolProperties_Statics;
MODELINGOPERATORS_API UClass* Z_Construct_UClass_URecomputeUVsToolProperties_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_RecomputeUVsProperties_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURecomputeUVsToolProperties(); \
	friend struct ::Z_Construct_UClass_URecomputeUVsToolProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGOPERATORS_API UClass* ::Z_Construct_UClass_URecomputeUVsToolProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(URecomputeUVsToolProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingOperators"), Z_Construct_UClass_URecomputeUVsToolProperties_NoRegister) \
	DECLARE_SERIALIZER(URecomputeUVsToolProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_RecomputeUVsProperties_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGOPERATORS_API URecomputeUVsToolProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URecomputeUVsToolProperties(URecomputeUVsToolProperties&&) = delete; \
	URecomputeUVsToolProperties(const URecomputeUVsToolProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGOPERATORS_API, URecomputeUVsToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URecomputeUVsToolProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URecomputeUVsToolProperties) \
	MODELINGOPERATORS_API virtual ~URecomputeUVsToolProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_RecomputeUVsProperties_h_66_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_RecomputeUVsProperties_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_RecomputeUVsProperties_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_RecomputeUVsProperties_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URecomputeUVsToolProperties;

// ********** End Class URecomputeUVsToolProperties ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_RecomputeUVsProperties_h

// ********** Begin Enum ERecomputeUVsPropertiesUnwrapType *****************************************
#define FOREACH_ENUM_ERECOMPUTEUVSPROPERTIESUNWRAPTYPE(op) \
	op(ERecomputeUVsPropertiesUnwrapType::ExpMap) \
	op(ERecomputeUVsPropertiesUnwrapType::Conformal) \
	op(ERecomputeUVsPropertiesUnwrapType::SpectralConformal) \
	op(ERecomputeUVsPropertiesUnwrapType::IslandMerging) 

enum class ERecomputeUVsPropertiesUnwrapType;
template<> struct TIsUEnumClass<ERecomputeUVsPropertiesUnwrapType> { enum { Value = true }; };
template<> MODELINGOPERATORS_NON_ATTRIBUTED_API UEnum* StaticEnum<ERecomputeUVsPropertiesUnwrapType>();
// ********** End Enum ERecomputeUVsPropertiesUnwrapType *******************************************

// ********** Begin Enum ERecomputeUVsPropertiesIslandMode *****************************************
#define FOREACH_ENUM_ERECOMPUTEUVSPROPERTIESISLANDMODE(op) \
	op(ERecomputeUVsPropertiesIslandMode::PolyGroups) \
	op(ERecomputeUVsPropertiesIslandMode::ExistingUVs) 

enum class ERecomputeUVsPropertiesIslandMode;
template<> struct TIsUEnumClass<ERecomputeUVsPropertiesIslandMode> { enum { Value = true }; };
template<> MODELINGOPERATORS_NON_ATTRIBUTED_API UEnum* StaticEnum<ERecomputeUVsPropertiesIslandMode>();
// ********** End Enum ERecomputeUVsPropertiesIslandMode *******************************************

// ********** Begin Enum ERecomputeUVsToolOrientationMode ******************************************
#define FOREACH_ENUM_ERECOMPUTEUVSTOOLORIENTATIONMODE(op) \
	op(ERecomputeUVsToolOrientationMode::None) \
	op(ERecomputeUVsToolOrientationMode::MinBounds) 

enum class ERecomputeUVsToolOrientationMode;
template<> struct TIsUEnumClass<ERecomputeUVsToolOrientationMode> { enum { Value = true }; };
template<> MODELINGOPERATORS_NON_ATTRIBUTED_API UEnum* StaticEnum<ERecomputeUVsToolOrientationMode>();
// ********** End Enum ERecomputeUVsToolOrientationMode ********************************************

// ********** Begin Enum ERecomputeUVsPropertiesLayoutType *****************************************
#define FOREACH_ENUM_ERECOMPUTEUVSPROPERTIESLAYOUTTYPE(op) \
	op(ERecomputeUVsPropertiesLayoutType::None) \
	op(ERecomputeUVsPropertiesLayoutType::Repack) \
	op(ERecomputeUVsPropertiesLayoutType::NormalizeToExistingBounds) \
	op(ERecomputeUVsPropertiesLayoutType::NormalizeToBounds) \
	op(ERecomputeUVsPropertiesLayoutType::NormalizeToWorld) 

enum class ERecomputeUVsPropertiesLayoutType;
template<> struct TIsUEnumClass<ERecomputeUVsPropertiesLayoutType> { enum { Value = true }; };
template<> MODELINGOPERATORS_NON_ATTRIBUTED_API UEnum* StaticEnum<ERecomputeUVsPropertiesLayoutType>();
// ********** End Enum ERecomputeUVsPropertiesLayoutType *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
