// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClothConfigNv.h"

#ifdef CLOTHINGSYSTEMRUNTIMENV_ClothConfigNv_generated_h
#error "ClothConfigNv.generated.h already included, missing '#pragma once' in ClothConfigNv.h"
#endif
#define CLOTHINGSYSTEMRUNTIMENV_ClothConfigNv_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FClothConstraintSetupNv *******************************************
struct Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics;
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics; \
	CLOTHINGSYSTEMRUNTIMENV_API static class UScriptStruct* StaticStruct();


struct FClothConstraintSetupNv;
// ********** End ScriptStruct FClothConstraintSetupNv *********************************************

// ********** Begin Class UClothConfigNv ***********************************************************
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_67_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UClothConfigNv, CLOTHINGSYSTEMRUNTIMENV_API)


struct Z_Construct_UClass_UClothConfigNv_Statics;
CLOTHINGSYSTEMRUNTIMENV_API UClass* Z_Construct_UClass_UClothConfigNv_NoRegister();

#define FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothConfigNv(); \
	friend struct ::Z_Construct_UClass_UClothConfigNv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLOTHINGSYSTEMRUNTIMENV_API UClass* ::Z_Construct_UClass_UClothConfigNv_NoRegister(); \
public: \
	DECLARE_CLASS2(UClothConfigNv, UClothConfigCommon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClothingSystemRuntimeNv"), Z_Construct_UClass_UClothConfigNv_NoRegister) \
	DECLARE_SERIALIZER(UClothConfigNv) \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_67_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_67_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClothConfigNv(UClothConfigNv&&) = delete; \
	UClothConfigNv(const UClothConfigNv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLOTHINGSYSTEMRUNTIMENV_API, UClothConfigNv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothConfigNv); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UClothConfigNv) \
	CLOTHINGSYSTEMRUNTIMENV_API virtual ~UClothConfigNv();


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_64_PROLOG
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClothConfigNv;

// ********** End Class UClothConfigNv *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h

// ********** Begin Enum EClothingWindMethodNv *****************************************************
#define FOREACH_ENUM_ECLOTHINGWINDMETHODNV(op) \
	op(EClothingWindMethodNv::Legacy) \
	op(EClothingWindMethodNv::Accurate) 

enum class EClothingWindMethodNv : uint8;
template<> struct TIsUEnumClass<EClothingWindMethodNv> { enum { Value = true }; };
template<> CLOTHINGSYSTEMRUNTIMENV_NON_ATTRIBUTED_API UEnum* StaticEnum<EClothingWindMethodNv>();
// ********** End Enum EClothingWindMethodNv *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
