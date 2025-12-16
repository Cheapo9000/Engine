// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CaptureTimecodeInfo.h"

#ifdef CAPTUREDATAUTILS_CaptureTimecodeInfo_generated_h
#error "CaptureTimecodeInfo.generated.h already included, missing '#pragma once' in CaptureTimecodeInfo.h"
#endif
#define CAPTUREDATAUTILS_CaptureTimecodeInfo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCaptureTimecodeInfo *****************************************************
struct Z_Construct_UClass_UCaptureTimecodeInfo_Statics;
CAPTUREDATAUTILS_API UClass* Z_Construct_UClass_UCaptureTimecodeInfo_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataUtils_Private_CaptureTimecodeInfo_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCaptureTimecodeInfo(); \
	friend struct ::Z_Construct_UClass_UCaptureTimecodeInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTUREDATAUTILS_API UClass* ::Z_Construct_UClass_UCaptureTimecodeInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(UCaptureTimecodeInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CaptureDataUtils"), Z_Construct_UClass_UCaptureTimecodeInfo_NoRegister) \
	DECLARE_SERIALIZER(UCaptureTimecodeInfo)


#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataUtils_Private_CaptureTimecodeInfo_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCaptureTimecodeInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCaptureTimecodeInfo(UCaptureTimecodeInfo&&) = delete; \
	UCaptureTimecodeInfo(const UCaptureTimecodeInfo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCaptureTimecodeInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCaptureTimecodeInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCaptureTimecodeInfo) \
	NO_API virtual ~UCaptureTimecodeInfo();


#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataUtils_Private_CaptureTimecodeInfo_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataUtils_Private_CaptureTimecodeInfo_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataUtils_Private_CaptureTimecodeInfo_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataUtils_Private_CaptureTimecodeInfo_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCaptureTimecodeInfo;

// ********** End Class UCaptureTimecodeInfo *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataUtils_Private_CaptureTimecodeInfo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
