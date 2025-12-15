// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClothConfig.h"

#ifdef CLOTHINGSYSTEMRUNTIMECOMMON_ClothConfig_generated_h
#error "ClothConfig.generated.h already included, missing '#pragma once' in ClothConfig.h"
#endif
#define CLOTHINGSYSTEMRUNTIMECOMMON_ClothConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UClothConfigCommon *******************************************************
struct Z_Construct_UClass_UClothConfigCommon_Statics;
CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothConfigCommon_NoRegister();

#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothConfigCommon(); \
	friend struct ::Z_Construct_UClass_UClothConfigCommon_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* ::Z_Construct_UClass_UClothConfigCommon_NoRegister(); \
public: \
	DECLARE_CLASS2(UClothConfigCommon, UClothConfigBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClothingSystemRuntimeCommon"), Z_Construct_UClass_UClothConfigCommon_NoRegister) \
	DECLARE_SERIALIZER(UClothConfigCommon)


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClothConfigCommon(UClothConfigCommon&&) = delete; \
	UClothConfigCommon(const UClothConfigCommon&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLOTHINGSYSTEMRUNTIMECOMMON_API, UClothConfigCommon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothConfigCommon); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UClothConfigCommon)


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_28_PROLOG
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClothConfigCommon;

// ********** End Class UClothConfigCommon *********************************************************

// ********** Begin Class UClothSharedConfigCommon *************************************************
struct Z_Construct_UClass_UClothSharedConfigCommon_Statics;
CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothSharedConfigCommon_NoRegister();

#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothSharedConfigCommon(); \
	friend struct ::Z_Construct_UClass_UClothSharedConfigCommon_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* ::Z_Construct_UClass_UClothSharedConfigCommon_NoRegister(); \
public: \
	DECLARE_CLASS2(UClothSharedConfigCommon, UClothConfigCommon, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClothingSystemRuntimeCommon"), Z_Construct_UClass_UClothSharedConfigCommon_NoRegister) \
	DECLARE_SERIALIZER(UClothSharedConfigCommon)


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_74_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClothSharedConfigCommon(UClothSharedConfigCommon&&) = delete; \
	UClothSharedConfigCommon(const UClothSharedConfigCommon&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLOTHINGSYSTEMRUNTIMECOMMON_API, UClothSharedConfigCommon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothSharedConfigCommon); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UClothSharedConfigCommon)


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_71_PROLOG
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_74_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClothSharedConfigCommon;

// ********** End Class UClothSharedConfigCommon ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h

// ********** Begin Enum EClothMassMode ************************************************************
#define FOREACH_ENUM_ECLOTHMASSMODE(op) \
	op(EClothMassMode::UniformMass) \
	op(EClothMassMode::TotalMass) \
	op(EClothMassMode::Density) \
	op(EClothMassMode::MaxClothMassMode) 

enum class EClothMassMode : uint8;
template<> struct TIsUEnumClass<EClothMassMode> { enum { Value = true }; };
template<> CLOTHINGSYSTEMRUNTIMECOMMON_NON_ATTRIBUTED_API UEnum* StaticEnum<EClothMassMode>();
// ********** End Enum EClothMassMode **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
