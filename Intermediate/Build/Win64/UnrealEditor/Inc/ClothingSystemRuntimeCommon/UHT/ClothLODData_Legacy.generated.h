// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClothLODData_Legacy.h"

#ifdef CLOTHINGSYSTEMRUNTIMECOMMON_ClothLODData_Legacy_generated_h
#error "ClothLODData_Legacy.generated.h already included, missing '#pragma once' in ClothLODData_Legacy.h"
#endif
#define CLOTHINGSYSTEMRUNTIMECOMMON_ClothLODData_Legacy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FClothParameterMask_Legacy ****************************************
struct Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics;
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_Legacy_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics; \
	CLOTHINGSYSTEMRUNTIMECOMMON_API static class UScriptStruct* StaticStruct();


struct FClothParameterMask_Legacy;
// ********** End ScriptStruct FClothParameterMask_Legacy ******************************************

// ********** Begin Class UClothLODDataCommon_Legacy ***********************************************
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_Legacy_h_60_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UClothLODDataCommon_Legacy, CLOTHINGSYSTEMRUNTIMECOMMON_API)


struct Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics;
CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothLODDataCommon_Legacy_NoRegister();

#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_Legacy_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothLODDataCommon_Legacy(); \
	friend struct ::Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* ::Z_Construct_UClass_UClothLODDataCommon_Legacy_NoRegister(); \
public: \
	DECLARE_CLASS2(UClothLODDataCommon_Legacy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClothingSystemRuntimeCommon"), Z_Construct_UClass_UClothLODDataCommon_Legacy_NoRegister) \
	DECLARE_SERIALIZER(UClothLODDataCommon_Legacy) \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_Legacy_h_60_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_Legacy_h_60_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClothLODDataCommon_Legacy(UClothLODDataCommon_Legacy&&) = delete; \
	UClothLODDataCommon_Legacy(const UClothLODDataCommon_Legacy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLOTHINGSYSTEMRUNTIMECOMMON_API, UClothLODDataCommon_Legacy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothLODDataCommon_Legacy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothLODDataCommon_Legacy)


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_Legacy_h_57_PROLOG
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_Legacy_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_Legacy_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_Legacy_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClothLODDataCommon_Legacy;

// ********** End Class UClothLODDataCommon_Legacy *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_Legacy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
