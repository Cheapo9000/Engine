// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SafeZone.h"

#ifdef UMG_SafeZone_generated_h
#error "SafeZone.generated.h already included, missing '#pragma once' in SafeZone.h"
#endif
#define UMG_SafeZone_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USafeZone ****************************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSidesToPad);


#define FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_30_ACCESSORS \
static void GetPadLeft_WrapperImpl(const void* Object, void* OutValue); \
static void SetPadLeft_WrapperImpl(void* Object, const void* InValue); \
static void GetPadRight_WrapperImpl(const void* Object, void* OutValue); \
static void SetPadRight_WrapperImpl(void* Object, const void* InValue); \
static void GetPadTop_WrapperImpl(const void* Object, void* OutValue); \
static void SetPadTop_WrapperImpl(void* Object, const void* InValue); \
static void GetPadBottom_WrapperImpl(const void* Object, void* OutValue); \
static void SetPadBottom_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_USafeZone_Statics;
UMG_API UClass* Z_Construct_UClass_USafeZone_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSafeZone(); \
	friend struct ::Z_Construct_UClass_USafeZone_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_USafeZone_NoRegister(); \
public: \
	DECLARE_CLASS2(USafeZone, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_USafeZone_NoRegister) \
	DECLARE_SERIALIZER(USafeZone)


#define FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USafeZone(USafeZone&&) = delete; \
	USafeZone(const USafeZone&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, USafeZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USafeZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USafeZone) \
	UMG_API virtual ~USafeZone();


#define FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_27_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_30_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USafeZone;

// ********** End Class USafeZone ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
